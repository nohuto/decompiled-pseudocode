/*
 * XREFs of Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledDeviceUsageNoInline @ 0x140050A14
 * Callers:
 *     VidSchInitializeAdapter @ 0x140115F70 (VidSchInitializeAdapter.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledFallback @ 0x140050A4C (Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_featureState,
             3LL);
}
