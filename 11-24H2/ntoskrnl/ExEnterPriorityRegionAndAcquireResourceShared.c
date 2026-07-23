/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x14061C860 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(
        _WORD *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v6; // ebx
  __int16 v7; // cx
  void *OwnerEntryForLegacyShim; // rbx
  __int64 Pool2; // rax
  struct _KTHREAD *v11; // r15
  unsigned __int64 v12; // r14
  struct _KTHREAD **v13; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rbp
  unsigned __int8 v16; // cl
  struct _KTHREAD *v17; // rdx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
    v11 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v11->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v11->SchedulingGroup = 0LL;
    }
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v6 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
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
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v12);
    __writecr8(v12);
  }
  else
  {
    v6 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
  }
  if ( v6 == 1 && CurrentThread->AbWaitEntryCount )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(
                         (__int64)CurrentThread,
                         &CurrentPrcb[581].DpcData,
                         &CurrentThread->PropagateBoostsEntry.Next,
                         a4) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  --CurrentThread->KernelApcDisable;
  v7 = BugCheckParameter2[13];
  if ( (v7 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (v7 & 1) != 0 )
  {
    v16 = KeGetCurrentIrql();
    v17 = KeGetCurrentThread();
    if ( v16 > 1u )
      KeBugCheckEx(0x1C6u, 0LL, v16, 1uLL, 0LL);
    if ( (v17->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !v16 && (v17->MiscFlags & 0x400) == 0 && !v17->WaitBlock[3].SpareLong )
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
