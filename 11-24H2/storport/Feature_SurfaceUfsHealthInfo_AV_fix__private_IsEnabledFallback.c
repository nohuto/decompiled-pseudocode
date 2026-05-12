/*
 * XREFs of Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback @ 0x1400AAB48
 * Callers:
 *     Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline @ 0x1400AAB10 (Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140068770 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_SurfaceUfsHealthInfo_AV_fix__private_descriptor);
}
