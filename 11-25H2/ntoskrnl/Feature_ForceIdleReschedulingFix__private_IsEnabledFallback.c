/*
 * XREFs of Feature_ForceIdleReschedulingFix__private_IsEnabledFallback @ 0x1405C2F5C
 * Callers:
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1405C2F24 (Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline @ 0x1405C2F78 (Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ForceIdleReschedulingFix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_ForceIdleReschedulingFix__private_descriptor);
}
