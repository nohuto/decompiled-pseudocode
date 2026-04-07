/*
 * XREFs of _winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::OnAnimationComplete_::_1_::catch$0 @ 0x1800F5568
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::OnAnimationComplete_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x9A,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationresponsivetransitionhandler.cpp",
                           a4);
  return 0LL;
}
