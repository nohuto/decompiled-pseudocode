/*
 * XREFs of _SnapLayoutHelpers::GetOtherColumns_::_1_::catch$1 @ 0x1806F7141
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::GetOtherColumns_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0xA10,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                            a4);
  return 0LL;
}
