/*
 * XREFs of Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback @ 0x14064F308
 * Callers:
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x14064F2D0 (Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EtwThreadStackRundownPriority__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_EtwThreadStackRundownPriority__private_descriptor);
}
