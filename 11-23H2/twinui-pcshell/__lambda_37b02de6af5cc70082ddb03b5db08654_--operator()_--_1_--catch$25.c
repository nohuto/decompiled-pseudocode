/*
 * XREFs of __lambda_37b02de6af5cc70082ddb03b5db08654_::operator()_::_1_::catch$25 @ 0x1802B5D64
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_37b02de6af5cc70082ddb03b5db08654_::operator()_::_1_::catch_25(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xCE,
                            (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                            a4);
  return 0LL;
}
