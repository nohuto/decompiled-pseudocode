/*
 * XREFs of Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5DD4
 * Callers:
 *     PiCMCaptureInterfaceListInputData @ 0x1409FF604 (PiCMCaptureInterfaceListInputData.c)
 * Callees:
 *     Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledFallback @ 0x1405A5E0C (Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_InterfaceListFilterUpdates__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_InterfaceListFilterUpdates__private_featureState & 1;
  else
    return Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_InterfaceListFilterUpdates__private_featureState,
             3LL);
}
