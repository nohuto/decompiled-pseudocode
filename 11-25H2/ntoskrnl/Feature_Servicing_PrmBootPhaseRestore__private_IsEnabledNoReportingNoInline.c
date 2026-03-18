/*
 * XREFs of Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054A1A0
 * Callers:
 *     HaliLocateHiberRanges @ 0x140B5F660 (HaliLocateHiberRanges.c)
 * Callees:
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback @ 0x14054A184 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_PrmBootPhaseRestore__private_featureState & 2) != 0 )
    return Feature_Servicing_PrmBootPhaseRestore__private_featureState & 1;
  else
    return Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_featureState,
             0);
}
