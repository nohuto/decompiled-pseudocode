/*
 * XREFs of Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B64
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback @ 0x1405A3B9C (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_LogBlockedDrivers__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_LogBlockedDrivers__private_featureState & 1;
  else
    return Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_featureState,
             3LL);
}
