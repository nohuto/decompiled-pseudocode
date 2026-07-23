/*
 * XREFs of Feature_TestUxGate__private_IsEnabledFallback @ 0x140668F88
 * Callers:
 *     Feature_TestUxGate__private_IsEnabledDeviceOpportunityNoInline @ 0x140668F18 (Feature_TestUxGate__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline @ 0x140668F50 (Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledNoReportingNoInline @ 0x140668FA4 (Feature_TestUxGate__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledOtherReporting @ 0x140668FDC (Feature_TestUxGate__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestUxGate__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_TestUxGate__private_descriptor);
}
