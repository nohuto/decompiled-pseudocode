/*
 * XREFs of ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x14006A7F0
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1403BD190 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140057EF4 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

void __fastcall _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION(
        _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 3);
}
