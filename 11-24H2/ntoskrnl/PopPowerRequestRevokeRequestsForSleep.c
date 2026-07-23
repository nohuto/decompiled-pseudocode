/*
 * XREFs of PopPowerRequestRevokeRequestsForSleep @ 0x140AA99CC
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestRevokeRequestsForSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  PopPowerRequestRevokeRequests(10, 1);
  return PopReleaseRwLock(&PopPowerRequestLock);
}
