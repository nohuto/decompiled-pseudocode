/*
 * XREFs of Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x14054ACD4
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     IommupPasidDeviceCreate @ 0x14054BED8 (IommupPasidDeviceCreate.c)
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 * Callees:
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback @ 0x14054AD0C (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback.c)
 */

__int64 Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DmaAdapterStage1DirectAttach__private_featureState & 0x10) != 0 )
    return Feature_DmaAdapterStage1DirectAttach__private_featureState & 1;
  else
    return Feature_DmaAdapterStage1DirectAttach__private_IsEnabledFallback(
             (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_featureState,
             3LL);
}
