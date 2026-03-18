/*
 * XREFs of Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401B17E8
 * Callers:
 *     UpdateMouseConnectionState @ 0x14012BF88 (UpdateMouseConnectionState.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_GestureOnlyTouchpadParam2__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_GestureOnlyTouchpadParam2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_GestureOnlyTouchpadParam2__private_descriptor,
      Feature_GestureOnlyTouchpadParam2__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_GestureOnlyTouchpadParam2__private_descriptor);
  }
}
