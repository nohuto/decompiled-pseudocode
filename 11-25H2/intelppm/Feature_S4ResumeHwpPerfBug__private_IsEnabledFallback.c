/*
 * XREFs of Feature_S4ResumeHwpPerfBug__private_IsEnabledFallback @ 0x14000736C
 * Callers:
 *     Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline @ 0x140007334 (Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140006050 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_S4ResumeHwpPerfBug__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2);
}
