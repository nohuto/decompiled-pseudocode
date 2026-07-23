/*
 * XREFs of Feature_TestUex12__private_IsEnabledFallback @ 0x140668D28
 * Callers:
 *     Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline @ 0x140668CB8 (Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestUex12__private_IsEnabledDeviceUsageNoInline @ 0x140668CF0 (Feature_TestUex12__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestUex12__private_IsEnabledNoReportingNoInline @ 0x140668D44 (Feature_TestUex12__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUex12__private_IsEnabledOtherReporting @ 0x140668D7C (Feature_TestUex12__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestUex12__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_TestUex12__private_descriptor);
}
