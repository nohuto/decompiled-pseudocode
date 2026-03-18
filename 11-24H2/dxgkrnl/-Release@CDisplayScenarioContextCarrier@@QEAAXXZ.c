/*
 * XREFs of ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140057EF4
 * Callers:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14006A7F0 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006A828 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ @ 0x140091684 (--1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ.c)
 *     ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1401D2998 (--1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x14038E4E0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextCarrier::Release(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextRelease(this + 1);
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
}
