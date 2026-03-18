/*
 * XREFs of Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x1400444B8
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_USBEXSVPA__private_IsEnabledFallback @ 0x1400444F0 (Feature_USBEXSVPA__private_IsEnabledFallback.c)
 */

__int64 Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_USBEXSVPA__private_featureState & 0x10) != 0 )
    return Feature_USBEXSVPA__private_featureState & 1;
  else
    return Feature_USBEXSVPA__private_IsEnabledFallback((unsigned int)Feature_USBEXSVPA__private_featureState, 3LL);
}
