/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140654680
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v3; // rbp
  volatile signed __int64 **v4; // rbx
  _QWORD *v5; // rsi
  volatile signed __int64 *v6; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v3 = (unsigned __int64)(BugCheckParameter2 + 32);
  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  while ( (unsigned __int64)v4 < v3 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)*v4, 0LL) )
    {
      while ( v4 != BugCheckParameter2 )
      {
        v6 = *--v4;
        if ( (_InterlockedExchangeAdd64(*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6);
      }
      if ( v5 )
        KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v5);
      return 0;
    }
    ++v4;
  }
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  return 1;
}
