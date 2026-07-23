/*
 * XREFs of Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x140669AF4
 * Callers:
 *     Feature_ValUxPerf2_IsEnabledWithReporting @ 0x140669A20 (Feature_ValUxPerf2_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_ValUxPerf2__private_IsEnabledFallback @ 0x140669AD8 (Feature_ValUxPerf2__private_IsEnabledFallback.c)
 */

__int64 Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ValUxPerf2__private_featureState & 2) != 0 )
    return Feature_ValUxPerf2__private_featureState & 1;
  else
    return Feature_ValUxPerf2__private_IsEnabledFallback((unsigned int)Feature_ValUxPerf2__private_featureState, 0);
}
