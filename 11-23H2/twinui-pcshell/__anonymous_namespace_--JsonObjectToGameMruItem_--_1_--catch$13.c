/*
 * XREFs of __anonymous_namespace_::JsonObjectToGameMruItem_::_1_::catch$13 @ 0x1803E3EDE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::JsonObjectToGameMruItem_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 216),
    (void *)0x47,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 224);
  *v5 = 0LL;
  v5[1] = 0LL;
  return 0LL;
}
