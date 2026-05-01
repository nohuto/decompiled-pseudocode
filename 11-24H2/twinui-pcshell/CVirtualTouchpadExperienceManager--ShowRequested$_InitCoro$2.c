/*
 * XREFs of CVirtualTouchpadExperienceManager::ShowRequested$_InitCoro$2 @ 0x1803A01C0
 * Callers:
 *     ?ShowRequested@CVirtualTouchpadExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1803A03FC (-ShowRequested@CVirtualTouchpadExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRe.c)
 * Callees:
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803A0230 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::ShowRequested__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 81) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 89) = v5;
  *(_QWORD *)a2 = CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 80) = 0;
  return CVirtualTouchpadExperienceManager::ShowRequested__ResumeCoro_1(a2);
}
