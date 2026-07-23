/*
 * XREFs of Feature_ConfAccImp__private_IsEnabledNoReportingNoInline @ 0x140667924
 * Callers:
 *     Feature_ConfAccImp_IsEnabledWithReporting @ 0x140667850 (Feature_ConfAccImp_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_ConfAccImp__private_IsEnabledFallback @ 0x140667908 (Feature_ConfAccImp__private_IsEnabledFallback.c)
 */

__int64 Feature_ConfAccImp__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ConfAccImp__private_featureState & 2) != 0 )
    return Feature_ConfAccImp__private_featureState & 1;
  else
    return Feature_ConfAccImp__private_IsEnabledFallback((unsigned int)Feature_ConfAccImp__private_featureState, 0);
}
