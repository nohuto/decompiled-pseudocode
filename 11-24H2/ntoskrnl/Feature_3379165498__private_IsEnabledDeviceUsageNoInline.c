/*
 * XREFs of Feature_3379165498__private_IsEnabledDeviceUsageNoInline @ 0x140651CDC
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_3379165498__private_IsEnabledFallback @ 0x140651D14 (Feature_3379165498__private_IsEnabledFallback.c)
 */

__int64 Feature_3379165498__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3379165498__private_featureState & 0x10) != 0 )
    return Feature_3379165498__private_featureState & 1;
  else
    return Feature_3379165498__private_IsEnabledFallback((unsigned int)Feature_3379165498__private_featureState, 3LL);
}
