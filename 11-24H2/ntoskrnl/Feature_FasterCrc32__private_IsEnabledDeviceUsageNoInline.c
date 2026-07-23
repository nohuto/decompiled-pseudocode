/*
 * XREFs of Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline @ 0x140449408
 * Callers:
 *     RtlCrc32 @ 0x1404493B0 (RtlCrc32.c)
 * Callees:
 *     Feature_FasterCrc32__private_IsEnabledFallback @ 0x1404F8DE4 (Feature_FasterCrc32__private_IsEnabledFallback.c)
 */

__int64 Feature_FasterCrc32__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FasterCrc32__private_featureState & 0x10) != 0 )
    return Feature_FasterCrc32__private_featureState & 1;
  else
    return Feature_FasterCrc32__private_IsEnabledFallback((unsigned int)Feature_FasterCrc32__private_featureState, 3LL);
}
