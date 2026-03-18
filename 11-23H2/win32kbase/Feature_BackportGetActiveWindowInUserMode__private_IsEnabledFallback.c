/*
 * XREFs of Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback @ 0x1C00CFFD8
 * Callers:
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00CFFA0 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C00D009C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BackportGetActiveWindowInUserMode__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_BackportGetActiveWindowInUserMode__private_descriptor);
}
