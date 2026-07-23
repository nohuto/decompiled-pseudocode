/*
 * XREFs of Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline @ 0x140697C2C
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x14080D3E0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     Feature_DisableCrcChecksumBoot__private_IsEnabledFallback @ 0x140697C64 (Feature_DisableCrcChecksumBoot__private_IsEnabledFallback.c)
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
