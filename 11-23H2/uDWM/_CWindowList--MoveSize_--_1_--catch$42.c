/*
 * XREFs of _CWindowList::MoveSize_::_1_::catch$42 @ 0x1800680C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EDDD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize_::_1_::catch_42(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1048),
                           (void *)0xD8D,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           a4);
  return 0LL;
}
