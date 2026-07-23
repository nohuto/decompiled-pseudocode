/*
 * XREFs of Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline @ 0x140548AFC
 * Callers:
 *     HalpEnlightenmentInitialize @ 0x140548B50 (HalpEnlightenmentInitialize.c)
 *     HalpDmaInit @ 0x140C12654 (HalpDmaInit.c)
 * Callees:
 *     Feature_CvmDmaBouncing__private_IsEnabledFallback @ 0x140548B34 (Feature_CvmDmaBouncing__private_IsEnabledFallback.c)
 */

__int64 Feature_CvmDmaBouncing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CvmDmaBouncing__private_featureState & 0x10) != 0 )
    return Feature_CvmDmaBouncing__private_featureState & 1;
  else
    return Feature_CvmDmaBouncing__private_IsEnabledFallback(
             (unsigned int)Feature_CvmDmaBouncing__private_featureState,
             3LL);
}
