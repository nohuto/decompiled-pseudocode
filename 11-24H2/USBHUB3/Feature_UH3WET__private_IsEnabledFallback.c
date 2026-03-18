/*
 * XREFs of Feature_UH3WET__private_IsEnabledFallback @ 0x140014B10
 * Callers:
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014AD8 (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400105BC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UH3WET__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_UH3WET__private_descriptor);
}
