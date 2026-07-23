/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x1404A2C1C
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1404A2A8C (RtlpHpHeapExtendContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void __fastcall RtlpHpAcquireReleaseLockExclusive(volatile LONG *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  char *v5; // rsi
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
    v4 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v4, (__int64)BugCheckParameter2);
    if ( v5 )
      v5[10] = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveGuardedRegion();
  }
}
