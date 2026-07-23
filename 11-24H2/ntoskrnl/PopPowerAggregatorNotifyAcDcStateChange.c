/*
 * XREFs of PopPowerAggregatorNotifyAcDcStateChange @ 0x1406F3398
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F33DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyAcDcStateChange(__int64 a1, __int64 a2)
{
  PopAcquirePolicyLock(a1, a2);
  PopSmartSuspendMakePredictions(3LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return PopReleasePolicyLock();
}
