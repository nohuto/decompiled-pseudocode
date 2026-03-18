/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x1406122E0 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2, struct _KTHREAD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v4; // ebx
  __int16 v5; // cx
  void *OwnerEntryForLegacyShim; // rbx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 Pool2; // rax
  struct _KTHREAD *v11; // r15
  unsigned __int64 v12; // r14
  struct _KTHREAD **v13; // rcx
  unsigned __int8 v14; // cl
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v11 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v11->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v11->SchedulingGroup = 0LL;
    }
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v4 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( v11 )
    {
      v13 = *(struct _KTHREAD ***)&CurrentThread[1].Timer.Processor;
      if ( *v13 != (struct _KTHREAD *)&CurrentThread[1].Timer.Dpc )
        __fastfail(3u);
      *(_QWORD *)&v11->Header.Lock = (char *)CurrentThread + 1520;
      v11->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
      *v13 = v11;
      *(_QWORD *)&CurrentThread[1].Timer.Processor = v11;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
    else
      KiReleaseSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v12);
    __writecr8(v12);
  }
  else
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
  }
  if ( v4 == 1 && CurrentThread->AbWaitEntryCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(
                         CurrentThread,
                         &CurrentPrcb->AbPropagateBoostsList,
                         &CurrentThread->PropagateBoostsEntry) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  --CurrentThread->KernelApcDisable;
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v5 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  if ( (v5 & 1) != 0 )
  {
    v14 = KeGetCurrentIrql();
    a2 = KeGetCurrentThread();
    if ( v14 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v14, 1uLL, 0LL);
    if ( (a2->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !v14 && (a2->MiscFlags & 0x400) == 0 && !a2->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) != 0 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim)
      || (unsigned __int8)ExIsFastResourceHeldExclusive(BugCheckParameter2) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    LOBYTE(a2) = 1;
    ExpAcquireResourceSharedLite(BugCheckParameter2, a2);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
