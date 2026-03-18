/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14064A080
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 v3; // rbp
  volatile signed __int64 **v4; // rbx
  __int64 *v5; // rsi
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
