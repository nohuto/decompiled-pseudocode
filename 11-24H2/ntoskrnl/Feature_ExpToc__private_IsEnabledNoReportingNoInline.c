/*
 * XREFs of Feature_ExpToc__private_IsEnabledNoReportingNoInline @ 0x140667A94
 * Callers:
 *     Feature_ExpToc_IsEnabledWithReporting @ 0x1406679C0 (Feature_ExpToc_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_ExpToc__private_IsEnabledFallback @ 0x140667A78 (Feature_ExpToc__private_IsEnabledFallback.c)
 */

__int64 Feature_ExpToc__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ExpToc__private_featureState & 2) != 0 )
    return Feature_ExpToc__private_featureState & 1;
  else
    return Feature_ExpToc__private_IsEnabledFallback((unsigned int)Feature_ExpToc__private_featureState, 0);
}
