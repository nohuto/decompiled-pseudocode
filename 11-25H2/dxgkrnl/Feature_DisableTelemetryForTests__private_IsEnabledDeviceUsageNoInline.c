/*
 * XREFs of Feature_DisableTelemetryForTests__private_IsEnabledDeviceUsageNoInline @ 0x1400900F8
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140352330 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     Feature_DisableTelemetryForTests__private_IsEnabledFallback @ 0x140090130 (Feature_DisableTelemetryForTests__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableTelemetryForTests__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableTelemetryForTests__private_featureState & 0x10) != 0 )
    return Feature_DisableTelemetryForTests__private_featureState & 1;
  else
    return Feature_DisableTelemetryForTests__private_IsEnabledFallback(
             (unsigned int)Feature_DisableTelemetryForTests__private_featureState,
             3LL);
}
