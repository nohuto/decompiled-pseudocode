/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140AB57B8
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B6AAC (PopPowerRequestRevokeRequests.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock(&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140E019B8, Executive, 0, 0, 0LL);
}
