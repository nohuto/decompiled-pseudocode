/*
 * XREFs of ?LaunchCustomUriAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBULauncherOptions@System@Windows@3@@Z @ 0x1806329E0
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_InitCoro$2 @ 0x1806327C8 (CopilotHotkeyManager--LaunchCustomUriAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall CopilotHotkeyManager::LaunchCustomUriAsync(__int64 a1, _BYTE *a2, void **a3, __int64 a4)
{
  void *v8; // rax
  _DWORD v10[46]; // [rsp+30h] [rbp-F8h] BYREF
  void **v11; // [rsp+E8h] [rbp-40h]

  v11 = a3;
  v8 = operator new(0xB0uLL);
  v10[0] = 0;
  CopilotHotkeyManager::LaunchCustomUriAsync__InitCoro_2(v10, (__int64)v8, a2, (__int64)a3, a4, a1);
  std::wstring::_Tidy_deallocate(a3);
  return a2;
}
