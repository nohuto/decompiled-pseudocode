/*
 * XREFs of ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18004AE8C
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x1800E6DB0 (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@E.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18004B1DC (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::implementation::TransitionState *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vector deleting destructor'(
        winrt::Udwm::Transitions::implementation::TransitionState *a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(a1);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}
