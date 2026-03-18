/*
 * XREFs of Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054CA90
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B6E700 (HaliLocateHiberRanges.c)
 * Callees:
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback @ 0x14054CA74 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (Feature_Servicing_PrmBootPhaseRestore__private_featureState & 2) != 0 )
    return Feature_Servicing_PrmBootPhaseRestore__private_featureState & 1;
  else
    return Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_featureState,
             0,
             a3,
             a4);
}
