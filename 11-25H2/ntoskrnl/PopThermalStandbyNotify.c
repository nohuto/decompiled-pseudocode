/*
 * XREFs of PopThermalStandbyNotify @ 0x1405CF320
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x1405CF254 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopThermalStandbyNotify(char a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    v2 = 0;
  }
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &v2, 4LL, 0LL, 0LL, 0, 0);
}
