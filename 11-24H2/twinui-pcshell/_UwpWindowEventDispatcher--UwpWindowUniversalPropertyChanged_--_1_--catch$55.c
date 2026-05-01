/*
 * XREFs of _UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::catch$55 @ 0x1806CC024
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowUniversalPropertyChanged_::_1_::catch_55(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x69A,
                            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                            a4);
  return 0LL;
}
