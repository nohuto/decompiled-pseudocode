/*
 * XREFs of Feature_MultiSubNodeHeteroScheduler__private_ReportDeviceUsage @ 0x140067BCC
 * Callers:
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140062E74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400630FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_MultiSubNodeHeteroScheduler__private_ReportDeviceUsage()
{
  char v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_MultiSubNodeHeteroScheduler__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_MultiSubNodeHeteroScheduler__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MultiSubNodeHeteroScheduler__private_descriptor,
      Feature_MultiSubNodeHeteroScheduler__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_MultiSubNodeHeteroScheduler__private_descriptor);
  }
}
