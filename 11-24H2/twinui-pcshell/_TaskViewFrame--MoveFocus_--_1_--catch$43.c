/*
 * XREFs of _TaskViewFrame::MoveFocus_::_1_::catch$43 @ 0x18070674F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewFrame::MoveFocus_::_1_::catch_43(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x12C,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                           a4);
  return 0LL;
}
