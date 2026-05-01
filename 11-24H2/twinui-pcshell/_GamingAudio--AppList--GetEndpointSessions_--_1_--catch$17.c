/*
 * XREFs of _GamingAudio::AppList::GetEndpointSessions_::_1_::catch$17 @ 0x1806E4320
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingAudio::AppList::GetEndpointSessions_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x29E,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
    a4);
  return 0LL;
}
