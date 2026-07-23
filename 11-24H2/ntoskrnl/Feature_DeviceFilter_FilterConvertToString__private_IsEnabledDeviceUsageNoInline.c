/*
 * XREFs of Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline @ 0x14069D49C
 * Callers:
 *     FilterConvertToString @ 0x140824AB0 (FilterConvertToString.c)
 * Callees:
 *     Feature_DeviceFilter_FilterConvertToString__private_IsEnabledFallback @ 0x14069D4D4 (Feature_DeviceFilter_FilterConvertToString__private_IsEnabledFallback.c)
 */

__int64 Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DeviceFilter_FilterConvertToString__private_featureState & 0x10) != 0 )
    return Feature_DeviceFilter_FilterConvertToString__private_featureState & 1;
  else
    return Feature_DeviceFilter_FilterConvertToString__private_IsEnabledFallback(
             (unsigned int)Feature_DeviceFilter_FilterConvertToString__private_featureState,
             3LL);
}
