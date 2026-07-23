/*
 * XREFs of Feature_TestUxGate__private_IsEnabledNoReportingNoInline @ 0x140668FA4
 * Callers:
 *     Feature_TestUxGate_IsEnabledWithReporting @ 0x140668ED0 (Feature_TestUxGate_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestUxGate__private_IsEnabledFallback @ 0x140668F88 (Feature_TestUxGate__private_IsEnabledFallback.c)
 */

__int64 Feature_TestUxGate__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestUxGate__private_featureState & 2) != 0 )
    return Feature_TestUxGate__private_featureState & 1;
  else
    return Feature_TestUxGate__private_IsEnabledFallback((unsigned int)Feature_TestUxGate__private_featureState, 0);
}
