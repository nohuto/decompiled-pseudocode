/*
 * XREFs of _TaskViewFrame::MoveFocus_::_1_::catch$63 @ 0x1807876F9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskViewFrame::MoveFocus_::_1_::catch_63(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x125,
                            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
                            a4);
  return 0LL;
}
