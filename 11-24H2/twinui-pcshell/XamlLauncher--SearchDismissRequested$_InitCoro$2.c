/*
 * XREFs of XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x18024C8D4
 * Callers:
 *     ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DCBF0 (-SearchDismissRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewRequestedEv.c)
 * Callees:
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x18024C940 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::SearchDismissRequested__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 193) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 201) = v5;
  *(_QWORD *)a2 = XamlLauncher::SearchDismissRequested__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[192] = 0;
  return XamlLauncher::SearchDismissRequested__ResumeCoro_1(a2);
}
