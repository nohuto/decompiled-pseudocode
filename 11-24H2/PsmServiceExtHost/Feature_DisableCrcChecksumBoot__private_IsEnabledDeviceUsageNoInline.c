/*
 * XREFs of Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline @ 0x1800A3B18
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x1800A0368 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     <none>
 */

__int64 Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableCrcChecksumBoot__private_featureState & 0x10) != 0 )
    return Feature_DisableCrcChecksumBoot__private_featureState & 1;
  else
    return Feature_DisableCrcChecksumBoot__private_IsEnabledFallback(
             (unsigned int)Feature_DisableCrcChecksumBoot__private_featureState,
             3LL);
}
