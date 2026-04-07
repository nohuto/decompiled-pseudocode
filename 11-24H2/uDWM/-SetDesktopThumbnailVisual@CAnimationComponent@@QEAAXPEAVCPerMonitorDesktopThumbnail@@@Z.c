/*
 * XREFs of ?SetDesktopThumbnailVisual@CAnimationComponent@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800A6FAC
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetDesktopThumbnailVisual(
        CAnimationComponent *this,
        struct CPerMonitorDesktopThumbnail *a2)
{
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
}
