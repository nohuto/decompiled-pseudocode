/*
 * XREFs of Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledFallback @ 0x1405A5E0C
 * Callers:
 *     Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5DD4 (Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_KernelPnP_InterfaceListFilterUpdates__private_descriptor);
}
