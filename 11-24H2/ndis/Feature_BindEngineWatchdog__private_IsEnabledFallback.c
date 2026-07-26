/*
 * XREFs of Feature_BindEngineWatchdog__private_IsEnabledFallback @ 0x1400C64E0
 * Callers:
 *     Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline @ 0x1400C64A8 (Feature_BindEngineWatchdog__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140090368 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BindEngineWatchdog__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_BindEngineWatchdog__private_descriptor);
}
