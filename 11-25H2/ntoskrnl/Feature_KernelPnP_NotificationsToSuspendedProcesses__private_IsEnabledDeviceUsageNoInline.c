/*
 * XREFs of Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline @ 0x1405A2850
 * Callers:
 *     PiUEventIsClientStuck @ 0x140ABFFDC (PiUEventIsClientStuck.c)
 * Callees:
 *     Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledFallback @ 0x1405A2888 (Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_NotificationsToSuspendedProcesses__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_NotificationsToSuspendedProcesses__private_featureState & 1;
  else
    return Feature_KernelPnP_NotificationsToSuspendedProcesses__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_NotificationsToSuspendedProcesses__private_featureState,
             3LL);
}
