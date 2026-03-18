/*
 * XREFs of PsEnterPriorityRegion @ 0x1403F0DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void PsEnterPriorityRegion()
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int32 v1; // ebx
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rsi
  __int64 Pool2; // rax
  struct _KTHREAD *v5; // r14
  unsigned __int64 v6; // rbp
  struct _KTHREAD **v7; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  if ( PspAlwaysTrackIoBoosting )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v5 = (struct _KTHREAD *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v5->StateSaveArea = (_XSAVE_FORMAT *)KeGetCurrentThread();
      v5->SchedulingGroup = 0LL;
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    v1 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( v5 )
    {
      v7 = *(struct _KTHREAD ***)&CurrentThread[1].Timer.Processor;
      if ( *v7 != (struct _KTHREAD *)&CurrentThread[1].Timer.Dpc )
        __fastfail(3u);
      *(_QWORD *)&v5->Header.Lock = (char *)CurrentThread + 1520;
      v5->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v7;
      *v7 = v5;
      *(_QWORD *)&CurrentThread[1].Timer.Processor = v5;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
    __writecr8(v6);
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
