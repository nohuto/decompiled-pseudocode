/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CB0A8
 * Callers:
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage @ 0x1405CB070 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage.c)
 * Callees:
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1403F9D78 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void __fastcall Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback(__int64 a1, int a2)
{
  char v3; // bl

  v3 = a1;
  if ( (a1 & 2) == 0 )
    v3 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Sx_PEP_Notification_Synchronization__private_featureState,
           a1,
           (__int64)&Feature_Sx_PEP_Notification_Synchronization__private_descriptor);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Sx_PEP_Notification_Synchronization__private_descriptor,
    v3,
    a2);
  if ( (unsigned int)(a2 - 3) <= 1 )
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v3,
      a2,
      (__int64)&Feature_Sx_PEP_Notification_Synchronization__private_descriptor);
}
