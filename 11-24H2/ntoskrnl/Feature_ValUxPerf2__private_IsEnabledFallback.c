/*
 * XREFs of Feature_ValUxPerf2__private_IsEnabledFallback @ 0x140669AD8
 * Callers:
 *     Feature_ValUxPerf2__private_IsEnabledDeviceOpportunityNoInline @ 0x140669A68 (Feature_ValUxPerf2__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledDeviceUsageNoInline @ 0x140669AA0 (Feature_ValUxPerf2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x140669AF4 (Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledOtherReporting @ 0x140669B2C (Feature_ValUxPerf2__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ValUxPerf2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_ValUxPerf2__private_descriptor);
}
