/*
 * XREFs of Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback @ 0x140062AB8
 * Callers:
 *     Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline @ 0x140062AD4 (Feature_Servicing_AmlSyncPriority__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006329C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_AmlSyncPriority__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_AmlSyncPriority__private_descriptor);
}
