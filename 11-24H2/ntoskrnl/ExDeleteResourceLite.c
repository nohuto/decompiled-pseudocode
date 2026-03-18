/*
 * XREFs of ExDeleteResourceLite @ 0x1402CD920
 * Callers:
 *     CcDeallocateBcb @ 0x1402CD8E4 (CcDeallocateBcb.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     DifExDeleteResourceLiteWrapper @ 0x14061DA00 (DifExDeleteResourceLiteWrapper.c)
 *     PiDrvDbDestroyNode @ 0x140736BA8 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140770D60 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x1408171F0 (_PnpCtxCloseMachine.c)
 *     DrvDbOpenContext @ 0x140823650 (DrvDbOpenContext.c)
 *     DrvDbDestroyDatabaseNode @ 0x140823D38 (DrvDbDestroyDatabaseNode.c)
 *     PnpDereferenceNotify @ 0x1409EED14 (PnpDereferenceNotify.c)
 *     MUIInitializeResourceLock @ 0x140A21948 (MUIInitializeResourceLock.c)
 *     RtlDestroyHeap @ 0x140A91140 (RtlDestroyHeap.c)
 *     CmpDelayFreeRMWorker @ 0x140A9EF40 (CmpDelayFreeRMWorker.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpOwnerEntryToThread @ 0x1402CDEF0 (ExpOwnerEntryToThread.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402CEBD0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  LONG i; // edx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rdi
  __int64 v11; // r8
  unsigned int j; // esi
  POWNER_ENTRY v13; // rcx
  struct _KTHREAD *v14; // rbp
  __int64 v15; // r8
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
    v4 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql, v1);
    for ( i = ExpResourceSpinLock; (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000; i = ExpResourceSpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
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
      PsBoostThreadIoEx(OwnerThread, 1, 0LL, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1, v11);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_26:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    for ( j = 1; ; ++j )
    {
      v13 = Resource->OwnerTable;
      if ( j >= v13->TableSize )
        break;
      v14 = (struct _KTHREAD *)ExpOwnerEntryToThread(++OwnerTable);
      if ( v14 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (OwnerTable->TableSize & 2) == 0
          && v14 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v14, 2uLL);
        }
        if ( (OwnerTable->TableSize & 1) != 0 )
          PsBoostThreadIoEx((__int64)v14, 1, 0LL, 0LL);
        if ( (OwnerTable->TableSize & 4) != 0 )
          PsBoostThreadIoQoS((__int64)v14, 1, v15);
        if ( (OwnerTable->TableSize & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v14, 0x746C6644u);
      }
    }
    ExFreePoolWithTag(v13, 0);
  }
  return 0;
}
