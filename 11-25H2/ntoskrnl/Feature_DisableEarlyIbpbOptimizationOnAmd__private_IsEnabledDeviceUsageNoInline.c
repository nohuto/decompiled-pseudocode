/*
 * XREFs of Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledDeviceUsageNoInline @ 0x1405B9508
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledFallback @ 0x1405B9540 (Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableEarlyIbpbOptimizationOnAmd__private_featureState & 0x10) != 0 )
    return Feature_DisableEarlyIbpbOptimizationOnAmd__private_featureState & 1;
  else
    return Feature_DisableEarlyIbpbOptimizationOnAmd__private_IsEnabledFallback(
             (unsigned int)Feature_DisableEarlyIbpbOptimizationOnAmd__private_featureState,
             3LL);
}
