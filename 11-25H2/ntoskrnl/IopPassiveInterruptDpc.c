/*
 * XREFs of IopPassiveInterruptDpc @ 0x140461CF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiWakeQueueWaiter @ 0x140308B20 (KiWakeQueueWaiter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 CurrentThread; // rsi
  LONG v8; // ecx
  struct _LIST_ENTRY *Blink; // rax
  char IsThreadRunning; // al

  v4 = (struct _LIST_ENTRY *)(DeferredContext + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Dpc) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Dpc);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)v4, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(&PassiveInterruptRealtimeWorkQueue.Header.Lock);
  if ( PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Flink == &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead
    || PassiveInterruptRealtimeWorkQueue.CurrentCount >= PassiveInterruptRealtimeWorkQueue.MaximumCount
    || *(struct _KQUEUE **)(CurrentThread + 232) == &PassiveInterruptRealtimeWorkQueue
    && *(_BYTE *)(CurrentThread + 643) == 15
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
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)&PassiveInterruptRealtimeWorkQueue);
    }
  }
  else
  {
    v4->Flink = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)&PassiveInterruptRealtimeWorkQueue, 0xFFFFFF7F);
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
}
