/*
 * XREFs of Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x1406970A4
 * Callers:
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback @ 0x1406970DC (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback.c)
 */

__int64 Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState & 0x10) != 0 )
    return Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState & 1;
  else
    return Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback(
             (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState,
             3LL);
}
