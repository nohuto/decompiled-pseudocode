/*
 * XREFs of __lambda_0a903797054c4de60318e94de109d2f9_::operator()_::_1_::catch$8 @ 0x18004B348
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180032E78 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_0a903797054c4de60318e94de109d2f9_::operator()_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x5B1,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    a4);
  return 0LL;
}
