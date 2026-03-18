/*
 * XREFs of Feature_3379165498__private_IsEnabledDeviceUsageNoInline @ 0x14065357C
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_3379165498__private_IsEnabledFallback @ 0x1406535B4 (Feature_3379165498__private_IsEnabledFallback.c)
 */

__int64 Feature_3379165498__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3379165498__private_featureState & 0x10) != 0 )
    return Feature_3379165498__private_featureState & 1;
  else
    return Feature_3379165498__private_IsEnabledFallback((unsigned int)Feature_3379165498__private_featureState, 3LL);
}
