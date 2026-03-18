/*
 * XREFs of Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledDeviceUsageNoInline @ 0x1400903E8
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140351D90 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledFallback @ 0x140090420 (Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_RemoveAcmDeveloperPreview__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_RemoveAcmDeveloperPreview__private_featureState & 1;
  else
    return Feature_Bugfix_RemoveAcmDeveloperPreview__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_RemoveAcmDeveloperPreview__private_featureState,
             3LL);
}
