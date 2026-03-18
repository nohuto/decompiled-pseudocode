/*
 * XREFs of Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1404F1B38
 * Callers:
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEEF8 (PiControlGetUserFlagsFromDeviceNode.c)
 * Callees:
 *     Feature_KernelPnP_StatusRetrieval__private_IsEnabledFallback @ 0x1405A270C (Feature_KernelPnP_StatusRetrieval__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_StatusRetrieval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_StatusRetrieval__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_StatusRetrieval__private_featureState & 1;
  else
    return Feature_KernelPnP_StatusRetrieval__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_StatusRetrieval__private_featureState,
             3LL);
}
