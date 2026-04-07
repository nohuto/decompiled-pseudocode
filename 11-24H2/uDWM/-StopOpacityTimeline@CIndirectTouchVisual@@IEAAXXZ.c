/*
 * XREFs of ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7664
 * Callers:
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x1800C7610 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C77D0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 */

void __fastcall CIndirectTouchVisual::StopOpacityTimeline(CIndirectTouchVisual *this)
{
  CTimelineBase *v1; // rcx
  __int64 v2; // rdx

  v1 = (CTimelineBase *)*((_QWORD *)this + 41);
  if ( v1 )
  {
    CTimelineBase::Release(v1);
    *(_QWORD *)(v2 + 328) = 0LL;
  }
}
