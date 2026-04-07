/*
 * XREFs of ?AddRef@CCompositor@@UEAAKXZ @ 0x180089C30
 * Callers:
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008BDF0 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::AddRef(CCompositor *this)
{
  return CMILRefCountBase::AddRef((CCompositor *)((char *)this + 8));
}
