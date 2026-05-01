/*
 * XREFs of _JsonGameMruManager::SerializeToJsonFile_::_1_::catch$54 @ 0x1803E4394
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JsonGameMruManager::SerializeToJsonFile_::_1_::catch_54(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 296),
    (void *)0xEF,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
    a4);
  return 0LL;
}
