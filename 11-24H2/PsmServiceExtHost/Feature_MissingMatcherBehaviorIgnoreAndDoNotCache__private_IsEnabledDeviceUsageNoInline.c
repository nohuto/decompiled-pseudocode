/*
 * XREFs of Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x1800992F8
 * Callers:
 *     SdbpMatchList @ 0x18009BAA8 (SdbpMatchList.c)
 * Callees:
 *     <none>
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
