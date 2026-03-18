/*
 * XREFs of Feature_InkProcessor__private_ReportDeviceUsage @ 0x1C013D5A8
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0093938 (--0InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0138E8C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0139104 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_InkProcessor__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_InkProcessor__private_featureState;
  if ( (Feature_InkProcessor__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_InkProcessor__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_InkProcessor__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_InkProcessor__private_descriptor);
  }
}
