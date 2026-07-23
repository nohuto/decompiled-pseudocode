/*
 * XREFs of Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline @ 0x14053F994
 * Callers:
 *     HalpInterruptDetermineProcessorStartupFlags @ 0x140556D3C (HalpInterruptDetermineProcessorStartupFlags.c)
 *     HalpInterruptInitSystem @ 0x140B4F310 (HalpInterruptInitSystem.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 * Callees:
 *     Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledFallback @ 0x14053F9CC (Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ProcessorStartupCacheFlushOptimization__private_featureState & 0x10) != 0 )
    return Feature_ProcessorStartupCacheFlushOptimization__private_featureState & 1;
  else
    return Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_ProcessorStartupCacheFlushOptimization__private_featureState,
             3LL);
}
