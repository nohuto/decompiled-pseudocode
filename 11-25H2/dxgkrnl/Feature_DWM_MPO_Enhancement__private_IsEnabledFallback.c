/*
 * XREFs of Feature_DWM_MPO_Enhancement__private_IsEnabledFallback @ 0x14009AF30
 * Callers:
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009AEF8 (Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DWM_MPO_Enhancement__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DWM_MPO_Enhancement__private_descriptor);
}
