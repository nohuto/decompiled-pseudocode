/*
 * XREFs of Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14004DF68
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback @ 0x14004DFA0 (Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_featureState,
             3LL);
}
