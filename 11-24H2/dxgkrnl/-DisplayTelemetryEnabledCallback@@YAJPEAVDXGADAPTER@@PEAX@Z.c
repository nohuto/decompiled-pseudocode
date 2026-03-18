/*
 * XREFs of ?DisplayTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CE960
 * Callers:
 *     <none>
 * Callees:
 *     ?LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403C3800 (-LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

__int64 __fastcall DisplayTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  LOBYTE(a3) = 2;
  return LogMonitorOnOffTelemetry(a2, a1, a3);
}
