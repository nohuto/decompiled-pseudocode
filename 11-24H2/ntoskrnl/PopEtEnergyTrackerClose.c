/*
 * XREFs of PopEtEnergyTrackerClose @ 0x14075DC20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopEtEnergyTrackerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(a2 + 16));
    *(_DWORD *)(a2 + 644) |= 2u;
    return PopReleaseRwLock((signed __int64 *)(a2 + 16));
  }
  return result;
}
