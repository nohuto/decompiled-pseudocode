/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1804A3660
 * Callers:
 *     ?ShowRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1802AB9B0 (-ShowRequested@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEv.c)
 * Callees:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ShowRequested__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 177) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 185) = v5;
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 176) = 0;
  return CMultitaskingViewManager::ShowRequested__ResumeCoro_1(a2);
}
