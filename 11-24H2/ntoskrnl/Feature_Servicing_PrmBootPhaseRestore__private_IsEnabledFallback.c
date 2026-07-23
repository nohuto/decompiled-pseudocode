/*
 * XREFs of Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback @ 0x14054A334
 * Callers:
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054A350 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_PrmBootPhaseRestore__private_descriptor);
}
