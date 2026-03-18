/*
 * XREFs of Feature_KernelPnP_StateRetrieval__private_IsEnabledFallback @ 0x1405A26F0
 * Callers:
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8 (Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_KernelPnP_StateRetrieval__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_KernelPnP_StateRetrieval__private_descriptor);
}
