/*
 * XREFs of PopPowerRequestNotifyTtmSessionInitialized @ 0x140AB3E78
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404B5204 (PopPowerRequestUnrevokeRequests.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x14075A368 (TtmNotifySessionPowerRequestPresent.c)
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
