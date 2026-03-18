/*
 * XREFs of Feature_LegacyDeviceIdleAcceleration__private_IsEnabledFallback @ 0x1404F2144
 * Callers:
 *     Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline @ 0x1404F210C (Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LegacyDeviceIdleAcceleration__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_LegacyDeviceIdleAcceleration__private_descriptor);
}
