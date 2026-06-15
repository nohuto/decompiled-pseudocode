/*
 * XREFs of _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$6 @ 0x1801691FB
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BE458 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x79F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    a4);
  return 0LL;
}
