/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::catch$15 @ 0x180164520
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x75A,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    a4);
  return 0LL;
}
