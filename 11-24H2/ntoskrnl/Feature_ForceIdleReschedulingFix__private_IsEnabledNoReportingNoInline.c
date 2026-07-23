/*
 * XREFs of Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline @ 0x1405C4A48
 * Callers:
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404AD758 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledFallback @ 0x1405C4A2C (Feature_ForceIdleReschedulingFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ForceIdleReschedulingFix__private_featureState & 2) != 0 )
    return Feature_ForceIdleReschedulingFix__private_featureState & 1;
  else
    return Feature_ForceIdleReschedulingFix__private_IsEnabledFallback(
             (unsigned int)Feature_ForceIdleReschedulingFix__private_featureState,
             0);
}
