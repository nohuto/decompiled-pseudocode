/*
 * XREFs of Feature_1855570234__private_IsEnabledDeviceUsageNoInline @ 0x140653528
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_1855570234__private_IsEnabledFallback @ 0x140653560 (Feature_1855570234__private_IsEnabledFallback.c)
 */

__int64 Feature_1855570234__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1855570234__private_featureState & 0x10) != 0 )
    return Feature_1855570234__private_featureState & 1;
  else
    return Feature_1855570234__private_IsEnabledFallback((unsigned int)Feature_1855570234__private_featureState, 3LL);
}
