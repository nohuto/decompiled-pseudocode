/*
 * XREFs of ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006ABFC
 * Callers:
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140271120 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 *     DxgkPollDisplayChildrenInternal @ 0x1403CA3A0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140058474 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayScenarioContextCarrier::operator=(__int64 a1, const struct _GUID *a2)
{
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)a1);
  if ( a2 )
    *(_BYTE *)a1 = DisplayScenarioContextFindAndAddRef(a2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(a1 + 8));
  return a1;
}
