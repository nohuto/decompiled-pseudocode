/*
 * XREFs of Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1405C49F4
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 * Callees:
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledFallback @ 0x1405C4A2C (Feature_ForceIdleReschedulingFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceIdleReschedulingFix__private_featureState & 0x10) != 0 )
    return Feature_ForceIdleReschedulingFix__private_featureState & 1;
  else
    return Feature_ForceIdleReschedulingFix__private_IsEnabledFallback(
             (unsigned int)Feature_ForceIdleReschedulingFix__private_featureState,
             3LL);
}
