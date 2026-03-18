/*
 * XREFs of PopPowerAggregatorNotifyAcDcStateChange @ 0x1406E99A4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D7ED0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406E99E8 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
