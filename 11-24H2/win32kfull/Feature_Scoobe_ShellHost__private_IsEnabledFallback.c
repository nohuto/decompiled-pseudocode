/*
 * XREFs of Feature_Scoobe_ShellHost__private_IsEnabledFallback @ 0x1402B478C
 * Callers:
 *     Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline @ 0x1402B4754 (Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Scoobe_ShellHost__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Scoobe_ShellHost__private_descriptor);
}
