/*
 * XREFs of Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline @ 0x14006DEE8
 * Callers:
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14005DA90 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_DisplayDitheringSupport__private_IsEnabledFallback @ 0x14006DF20 (Feature_DisplayDitheringSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_DisplayDitheringSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisplayDitheringSupport__private_featureState & 0x10) != 0 )
    return Feature_DisplayDitheringSupport__private_featureState & 1;
  else
    return Feature_DisplayDitheringSupport__private_IsEnabledFallback(
             (unsigned int)Feature_DisplayDitheringSupport__private_featureState,
             3LL);
}
