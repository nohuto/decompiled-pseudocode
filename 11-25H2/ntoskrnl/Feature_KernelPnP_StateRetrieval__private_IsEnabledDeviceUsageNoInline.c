/*
 * XREFs of Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8
 * Callers:
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PipAreDriversLoaded @ 0x1404E6CA8 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 * Callees:
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledFallback @ 0x1405A26F0 (Feature_KernelPnP_StateRetrieval__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_StateRetrieval__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_StateRetrieval__private_featureState & 1;
  else
    return Feature_KernelPnP_StateRetrieval__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_StateRetrieval__private_featureState,
             3LL);
}
