/*
 * XREFs of PopIdleWakeInitialize @ 0x14075DFA8
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x140437360 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x14075DE8C (PopIdleWakeConvertIntervalBucketsFrom.c)
 */

void PopIdleWakeInitialize()
{
  PopIdleWakeContextLock = 0LL;
  PopIdleWakeSourceSpuriousThresholdQpc = PpmConvertTimeFrom(50000000LL, 10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    6u,
    (__int64)PopIdleSpuriousWakeBucketLimitsQpc,
    PopIdleSpuriousWakeBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceActiveBucketLimitsQpc,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceActivatorBucketLimitsQpc,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceDeviceBucketLimitsQpc,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    3u,
    (__int64)PopIdleWakeSourceExcessBucketLimitsQpc,
    PopIdleWakeSourceExcessBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    9u,
    (__int64)&PopIdleWakeIdleAccountingBucketLimitsMs,
    PopIdleWakeIdleAccountingBucketLimitsQpc,
    1000LL);
  qword_140F07808 = -1LL;
  PopIdleWakeConvertIntervalBucketsFrom(
    0xBu,
    (__int64)&PopIdleWakePeriodAccountingBucketLimitsMs,
    PopIdleWakePeriodAccountingBucketLimitsQpc,
    1000LL);
  qword_140F077B8 = -1LL;
}
