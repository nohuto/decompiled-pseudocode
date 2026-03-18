/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F27C8
 * Callers:
 *     EtwTraceAutoBoostClearFloor @ 0x140311CF8 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140311F4C (EtwTraceAutoBoostEntryExhaustion.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404F278C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1404F2800 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 2) != 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 1;
  else
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             0LL);
}
