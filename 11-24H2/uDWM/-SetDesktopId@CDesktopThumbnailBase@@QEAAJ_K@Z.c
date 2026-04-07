/*
 * XREFs of ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180098AB8
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006D340 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800BBE74 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800EEF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopThumbnailBase::SetDesktopId(CDesktopThumbnailBase *this, __int64 a2)
{
  *((_QWORD *)this + 29) = a2;
  return CDesktopThumbnailBase::UpdateWindowClones(this);
}
