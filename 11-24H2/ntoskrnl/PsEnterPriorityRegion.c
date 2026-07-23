/*
 * XREFs of PsEnterPriorityRegion @ 0x1403EB900
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall PsEnterPriorityRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v5; // ebx
  __int64 Pool2; // rax
  struct _KTHREAD *v7; // r14
  unsigned __int64 v8; // rbp
  struct _KTHREAD **v9; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
    v7 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v7->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v7->SchedulingGroup = 0LL;
    }
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v5 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( v7 )
    {
      v9 = *(struct _KTHREAD ***)&CurrentThread[1].Timer.Processor;
      if ( *v9 != (struct _KTHREAD *)&CurrentThread[1].Timer.Dpc )
        __fastfail(3u);
      *(_QWORD *)&v7->Header.Lock = (char *)CurrentThread + 1520;
      v7->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      *v9 = v7;
      *(_QWORD *)&CurrentThread[1].Timer.Processor = v7;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
    __writecr8(v8);
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
                         &CurrentThread->PropagateBoostsEntry.Next,
                         a4) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
