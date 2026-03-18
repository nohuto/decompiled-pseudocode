/*
 * XREFs of Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline @ 0x14004DC68
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledFallback @ 0x14004DCA0 (Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_featureState,
             3LL);
}
