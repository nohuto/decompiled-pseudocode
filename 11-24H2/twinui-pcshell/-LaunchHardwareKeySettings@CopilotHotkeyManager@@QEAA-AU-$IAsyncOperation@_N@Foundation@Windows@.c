/*
 * XREFs of ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x1806331FC
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180632EEC (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 */

__int64 *__fastcall CopilotHotkeyManager::LaunchHardwareKeySettings(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+F8h] [rbp+10h] BYREF

  v4 = operator new(0xC0uLL);
  v6 = 0;
  CopilotHotkeyManager::LaunchHardwareKeySettings__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
