/*
 * XREFs of PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB2704
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404AF4B0 (PopPowerRequestUnrevokeRequests.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x140769F48 (TtmNotifySessionPowerRequestPresent.c)
 */

__int64 PopPowerRequestNotifyTtmSessionInitialized()
{
  PVOID *i; // rbx
  int v1; // r8d
  PVOID v2; // r9
  int v4; // [rsp+28h] [rbp-20h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    v1 = *((_DWORD *)i + 26);
    if ( v1 )
    {
      v2 = i[14];
      if ( v2 )
        TtmNotifySessionPowerRequestPresent(*((_DWORD *)i + 4), *((_DWORD *)i + 9), v1, (int)v2, (__int64)i[15], v4, 0);
    }
  }
  PopPowerRequestUnrevokeRequests(1);
  return PopReleaseRwLock(&PopPowerRequestLock);
}
