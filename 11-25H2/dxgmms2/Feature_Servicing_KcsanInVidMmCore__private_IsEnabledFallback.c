/*
 * XREFs of Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback @ 0x14004CD7C
 * Callers:
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004D570 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_KcsanInVidMmCore__private_descriptor);
}
