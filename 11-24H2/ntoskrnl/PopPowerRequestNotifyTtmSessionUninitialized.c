/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB9BA4
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B659C (PopPowerRequestRevokeRequests.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquireRwLockExclusive(&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140E019B8, Executive, 0, 0, 0LL);
}
