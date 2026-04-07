/*
 * XREFs of _winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch$9 @ 0x1800F717A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DEEA4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x73,
                           (int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionmanager.cpp",
                           a4);
  return 0LL;
}
