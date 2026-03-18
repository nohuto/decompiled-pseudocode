/*
 * XREFs of Feature_KernelPnP_EnumerationNotifications__private_IsEnabledDeviceUsageNoInline @ 0x1404F2690
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     Feature_KernelPnP_EnumerationNotifications__private_IsEnabledFallback @ 0x1404F26C8 (Feature_KernelPnP_EnumerationNotifications__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_EnumerationNotifications__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_EnumerationNotifications__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_EnumerationNotifications__private_featureState & 1;
  else
    return Feature_KernelPnP_EnumerationNotifications__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_EnumerationNotifications__private_featureState,
             3LL);
}
