/*
 * XREFs of Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledDeviceUsageNoInline @ 0x140050ABC
 * Callers:
 *     VidSchInitializeAdapter @ 0x140115F70 (VidSchInitializeAdapter.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledFallback @ 0x140050AF4 (Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_featureState,
             3LL);
}
