/*
 * XREFs of __anonymous_namespace_::TryGetFilePublisher_::_1_::catch$14 @ 0x1806A755F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryGetFilePublisher_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x217,
    (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 48);
  *v5 = 0LL;
  v5[2] = 0LL;
  v5[2] = 0LL;
  v5[3] = 7LL;
  *(_WORD *)v5 = 0;
  return 0LL;
}
