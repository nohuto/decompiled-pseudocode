/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::catch$125 @ 0x1801644B4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream_::_1_::catch_125(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 472) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 2104),
                            (void *)0x673,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                            a4);
  return 0LL;
}
