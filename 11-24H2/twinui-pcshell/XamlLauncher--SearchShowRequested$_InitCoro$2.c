/*
 * XREFs of XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x18024CC68
 * Callers:
 *     ?SearchShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801DD914 (-SearchShowRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEventArg.c)
 * Callees:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x18024CCD0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::SearchShowRequested__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 225) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 233) = v5;
  *(_QWORD *)a2 = XamlLauncher::SearchShowRequested__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[224] = 0;
  return XamlLauncher::SearchShowRequested__ResumeCoro_1(a2);
}
