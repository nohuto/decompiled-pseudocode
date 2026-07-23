/*
 * XREFs of Feature_OfflineDumpRedaction__private_IsEnabledFallback @ 0x140586F80
 * Callers:
 *     Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline @ 0x140586F48 (Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_OfflineDumpRedaction__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_OfflineDumpRedaction__private_descriptor);
}
