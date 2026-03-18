/*
 * XREFs of Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560
 * Callers:
 *     RootHub_IsDeviceNative @ 0x140049F54 (RootHub_IsDeviceNative.c)
 *     RootHub_Usb4TunnelState @ 0x14004B1B4 (RootHub_Usb4TunnelState.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     RootHub_PrepareHardware @ 0x14007E08C (RootHub_PrepareHardware.c)
 * Callees:
 *     Feature_UXTM__private_IsEnabledFallback @ 0x140044598 (Feature_UXTM__private_IsEnabledFallback.c)
 */

__int64 Feature_UXTM__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UXTM__private_featureState & 0x10) != 0 )
    return Feature_UXTM__private_featureState & 1;
  else
    return Feature_UXTM__private_IsEnabledFallback((unsigned int)Feature_UXTM__private_featureState, 3LL);
}
