/*
 * XREFs of Feature_WdfCD2__private_IsEnabledDeviceUsageNoInline @ 0x140095DB8
 * Callers:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400961AC (FxLibraryGlobalsQueryRegistrySettings.c)
 * Callees:
 *     Feature_WdfCD2__private_IsEnabledFallback @ 0x140095DF0 (Feature_WdfCD2__private_IsEnabledFallback.c)
 */

int __fastcall Feature_WdfCD2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_WdfCD2__private_featureState.exchange64 & 0x10) != 0 )
    return Feature_WdfCD2__private_featureState.exchange64 & 1;
  else
    return Feature_WdfCD2__private_IsEnabledFallback(
             (wil_details_FeatureStateCache)Feature_WdfCD2__private_featureState.exchange,
             wil_ReportingKind_DeviceUsage);
}
