/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::catch$76 @ 0x1806CDCE5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::catch_76(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 320) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 312),
                            (void *)0x239,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            a4);
  return 0LL;
}
