/*
 * XREFs of ?AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnimationEngine@@@Z @ 0x1800E8A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::AcquireAnimationEngine(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CAnimationEngine **a2)
{
  *a2 = CDesktopManager::AcquireAnimationEngine();
}
