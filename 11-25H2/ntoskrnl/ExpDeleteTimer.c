/*
 * XREFs of ExpDeleteTimer @ 0x1402EAEC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PsRemoveVirtualizedTimer @ 0x1402EADDC (PsRemoveVirtualizedTimer.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v3; // al
  void *v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rbp
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    v5 = *(void **)&a1[4].Header.Lock;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (__int64)&ExpWakeTimerLock);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    if ( v5 )
      PoDestroyReasonContext(v5);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  if ( a1[4].DueTime.QuadPart )
    PsRemoveVirtualizedTimer((PVOID *)&a1[4].DueTime, &a1[4].TimerListEntry.Flink, (KSPIN_LOCK *)&a1[1], v3);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&a1[1], v3);
  return KeCancelTimer(a1);
}
