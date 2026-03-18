/*
 * XREFs of Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x140695FD4
 * Callers:
 *     SdbpMatchList @ 0x140AE807C (SdbpMatchList.c)
 * Callees:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback @ 0x14069600C (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback.c)
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
