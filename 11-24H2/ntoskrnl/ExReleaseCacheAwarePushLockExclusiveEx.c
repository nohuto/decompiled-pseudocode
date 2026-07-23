/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x14042D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
