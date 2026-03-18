/*
 * XREFs of Feature_1519700280__private_IsEnabledDeviceUsage @ 0x1C013E1E4
 * Callers:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 * Callees:
 *     Feature_1519700280__private_IsEnabledFallback @ 0x1C013E21C (Feature_1519700280__private_IsEnabledFallback.c)
 */

__int64 Feature_1519700280__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1519700280__private_featureState & 0x10) != 0 )
    return Feature_1519700280__private_featureState & 1;
  else
    return Feature_1519700280__private_IsEnabledFallback((unsigned int)Feature_1519700280__private_featureState, 3LL);
}
