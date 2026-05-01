/*
 * XREFs of _CSnapAssistControllerBase::SnapWindowFromSnapAssist_::_1_::catch$0 @ 0x1806F6DAF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSnapAssistControllerBase::SnapWindowFromSnapAssist_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0x205,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                           a4);
  return 0LL;
}
