/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x14061E2A0 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     ExAcquireFastResourceShared @ 0x1403411F0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403436B0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140343DB0 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(
        _WORD *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v5; // ebx
  __int16 v6; // cx
  void *OwnerEntryForLegacyShim; // rbx
  __int64 Pool2; // rax
  struct _KTHREAD *v10; // r15
  unsigned __int64 v11; // r14
  struct _KTHREAD **v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rbp
  unsigned __int8 v15; // cl
  struct _KTHREAD *v16; // rdx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v10 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v10->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v10->SchedulingGroup = 0LL;
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v5 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( v10 )
    {
      v12 = *(struct _KTHREAD ***)&CurrentThread[1].Timer.Processor;
      if ( *v12 != (struct _KTHREAD *)&CurrentThread[1].Timer.Dpc )
        __fastfail(3u);
      *(_QWORD *)&v10->Header.Lock = (char *)CurrentThread + 1520;
      v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
      *v12 = v10;
      *(_QWORD *)&CurrentThread[1].Timer.Processor = v10;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
  else
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
  }
  if ( v5 == 1 && CurrentThread->AbWaitEntryCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(
                         (__int64)CurrentThread,
                         &CurrentPrcb[581].DpcData,
                         &CurrentThread->PropagateBoostsEntry.Next) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  --CurrentThread->KernelApcDisable;
  v6 = BugCheckParameter2[13];
  if ( (v6 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    v15 = KeGetCurrentIrql();
    v16 = KeGetCurrentThread();
    if ( v15 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v15, 1uLL, 0LL);
    if ( (v16->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !v15 && (v16->MiscFlags & 0x400) == 0 && !v16->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (BugCheckParameter2[13] & 1) != 0 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive((ULONG_PTR)BugCheckParameter2) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    ExpAcquireResourceSharedLite((__int64)BugCheckParameter2, 1, a3);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
