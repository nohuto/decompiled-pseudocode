/*
 * XREFs of Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x140289A28
 * Callers:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_win32k_timers_resilience__private_descriptor);
}
