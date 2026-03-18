/*
 * XREFs of DpiGetDriverFullPath @ 0x14040BE00
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403F15B4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1403F64B0 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14040F2D4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverFullPath(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL), a2);
  if ( (int)result < 0 )
    *a2 = 0LL;
  return result;
}
