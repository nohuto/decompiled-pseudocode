/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F5CFC
 * Callers:
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403408CC (EtwTraceAutoBoostEntryExhaustion.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404790D0 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404CB770 (EtwTraceAutoBoostClearFloor.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1404F5D34 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
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
