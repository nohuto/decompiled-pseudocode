/*
 * XREFs of Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledDeviceUsageNoInline @ 0x1400443AC
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledFallback @ 0x1400443E4 (Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_featureState & 1;
  else
    return Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_featureState,
             3LL);
}
