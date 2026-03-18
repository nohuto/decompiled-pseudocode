/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1404F2800
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F27C8 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x140642E9C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x140642ED4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x140642F0C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor);
}
