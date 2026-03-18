/*
 * XREFs of Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1404F243C
 * Callers:
 *     PopEsPublishSetting @ 0x1406E9D2C (PopEsPublishSetting.c)
 *     PopEsSnapTelemetry @ 0x1406EC300 (PopEsSnapTelemetry.c)
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 *     PopEsEvaluateNextStateV2 @ 0x140AC3FC4 (PopEsEvaluateNextStateV2.c)
 * Callees:
 *     Feature_EnergySaver_GroupPolicy__private_IsEnabledFallback @ 0x1404F2474 (Feature_EnergySaver_GroupPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnergySaver_GroupPolicy__private_featureState & 0x10) != 0 )
    return Feature_EnergySaver_GroupPolicy__private_featureState & 1;
  else
    return Feature_EnergySaver_GroupPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_EnergySaver_GroupPolicy__private_featureState,
             3LL);
}
