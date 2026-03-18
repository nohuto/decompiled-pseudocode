/*
 * XREFs of Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline @ 0x1402A4128
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     Feature_Bugfix_58938704__private_IsEnabledFallback @ 0x1402A4160 (Feature_Bugfix_58938704__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_58938704__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_58938704__private_featureState & 1;
  else
    return Feature_Bugfix_58938704__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_58938704__private_featureState,
             3LL);
}
