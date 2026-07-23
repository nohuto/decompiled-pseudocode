/*
 * XREFs of ExpDeleteTimer @ 0x1402BCCD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PsRemoveVirtualizedTimer @ 0x1402BCBE8 (PsRemoveVirtualizedTimer.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v3; // al
  _QWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    v5 = *(_QWORD **)&a1[4].Header.Lock;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire(&ExpWakeTimerLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, &ExpWakeTimerLock);
    if ( v9 )
      *(_BYTE *)(v9 + 10) = 1;
    Flink = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead
      || (Blink = p_WaitListHead->Blink, Blink->Flink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v5 )
      PoDestroyReasonContext(v5);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  if ( a1[4].DueTime.QuadPart )
    PsRemoveVirtualizedTimer(
      (PVOID *)&a1[4].DueTime,
      &a1[4].TimerListEntry.Flink,
      (volatile signed __int64 *)&a1[1].Header.Lock,
      v3);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&a1[1], v3);
  return KeCancelTimer(a1);
}
