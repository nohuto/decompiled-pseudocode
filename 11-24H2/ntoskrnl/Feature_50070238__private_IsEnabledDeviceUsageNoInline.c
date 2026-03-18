/*
 * XREFs of Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14069ABAC
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x140C70D44 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     Feature_50070238__private_IsEnabledFallback @ 0x14069ABE4 (Feature_50070238__private_IsEnabledFallback.c)
 */

__int64 Feature_50070238__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_50070238__private_featureState & 0x10) != 0 )
    return Feature_50070238__private_featureState & 1;
  else
    return Feature_50070238__private_IsEnabledFallback((unsigned int)Feature_50070238__private_featureState, 3LL);
}
