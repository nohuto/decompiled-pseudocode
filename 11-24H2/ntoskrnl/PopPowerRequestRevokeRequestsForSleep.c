/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140AAEAF0
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B659C (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquireRwLockExclusive(&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(10, 1);
  return PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
