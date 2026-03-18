/*
 * XREFs of Feature_PLDRFixes__private_IsEnabledFallback @ 0x140019FB8
 * Callers:
 *     Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline @ 0x140019F80 (Feature_PLDRFixes__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140019BA8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PLDRFixes__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_PLDRFixes__private_descriptor);
}
