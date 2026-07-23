/*
 * XREFs of ExTryAcquireAutoExpandPushLockExclusive @ 0x14049A980
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140491098 (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _QWORD *v2; // rsi
  char v4; // di
  int v6; // ecx

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    v4 = 0;
    if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) += 0x10000;
  }
  else
  {
    v6 = *(_DWORD *)(BugCheckParameter2 + 8);
    v4 = 1;
    if ( (v6 & 1) != 0 )
    {
      v4 = ExpTryAcquireFannedOutPushLockExclusive(v6 & 0xFFFFFFF8);
      if ( !v4
        && (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      }
    }
  }
  if ( v2 )
  {
    if ( v4 )
      *((_BYTE *)v2 + 10) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v2);
  }
  return v4;
}
