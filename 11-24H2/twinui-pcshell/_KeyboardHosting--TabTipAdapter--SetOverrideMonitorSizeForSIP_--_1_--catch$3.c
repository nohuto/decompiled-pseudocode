/*
 * XREFs of _KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP_::_1_::catch$3 @ 0x1806CB332
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180226F6C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0xC8C,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           a4);
  return 0LL;
}
