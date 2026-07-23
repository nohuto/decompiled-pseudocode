/*
 * XREFs of Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline @ 0x140668F50
 * Callers:
 *     Feature_TestUxGate_IsEnabledWithReporting @ 0x140668ED0 (Feature_TestUxGate_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestUxGate__private_IsEnabledFallback @ 0x140668F88 (Feature_TestUxGate__private_IsEnabledFallback.c)
 */

__int64 Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TestUxGate__private_featureState & 0x10) != 0 )
    return Feature_TestUxGate__private_featureState & 1;
  else
    return Feature_TestUxGate__private_IsEnabledFallback((unsigned int)Feature_TestUxGate__private_featureState, 3LL);
}
