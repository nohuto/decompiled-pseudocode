/*
 * XREFs of Feature_ExpToc__private_IsEnabledFallback @ 0x140667A78
 * Callers:
 *     Feature_ExpToc__private_IsEnabledDeviceOpportunityNoInline @ 0x140667A08 (Feature_ExpToc__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_ExpToc__private_IsEnabledDeviceUsageNoInline @ 0x140667A40 (Feature_ExpToc__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExpToc__private_IsEnabledNoReportingNoInline @ 0x140667A94 (Feature_ExpToc__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ExpToc__private_IsEnabledOtherReporting @ 0x140667ACC (Feature_ExpToc__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ExpToc__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_ExpToc__private_descriptor);
}
