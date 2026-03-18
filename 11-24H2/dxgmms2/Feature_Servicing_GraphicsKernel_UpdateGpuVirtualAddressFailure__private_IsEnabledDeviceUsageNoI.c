/*
 * XREFs of Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoInline @ 0x14004C504
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledFallback @ 0x14004C53C (Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_featureState,
             3LL);
}
