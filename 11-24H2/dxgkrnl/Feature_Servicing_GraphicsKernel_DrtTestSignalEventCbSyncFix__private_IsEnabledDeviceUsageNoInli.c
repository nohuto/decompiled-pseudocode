/*
 * XREFs of Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInline @ 0x14006FAB8
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CB914 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback @ 0x14006FAF0 (Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_featureState,
             3LL);
}
