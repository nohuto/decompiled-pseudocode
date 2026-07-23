/*
 * XREFs of Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x18011B210
 * Callers:
 *     RtlCrc32 @ 0x1800F3610 (RtlCrc32.c)
 * Callees:
 *     <none>
 */

__int64 Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FasterCrc32__private_featureState & 0x10) != 0 )
    return Feature_FasterCrc32__private_featureState & 1;
  else
    return Feature_FasterCrc32__private_IsEnabledFallback((unsigned int)Feature_FasterCrc32__private_featureState, 3LL);
}
