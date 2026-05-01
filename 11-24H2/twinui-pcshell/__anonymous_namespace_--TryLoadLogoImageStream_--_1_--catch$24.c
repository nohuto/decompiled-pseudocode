/*
 * XREFs of __anonymous_namespace_::TryLoadLogoImageStream_::_1_::catch$24 @ 0x1806FD79D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryLoadLogoImageStream_::_1_::catch_24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xFB,
    (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  **(_QWORD **)(a2 + 48) = 0LL;
  return 0LL;
}
