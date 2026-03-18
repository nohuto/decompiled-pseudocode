/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x1404A782C
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1404A769C (RtlpHpHeapExtendContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpHpAcquireReleaseLockExclusive(volatile LONG *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  __int64 *v5; // rsi
  KIRQL v6; // al

  if ( a2 )
  {
    v6 = ExAcquireSpinLockExclusive(BugCheckParameter2);
    ExReleaseSpinLockExclusive(BugCheckParameter2, v6);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v4, (__int64)BugCheckParameter2);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveGuardedRegion();
  }
}
