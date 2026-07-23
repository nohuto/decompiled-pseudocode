/*
 * XREFs of Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14072A218 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 * Callees:
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback @ 0x1405A3B48 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_CheckDriverIntegrity__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_CheckDriverIntegrity__private_featureState & 1;
  else
    return Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_featureState,
             3LL);
}
