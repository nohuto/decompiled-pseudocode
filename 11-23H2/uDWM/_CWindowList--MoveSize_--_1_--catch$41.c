/*
 * XREFs of _CWindowList::MoveSize_::_1_::catch$41 @ 0x180068080
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E7220 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize_::_1_::catch_41(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1048),
    (void *)0xD68,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    a4);
  return 0LL;
}
