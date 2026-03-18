/*
 * XREFs of Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledDeviceUsageNoInline @ 0x14004D480
 * Callers:
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F89A4 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledFallback @ 0x14004D4B8 (Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_featureState,
             3LL);
}
