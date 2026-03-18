/*
 * XREFs of Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback @ 0x140067A28
 * Callers:
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1400679F0 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_EnumDisplaySettings_PerfImprovements__private_descriptor);
}
