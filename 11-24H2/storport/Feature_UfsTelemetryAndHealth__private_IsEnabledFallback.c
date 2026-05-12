/*
 * XREFs of Feature_UfsTelemetryAndHealth__private_IsEnabledFallback @ 0x1400AABF0
 * Callers:
 *     Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline @ 0x1400AABB8 (Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140068770 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UfsTelemetryAndHealth__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_UfsTelemetryAndHealth__private_descriptor);
}
