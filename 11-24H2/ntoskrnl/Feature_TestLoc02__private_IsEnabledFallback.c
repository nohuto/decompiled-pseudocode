/*
 * XREFs of Feature_TestLoc02__private_IsEnabledFallback @ 0x1406688F8
 * Callers:
 *     Feature_TestLoc02__private_IsEnabledDeviceOpportunityNoInline @ 0x140668888 (Feature_TestLoc02__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline @ 0x1406688C0 (Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledNoReportingNoInline @ 0x140668914 (Feature_TestLoc02__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledOtherReporting @ 0x14066894C (Feature_TestLoc02__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestLoc02__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
