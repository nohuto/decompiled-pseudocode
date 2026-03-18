/*
 * XREFs of Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline @ 0x14004450C
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_USBEXSVPX__private_IsEnabledFallback @ 0x140044544 (Feature_USBEXSVPX__private_IsEnabledFallback.c)
 */

__int64 Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_USBEXSVPX__private_featureState & 0x10) != 0 )
    return Feature_USBEXSVPX__private_featureState & 1;
  else
    return Feature_USBEXSVPX__private_IsEnabledFallback((unsigned int)Feature_USBEXSVPX__private_featureState, 3LL);
}
