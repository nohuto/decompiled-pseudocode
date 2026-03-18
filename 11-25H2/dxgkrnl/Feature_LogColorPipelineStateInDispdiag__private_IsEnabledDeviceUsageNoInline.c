/*
 * XREFs of Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline @ 0x14006E28C
 * Callers:
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14005DBAC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback @ 0x14006E2C4 (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback.c)
 */

__int64 Feature_LogColorPipelineStateInDispdiag__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LogColorPipelineStateInDispdiag__private_featureState & 0x10) != 0 )
    return Feature_LogColorPipelineStateInDispdiag__private_featureState & 1;
  else
    return Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback(
             (unsigned int)Feature_LogColorPipelineStateInDispdiag__private_featureState,
             3LL);
}
