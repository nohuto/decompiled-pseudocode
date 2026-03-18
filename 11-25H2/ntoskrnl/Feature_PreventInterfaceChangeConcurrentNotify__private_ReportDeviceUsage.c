/*
 * XREFs of Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047CDDC
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDriverCallback @ 0x14096D2C0 (PnpNotifyDriverCallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_PreventInterfaceChangeConcurrentNotify__private_featureState;
  if ( (Feature_PreventInterfaceChangeConcurrentNotify__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_PreventInterfaceChangeConcurrentNotify__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_PreventInterfaceChangeConcurrentNotify__private_descriptor,
      v1,
      3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_PreventInterfaceChangeConcurrentNotify__private_descriptor);
  }
  return result;
}
