/*
 * XREFs of PopPowerAggregatorNotifyAcDcStateChange @ 0x1406F5398
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1404D6D70 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406F53DC (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABFAB8 (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyAcDcStateChange(__int64 a1, __int64 a2)
{
  PopAcquirePolicyLock(a1, a2);
  PopSmartSuspendMakePredictions(3LL);
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  PopPowerAggregatorEvaluateDozeTimers();
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  return PopReleasePolicyLock();
}
