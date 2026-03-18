/*
 * XREFs of Feature_CvmMasterAdapterBounceFix__private_IsEnabledDeviceUsageNoInline @ 0x14054ED98
 * Callers:
 *     HalpDmaInit @ 0x140C10654 (HalpDmaInit.c)
 * Callees:
 *     Feature_CvmMasterAdapterBounceFix__private_IsEnabledFallback @ 0x14054EDD0 (Feature_CvmMasterAdapterBounceFix__private_IsEnabledFallback.c)
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
