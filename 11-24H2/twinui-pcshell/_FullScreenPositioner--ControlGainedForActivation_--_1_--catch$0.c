/*
 * XREFs of _FullScreenPositioner::ControlGainedForActivation_::_1_::catch$0 @ 0x1806DFDA3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall FullScreenPositioner::ControlGainedForActivation_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x1F5,
                           (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           a4);
  return 0LL;
}
