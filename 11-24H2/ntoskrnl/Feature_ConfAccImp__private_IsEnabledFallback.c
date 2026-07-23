/*
 * XREFs of Feature_ConfAccImp__private_IsEnabledFallback @ 0x140667908
 * Callers:
 *     Feature_ConfAccImp__private_IsEnabledDeviceOpportunityNoInline @ 0x140667898 (Feature_ConfAccImp__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_ConfAccImp__private_IsEnabledDeviceUsageNoInline @ 0x1406678D0 (Feature_ConfAccImp__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ConfAccImp__private_IsEnabledNoReportingNoInline @ 0x140667924 (Feature_ConfAccImp__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ConfAccImp__private_IsEnabledOtherReporting @ 0x14066795C (Feature_ConfAccImp__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ConfAccImp__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_ConfAccImp__private_descriptor);
}
