/*
 * XREFs of Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback @ 0x14007DD94
 * Callers:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetMonitorDescriptorOverride__private_descriptor);
}
