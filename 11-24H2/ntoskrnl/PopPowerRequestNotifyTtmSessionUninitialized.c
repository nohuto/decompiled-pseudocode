/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB4C64
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock(&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140E019B8, Executive, 0, 0, 0LL);
}
