/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140AA959C
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B6AAC (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(10, 1);
  return PopReleaseRwLock(&PopPowerRequestLock);
}
