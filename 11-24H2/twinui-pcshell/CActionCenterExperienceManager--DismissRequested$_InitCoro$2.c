/*
 * XREFs of CActionCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x18036D028
 * Callers:
 *     ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18036D474 (-DismissRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellVie.c)
 * Callees:
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18036D090 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::DismissRequested__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 513) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 521) = v5;
  *(_QWORD *)a2 = CActionCenterExperienceManager::DismissRequested__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[512] = 0;
  return CActionCenterExperienceManager::DismissRequested__ResumeCoro_1(a2);
}
