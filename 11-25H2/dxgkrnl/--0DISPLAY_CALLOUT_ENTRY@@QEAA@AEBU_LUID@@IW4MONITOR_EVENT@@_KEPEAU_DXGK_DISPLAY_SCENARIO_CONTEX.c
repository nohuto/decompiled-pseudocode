/*
 * XREFs of ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140184EA4
 * Callers:
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DBBF4 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0CDisplayScenarioContextCarrier@@QEAA@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140063290 (--0CDisplayScenarioContextCarrier@@QEAA@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        char a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  bool v11; // zf

  *(_BYTE *)(a1 + 21) = a6;
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 0;
  CDisplayScenarioContextCarrier::CDisplayScenarioContextCarrier(
    (CDisplayScenarioContextCarrier *)(a1 + 64),
    (const struct _GUID *)a7);
  v11 = *(_BYTE *)(a1 + 21) == 0;
  *(_QWORD *)(a1 + 24) = *a2;
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  if ( !v11 )
    _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 462);
  return a1;
}
