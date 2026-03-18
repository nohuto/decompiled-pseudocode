/*
 * XREFs of Feature_Servicing_TscFrequency64bit__private_IsEnabledNoReportingNoInline @ 0x1405E4550
 * Callers:
 *     RtlpComputeFraction @ 0x1404F79F4 (RtlpComputeFraction.c)
 * Callees:
 *     Feature_Servicing_TscFrequency64bit__private_IsEnabledFallback @ 0x1405E4534 (Feature_Servicing_TscFrequency64bit__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_TscFrequency64bit__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_TscFrequency64bit__private_featureState & 2) != 0 )
    return Feature_Servicing_TscFrequency64bit__private_featureState & 1;
  else
    return Feature_Servicing_TscFrequency64bit__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_TscFrequency64bit__private_featureState,
             0);
}
