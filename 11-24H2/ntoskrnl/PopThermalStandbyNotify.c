/*
 * XREFs of PopThermalStandbyNotify @ 0x1405D3D30
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x1405D3C64 (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
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
  return ZwUpdateWnfStateData(&WNF_PO_THERMAL_STANDBY, &v2, 4LL);
}
