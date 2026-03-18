/*
 * XREFs of PopEsPublishState @ 0x140750C88
 * Callers:
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     PopEsPublishStateV2 @ 0x140750CF8 (PopEsPublishStateV2.c)
 */

__int64 PopEsPublishState()
{
  __int64 v0; // rcx
  unsigned __int8 v2; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_EcoModeEnergySaver__private_featureState;
  if ( (Feature_EcoModeEnergySaver__private_featureState & 0x10) == 0 )
  {
    v2 = Feature_EcoModeEnergySaver__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor,
      Feature_EcoModeEnergySaver__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3,
      (__int64)&Feature_EcoModeEnergySaver__private_descriptor);
  }
  LOBYTE(v0) = 1;
  return PopEsPublishStateV2(v0);
}
