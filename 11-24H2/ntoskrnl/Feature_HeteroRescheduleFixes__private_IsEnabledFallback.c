/*
 * XREFs of Feature_HeteroRescheduleFixes__private_IsEnabledFallback @ 0x1404FB494
 * Callers:
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404457F0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_HeteroRescheduleFixes__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_HeteroRescheduleFixes__private_descriptor,
           a4);
}
