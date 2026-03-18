/*
 * XREFs of Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14065CE6C
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F79D8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void __fastcall Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(__int64 a1, int a2)
{
  char v3; // bl

  v3 = a1;
  if ( (a1 & 2) == 0 )
    v3 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState,
           a1,
           (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor,
    v3,
    a2);
  if ( (unsigned int)(a2 - 3) <= 1 )
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v3,
      a2,
      (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor);
}
