/*
 * XREFs of ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140058474
 * Callers:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14006ABC4 (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006ABFC (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ @ 0x140090224 (--1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ.c)
 *     ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1401CD658 (--1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x140377270 (DxgkProcessDisplayCalloutBatch.c)
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
