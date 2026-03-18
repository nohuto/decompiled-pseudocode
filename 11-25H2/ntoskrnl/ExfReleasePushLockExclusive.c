/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1402BCAB0
 * Callers:
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 * Callees:
 *     ExpWakePushLock @ 0x140406240 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 v4; // rdx
  signed __int64 v5; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v2 = result & 6;
      v3 = 3LL;
      if ( v2 != 2 )
        v3 = -1LL;
      v4 = result + v3;
      v5 = result;
      result = _InterlockedCompareExchange64(a1, v4, result);
    }
    while ( v5 != result );
    if ( v2 == 2 )
      return ExpWakePushLock(a1, v4, 2LL, -1LL);
  }
  return result;
}
