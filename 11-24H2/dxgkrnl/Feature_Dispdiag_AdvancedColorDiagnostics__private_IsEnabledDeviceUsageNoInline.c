/*
 * XREFs of Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140091558
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback @ 0x140091590 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState & 1;
  else
    return Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState,
             3LL);
}
