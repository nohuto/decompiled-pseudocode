/*
 * XREFs of Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline @ 0x140099DD8
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 *     ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x14005ED50 (-StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ.c)
 *     ?CalcTokenTargetTime@CFlipToken@@IEAA_N_KAEBUCOMPOSITION_MONITOR_TIMING@@_N@Z @ 0x1400999A0 (-CalcTokenTargetTime@CFlipToken@@IEAA_N_KAEBUCOMPOSITION_MONITOR_TIMING@@_N@Z.c)
 * Callees:
 *     Feature_EarlyWakeupTokenDeadline__private_IsEnabledFallback @ 0x140099E10 (Feature_EarlyWakeupTokenDeadline__private_IsEnabledFallback.c)
 */

__int64 Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EarlyWakeupTokenDeadline__private_featureState & 0x10) != 0 )
    return Feature_EarlyWakeupTokenDeadline__private_featureState & 1;
  else
    return Feature_EarlyWakeupTokenDeadline__private_IsEnabledFallback(
             (unsigned int)Feature_EarlyWakeupTokenDeadline__private_featureState,
             3LL);
}
