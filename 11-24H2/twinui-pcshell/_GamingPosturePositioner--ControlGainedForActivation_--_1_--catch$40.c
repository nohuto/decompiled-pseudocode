/*
 * XREFs of _GamingPosturePositioner::ControlGainedForActivation_::_1_::catch$40 @ 0x1806F11DD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::ControlGainedForActivation_::_1_::catch_40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 680),
                           (void *)0x3D8,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           a4);
  return 0LL;
}
