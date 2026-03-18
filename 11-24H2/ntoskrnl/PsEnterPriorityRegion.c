/*
 * XREFs of PsEnterPriorityRegion @ 0x1403F54C0
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void PsEnterPriorityRegion()
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v1; // ebx
  __int64 Pool2; // rax
  struct _KTHREAD *v3; // r14
  unsigned __int64 v4; // rbp
  struct _KTHREAD **v5; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v3 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v3->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v3->SchedulingGroup = 0LL;
    }
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v1 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( v3 )
    {
      v5 = *(struct _KTHREAD ***)&CurrentThread[1].Timer.Processor;
      if ( *v5 != (struct _KTHREAD *)&CurrentThread[1].Timer.Dpc )
        __fastfail(3u);
      *(_QWORD *)&v3->Header.Lock = (char *)CurrentThread + 1520;
      v3->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v5;
      *v5 = v3;
      *(_QWORD *)&CurrentThread[1].Timer.Processor = v3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v4);
    __writecr8(v4);
  }
  else
  {
    v1 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
  }
  if ( v1 == 1 && CurrentThread->AbWaitEntryCount )
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
}
