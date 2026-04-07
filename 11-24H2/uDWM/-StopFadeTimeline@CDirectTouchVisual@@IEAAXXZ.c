/*
 * XREFs of ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180012240
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18000E380 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180085D3C (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CDirectTouchVisual::StopFadeTimeline(CDirectTouchVisual *this)
{
  CTimelineBase *v1; // rcx
  __int64 v2; // rdx

  v1 = (CTimelineBase *)*((_QWORD *)this + 43);
  if ( v1 )
  {
    CTimelineBase::Release(v1);
    *(_QWORD *)(v2 + 344) = 0LL;
  }
}
