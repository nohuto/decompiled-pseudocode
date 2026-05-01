/*
 * XREFs of CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x180370238
 * Callers:
 *     ?ShowRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1803707C4 (-ShowRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewReque.c)
 * Callees:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::ShowRequested__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 609) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 617) = v5;
  *(_QWORD *)a2 = CActionCenterExperienceManager::ShowRequested__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[608] = 0;
  return CActionCenterExperienceManager::ShowRequested__ResumeCoro_1(a2);
}
