/*
 * XREFs of _PWSLayoutParser::RuntimeClassInitialize_::_1_::catch$6 @ 0x1806E7955
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PWSLayoutParser::RuntimeClassInitialize_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x55,
                           (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
                           a4);
  return 0LL;
}
