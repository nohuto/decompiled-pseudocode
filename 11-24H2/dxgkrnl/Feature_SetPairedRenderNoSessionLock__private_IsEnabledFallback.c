/*
 * XREFs of Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback @ 0x14006CB7C
 * Callers:
 *     Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline @ 0x14006CB44 (Feature_SetPairedRenderNoSessionLock__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetPairedRenderNoSessionLock__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetPairedRenderNoSessionLock__private_descriptor);
}
