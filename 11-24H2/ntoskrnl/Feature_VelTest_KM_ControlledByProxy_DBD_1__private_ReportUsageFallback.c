/*
 * XREFs of Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066893C
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E474C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403FF858 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void __fastcall Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // bl

  v5 = a1;
  if ( (a1 & 2) == 0 )
    v5 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_VelTest_KM_ControlledByProxy_DBD_1__private_featureState,
           a1,
           (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor,
           a4);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor,
    v5,
    a2);
  if ( (unsigned int)(a2 - 3) <= 1 )
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v5,
      a2,
      (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_1__private_descriptor);
}
