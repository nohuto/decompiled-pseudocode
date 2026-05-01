/*
 * XREFs of __anonymous_namespace_::JsonObjectToGameMruItem_::_1_::catch$19 @ 0x1806D09ED
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::JsonObjectToGameMruItem_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x47,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 256);
  *v5 = 0LL;
  v5[1] = 0LL;
  return 0LL;
}
