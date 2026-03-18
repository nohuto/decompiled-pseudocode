/*
 * XREFs of Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledDeviceUsageNoInline @ 0x14004CFB4
 * Callers:
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C0A1C (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledFallback @ 0x14004CFEC (Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_featureState,
             3LL);
}
