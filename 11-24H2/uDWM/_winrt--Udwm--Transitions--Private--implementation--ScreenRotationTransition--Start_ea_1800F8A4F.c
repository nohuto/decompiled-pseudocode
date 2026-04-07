/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation_::_1_::dtor$2 @ 0x1800F8A4F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::StartSecondAnimation_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
