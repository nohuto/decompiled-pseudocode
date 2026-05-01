/*
 * XREFs of _LegacyWindowWrapper::LoadQuirksForApp_::_1_::catch$0 @ 0x1804DBCDF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LegacyWindowWrapper::LoadQuirksForApp_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 520),
                           (void *)0xFC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
                           a4);
  return 0LL;
}
