/*
 * XREFs of ExDeleteResourceLite @ 0x1403A42F0
 * Callers:
 *     CcDeallocateBcb @ 0x1403A42B8 (CcDeallocateBcb.c)
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     DifExDeleteResourceLiteWrapper @ 0x140611A40 (DifExDeleteResourceLiteWrapper.c)
 *     PiDrvDbDestroyNode @ 0x14072A918 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1407613A0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x1408072F0 (_PnpCtxCloseMachine.c)
 *     DrvDbOpenContext @ 0x140813828 (DrvDbOpenContext.c)
 *     DrvDbDestroyDatabaseNode @ 0x140813F10 (DrvDbDestroyDatabaseNode.c)
 *     PnpDereferenceNotify @ 0x14096D224 (PnpDereferenceNotify.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     MUIInitializeResourceLock @ 0x140A16C28 (MUIInitializeResourceLock.c)
 *     RtlDestroyHeap @ 0x140A8C040 (RtlDestroyHeap.c)
 *     CmpDelayFreeRMWorker @ 0x140A9A4E0 (CmpDelayFreeRMWorker.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpOwnerEntryToThread @ 0x1403A48D0 (ExpOwnerEntryToThread.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140405370 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // bp
  int v3; // edi
  LONG i; // edx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rdi
  unsigned int j; // esi
  POWNER_ENTRY v11; // rcx
  struct _KTHREAD *v12; // rbp
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x9060u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
        HvlNotifyLongSpinWait();
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
    goto LABEL_24;
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
LABEL_24:
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
