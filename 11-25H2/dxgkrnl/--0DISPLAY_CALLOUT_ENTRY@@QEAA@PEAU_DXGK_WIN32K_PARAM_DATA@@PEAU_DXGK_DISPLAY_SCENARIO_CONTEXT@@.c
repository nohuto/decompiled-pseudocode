/*
 * XREFs of ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CCD18
 * Callers:
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401D23B0 (DxgkRequestSyncDisplaySwitchCallout.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140409A9C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 * Callees:
 *     ??0CDisplayScenarioContextCarrier@@QEAA@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140063290 (--0CDisplayScenarioContextCarrier@@QEAA@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

DISPLAY_CALLOUT_ENTRY *__fastcall DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
        DISPLAY_CALLOUT_ENTRY *this,
        struct _DXGK_WIN32K_PARAM_DATA *a2,
        const struct _GUID *a3)
{
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 4) = 2;
  CDisplayScenarioContextCarrier::CDisplayScenarioContextCarrier((DISPLAY_CALLOUT_ENTRY *)((char *)this + 64), a3);
  if ( a2 )
  {
    *(_OWORD *)((char *)this + 24) = *(_OWORD *)&a2->PathsArray;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)&a2->NumPathArrayElements;
  }
  else
  {
    *(_OWORD *)((char *)this + 24) = 0LL;
    *(_OWORD *)((char *)this + 40) = 0LL;
    *((_DWORD *)this + 12) = 2447;
  }
  return this;
}
