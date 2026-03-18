/*
 * XREFs of Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledDeviceUsageNoInline @ 0x1400663DC
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x14005D4A8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledFallback @ 0x140066414 (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_FixD3ComponentLatencyListAllAdapters__private_featureState,
             3LL);
}
