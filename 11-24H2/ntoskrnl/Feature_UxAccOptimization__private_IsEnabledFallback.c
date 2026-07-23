/*
 * XREFs of Feature_UxAccOptimization__private_IsEnabledFallback @ 0x1406692D8
 * Callers:
 *     Feature_UxAccOptimization__private_IsEnabledDeviceOpportunityNoInline @ 0x140669268 (Feature_UxAccOptimization__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1406692A0 (Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406692F4 (Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledOtherReporting @ 0x14066932C (Feature_UxAccOptimization__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UxAccOptimization__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_UxAccOptimization__private_descriptor);
}
