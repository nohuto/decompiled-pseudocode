/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x1403D61C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // bp
  volatile signed __int64 **v4; // rbx
  unsigned __int64 v5; // rdi
  volatile signed __int64 *v6; // rcx
  char result; // al

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v4 = BugCheckParameter2;
  v5 = (unsigned __int64)(BugCheckParameter2 + 32);
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v6 = *v4;
      result = _InterlockedExchangeAdd64(*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6;
      if ( result == 2 )
        result = ExfTryToWakePushLock(v6);
      ++v4;
    }
    while ( (unsigned __int64)v4 < v5 );
  }
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
