/*
 * XREFs of Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1401B76BC
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14016AE9C (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x1401B76F4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback.c)
 */

__int64 Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ScalarMultiplierForBrightness__private_featureState & 0x10) != 0 )
    return Feature_ScalarMultiplierForBrightness__private_featureState & 1;
  else
    return Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback(
             (unsigned int)Feature_ScalarMultiplierForBrightness__private_featureState,
             3LL);
}
