/*
 * XREFs of ?SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800A4E70
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z @ 0x1800DE8A4 (-EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Fo.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimatedTransitionVisual::SetEndClip(CAnimatedTransitionVisual *this, const struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 856) = *a2;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
}
