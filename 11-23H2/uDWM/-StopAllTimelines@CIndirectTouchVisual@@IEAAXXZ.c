/*
 * XREFs of ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C5894
 * Callers:
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C52CC (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C547C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C5628 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800C5860 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5960 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5A30 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C58B4 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C5924 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopAllTimelines(CIndirectTouchVisual *this)
{
  CIndirectTouchVisual *v1; // rcx
  CIndirectTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopFrameTimeline(this);
  CIndirectTouchVisual::StopTimeoutTimeline(v1);
  CIndirectTouchVisual::StopOpacityTimeline(v2);
}
