/*
 * XREFs of Feature_TestLoc03__private_IsEnabledFallback @ 0x140668A68
 * Callers:
 *     Feature_TestLoc03__private_IsEnabledDeviceOpportunityNoInline @ 0x1406689F8 (Feature_TestLoc03__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline @ 0x140668A30 (Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledNoReportingNoInline @ 0x140668A84 (Feature_TestLoc03__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledOtherReporting @ 0x140668ABC (Feature_TestLoc03__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestLoc03__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_TestLoc03__private_descriptor);
}
