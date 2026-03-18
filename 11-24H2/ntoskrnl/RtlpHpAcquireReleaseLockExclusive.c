/*
 * XREFs of RtlpHpAcquireReleaseLockExclusive @ 0x1404A81CC
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1404A803C (RtlpHpHeapExtendContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall RtlpHpAcquireReleaseLockExclusive(volatile LONG *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
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
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v4, (__int64)BugCheckParameter2);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveGuardedRegion();
  }
}
