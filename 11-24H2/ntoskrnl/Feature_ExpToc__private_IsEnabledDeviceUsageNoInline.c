/*
 * XREFs of Feature_ExpToc__private_IsEnabledDeviceUsageNoInline @ 0x140667A40
 * Callers:
 *     Feature_ExpToc_IsEnabledWithReporting @ 0x1406679C0 (Feature_ExpToc_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_ExpToc__private_IsEnabledFallback @ 0x140667A78 (Feature_ExpToc__private_IsEnabledFallback.c)
 */

__int64 Feature_ExpToc__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExpToc__private_featureState & 0x10) != 0 )
    return Feature_ExpToc__private_featureState & 1;
  else
    return Feature_ExpToc__private_IsEnabledFallback((unsigned int)Feature_ExpToc__private_featureState, 3LL);
}
