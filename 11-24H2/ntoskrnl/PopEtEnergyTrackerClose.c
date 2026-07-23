/*
 * XREFs of PopEtEnergyTrackerClose @ 0x14075CBC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
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
