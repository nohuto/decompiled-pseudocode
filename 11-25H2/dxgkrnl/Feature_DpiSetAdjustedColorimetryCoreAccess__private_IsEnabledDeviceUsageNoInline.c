/*
 * XREFs of Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline @ 0x14006E190
 * Callers:
 *     ?RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14006DDEC (-RequiresAdapterCoreAccessExclusive@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 * Callees:
 *     Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledFallback @ 0x14006E1C8 (Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledFallback.c)
 */

__int64 Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DpiSetAdjustedColorimetryCoreAccess__private_featureState & 0x10) != 0 )
    return Feature_DpiSetAdjustedColorimetryCoreAccess__private_featureState & 1;
  else
    return Feature_DpiSetAdjustedColorimetryCoreAccess__private_IsEnabledFallback(
             (unsigned int)Feature_DpiSetAdjustedColorimetryCoreAccess__private_featureState,
             3LL);
}
