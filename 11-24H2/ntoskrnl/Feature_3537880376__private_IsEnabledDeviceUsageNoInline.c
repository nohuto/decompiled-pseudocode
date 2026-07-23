/*
 * XREFs of Feature_3537880376__private_IsEnabledDeviceUsageNoInline @ 0x140650DC0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_3537880376__private_IsEnabledFallback @ 0x140650DF8 (Feature_3537880376__private_IsEnabledFallback.c)
 */

__int64 Feature_3537880376__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3537880376__private_featureState & 0x10) != 0 )
    return Feature_3537880376__private_featureState & 1;
  else
    return Feature_3537880376__private_IsEnabledFallback((unsigned int)Feature_3537880376__private_featureState, 3LL);
}
