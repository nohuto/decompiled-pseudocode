/*
 * XREFs of ?LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@3@@Z @ 0x180632E48
 * Callers:
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x180625C60 (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_InitCoro$2 @ 0x180632A78 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=2
_BYTE *__fastcall CopilotHotkeyManager::LaunchCustomUriForResultsAsync(__int64 a1, _BYTE *a2, void **a3, __int64 *a4)
{
  void *v8; // rax
  int v10; // [rsp+30h] [rbp-158h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-150h]
  void **v12; // [rsp+150h] [rbp-38h]

  v12 = a3;
  v11 = a4;
  v8 = operator new(0x110uLL);
  v10 = 0;
  CopilotHotkeyManager::LaunchCustomUriForResultsAsync__InitCoro_2(&v10, (__int64)v8, a2, (__int64)a3, a4, a1);
  std::wstring::_Tidy_deallocate(a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a4);
  return a2;
}
