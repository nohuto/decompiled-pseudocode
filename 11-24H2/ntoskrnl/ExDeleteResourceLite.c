/*
 * XREFs of ExDeleteResourceLite @ 0x1402E55A0
 * Callers:
 *     CcDeallocateBcb @ 0x1402E5568 (CcDeallocateBcb.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     DifExDeleteResourceLiteWrapper @ 0x14061BFC0 (DifExDeleteResourceLiteWrapper.c)
 *     PiDrvDbDestroyNode @ 0x140734AD8 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140770F80 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140817930 (_PnpCtxCloseMachine.c)
 *     DrvDbOpenContext @ 0x140823D90 (DrvDbOpenContext.c)
 *     DrvDbDestroyDatabaseNode @ 0x140824478 (DrvDbDestroyDatabaseNode.c)
 *     MUIInitializeResourceLock @ 0x1408F80F8 (MUIInitializeResourceLock.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     RtlDestroyHeap @ 0x140A8D840 (RtlDestroyHeap.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A310 (CmpDelayFreeRMWorker.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpOwnerEntryToThread @ 0x1402E5B70 (ExpOwnerEntryToThread.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1403FECB0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v3; // edi
  LONG i; // edx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rdi
  unsigned int j; // esi
  POWNER_ENTRY v11; // rcx
  struct _KTHREAD *v12; // rbp
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x9060u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    for ( i = ExpResourceSpinLock; (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000; i = ExpResourceSpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  Flink = Resource->SystemResourcesList.Flink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource
    || (Blink = Resource->SystemResourcesList.Blink, (PERESOURCE)Blink->Flink != Resource) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    ExpResourceSpinLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_26;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_26:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    for ( j = 1; ; ++j )
    {
      v11 = Resource->OwnerTable;
      if ( j >= v11->TableSize )
        break;
      v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(++OwnerTable);
      if ( v12 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (OwnerTable->TableSize & 2) == 0
          && v12 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 2uLL);
        }
        if ( (OwnerTable->TableSize & 1) != 0 )
          PsBoostThreadIoEx((__int64)v12, 1, 0, 0LL);
        if ( (OwnerTable->TableSize & 4) != 0 )
          PsBoostThreadIoQoS((__int64)v12, 1);
        if ( (OwnerTable->TableSize & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
      }
    }
    ExFreePoolWithTag(v11, 0);
  }
  return 0;
}
