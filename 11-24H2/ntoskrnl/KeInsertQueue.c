/*
 * XREFs of KeInsertQueue @ 0x14045A460
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakeQueueWaiter @ 0x1402CD6B0 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  PRKQUEUE v4; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 CurrentThread; // rbp
  LONG SignalState; // r12d
  LONG v10; // edx
  struct _LIST_ENTRY *Blink; // rcx
  char IsThreadRunning; // al

  p_WaitListHead = &Queue->Header.WaitListHead;
  v4 = Queue;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Queue) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Queue, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)Entry, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(&v4->Header.Lock);
  SignalState = v4->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || v4->CurrentCount >= v4->MaximumCount
    || *(PRKQUEUE *)(CurrentThread + 232) == v4 && *(_BYTE *)(CurrentThread + 643) == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)v4, (__int64)Entry) )
  {
    v10 = v4->Header.SignalState;
    v4->Header.SignalState = v10 + 1;
    Blink = v4->EntryListHead.Blink;
    if ( Blink->Flink != &v4->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &v4->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    v4->EntryListHead.Blink = Entry;
    if ( !v10 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)v4);
  }
  else
  {
    Entry->Flink = 0LL;
  }
  _InterlockedAnd(&v4->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return SignalState;
}
