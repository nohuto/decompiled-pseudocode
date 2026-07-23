/*
 * XREFs of ExfReleasePushLockExclusive @ 0x14028E8A0
 * Callers:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 * Callees:
 *     ExpWakePushLock @ 0x1404060A0 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  __int64 v2; // r8
  signed __int64 v3; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      if ( (result & 4) != 0 || (result & 2) == 0 )
        v2 = -1LL;
      else
        v2 = 3LL;
      v3 = result;
      result = _InterlockedCompareExchange64(a1, v2 + result, result);
    }
    while ( v3 != result );
    if ( v2 == 3 )
      return ExpWakePushLock(a1);
  }
  return result;
}
