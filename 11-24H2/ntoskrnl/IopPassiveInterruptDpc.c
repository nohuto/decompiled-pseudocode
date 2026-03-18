/*
 * XREFs of IopPassiveInterruptDpc @ 0x1403BCD90
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiWakeQueueWaiter @ 0x140324B20 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1403BE270 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403BE4C8 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403BE4F4 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _LIST_ENTRY *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  LONG v8; // ecx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v10; // r8

  v4 = (struct _LIST_ENTRY *)(DeferredContext + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Dpc) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Dpc, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v10) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v4, v10);
  }
  KiAcquireKobjectLockSafe(&PassiveInterruptRealtimeWorkQueue.Header.Lock);
  if ( PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Flink == &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead
    || PassiveInterruptRealtimeWorkQueue.CurrentCount >= PassiveInterruptRealtimeWorkQueue.MaximumCount
    || (struct _KQUEUE *)CurrentThread->Queue == &PassiveInterruptRealtimeWorkQueue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)&PassiveInterruptRealtimeWorkQueue, (__int64)v4) )
  {
    v8 = PassiveInterruptRealtimeWorkQueue.Header.SignalState++;
    Blink = PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink;
    if ( PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink->Flink != &PassiveInterruptRealtimeWorkQueue.EntryListHead )
      __fastfail(3u);
    v4->Flink = &PassiveInterruptRealtimeWorkQueue.EntryListHead;
    v4->Blink = Blink;
    Blink->Flink = v4;
    PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink = v4;
    if ( !v8
      && PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Flink != &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead )
    {
      KiWakeOtherQueueWaiters(CurrentPrcb, &PassiveInterruptRealtimeWorkQueue);
    }
  }
  else
  {
    v4->Flink = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)&PassiveInterruptRealtimeWorkQueue, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
