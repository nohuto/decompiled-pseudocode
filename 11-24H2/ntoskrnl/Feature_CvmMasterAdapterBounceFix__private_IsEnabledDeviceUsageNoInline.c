/*
 * XREFs of Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline @ 0x14054C6D8
 * Callers:
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     Feature_CvmMasterAdapterBounceFix__private_IsEnabledFallback @ 0x14054C710 (Feature_CvmMasterAdapterBounceFix__private_IsEnabledFallback.c)
 */

__int64 Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CvmMasterAdapterBounceFix__private_featureState & 0x10) != 0 )
    return Feature_CvmMasterAdapterBounceFix__private_featureState & 1;
  else
    return Feature_CvmMasterAdapterBounceFix__private_IsEnabledFallback(
             (unsigned int)Feature_CvmMasterAdapterBounceFix__private_featureState,
             3LL);
}
