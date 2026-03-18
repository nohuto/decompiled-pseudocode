/*
 * XREFs of Feature_USBEXSVP1__private_ReportDeviceUsage @ 0x140043F50
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076BD8 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400380F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140045834 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_USBEXSVP1__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_USBEXSVP1__private_featureState;
  if ( (Feature_USBEXSVP1__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_USBEXSVP1__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_USBEXSVP1__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_USBEXSVP1__private_descriptor);
  }
  return result;
}
