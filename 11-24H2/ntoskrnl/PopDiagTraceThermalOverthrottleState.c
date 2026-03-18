/*
 * XREFs of PopDiagTraceThermalOverthrottleState @ 0x1405D56F0
 * Callers:
 *     PopUpdateOverThrottledCount @ 0x140754B64 (PopUpdateOverThrottledCount.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x1405D5728 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalOverthrottleState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_OVERTHROTTLED_UPDATE);
}
