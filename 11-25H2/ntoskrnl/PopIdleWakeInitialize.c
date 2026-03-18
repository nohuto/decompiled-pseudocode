/*
 * XREFs of PopIdleWakeInitialize @ 0x1407525E0
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407524BC (PopIdleWakeConvertIntervalBucketsFrom.c)
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
  qword_140F06E68 = -1LL;
  PopIdleWakeConvertIntervalBucketsFrom(
    0xBu,
    (__int64)&PopIdleWakePeriodAccountingBucketLimitsMs,
    PopIdleWakePeriodAccountingBucketLimitsQpc,
    1000LL);
  qword_140F06E18 = -1LL;
}
