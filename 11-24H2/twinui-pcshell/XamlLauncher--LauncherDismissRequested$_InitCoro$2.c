/*
 * XREFs of XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x18045F5B4
 * Callers:
 *     ?LauncherDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18045FA0C (-LauncherDismissRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewRequested.c)
 * Callees:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045F620 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::LauncherDismissRequested__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 209) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 217) = v5;
  *(_QWORD *)a2 = XamlLauncher::LauncherDismissRequested__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[208] = 0;
  return XamlLauncher::LauncherDismissRequested__ResumeCoro_1(a2);
}
