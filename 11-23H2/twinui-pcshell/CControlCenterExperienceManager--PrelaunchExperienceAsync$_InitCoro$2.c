/*
 * XREFs of CControlCenterExperienceManager::PrelaunchExperienceAsync$_InitCoro$2 @ 0x1801DF290
 * Callers:
 *     ?PrelaunchExperienceAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DF85C (-PrelaunchExperienceAsync@CControlCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::PrelaunchExperienceAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 242) = a4;
  *(_QWORD *)a2 = CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[241] = 0;
  return CControlCenterExperienceManager::PrelaunchExperienceAsync__ResumeCoro_1(a2);
}
