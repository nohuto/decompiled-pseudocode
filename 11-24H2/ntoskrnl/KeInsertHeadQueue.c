/*
 * XREFs of KeInsertHeadQueue @ 0x1405BA850
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

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 CurrentThread; // rbp
  char IsThreadRunning; // al
  LONG SignalState; // r12d
  LONG v10; // edx
  LIST_ENTRY *p_EntryListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)Entry, IsThreadRunning);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || *(PRKQUEUE *)(CurrentThread + 232) == Queue && *(_BYTE *)(CurrentThread + 643) == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)Entry) )
  {
    v10 = Queue->Header.SignalState;
    Queue->Header.SignalState = v10 + 1;
    p_EntryListHead = &Queue->EntryListHead;
    Flink = Queue->EntryListHead.Flink;
    if ( Flink->Blink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = Flink;
    Entry->Blink = p_EntryListHead;
    Flink->Blink = Entry;
    p_EntryListHead->Flink = Entry;
    if ( !v10 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue);
  }
  else
  {
    Entry->Flink = 0LL;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return SignalState;
}
