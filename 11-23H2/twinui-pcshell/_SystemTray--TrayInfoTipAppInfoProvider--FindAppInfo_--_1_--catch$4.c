/*
 * XREFs of _SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo_::_1_::catch$4 @ 0x18054657A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 392),
                           (void *)0x2B,
                           (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
                           a4);
  return 0LL;
}
