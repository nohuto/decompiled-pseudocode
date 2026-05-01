/*
 * XREFs of CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_InitCoro$2 @ 0x1801DE0CC
 * Callers:
 *     ?CreateDisplayMonitorInfoCollectionAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DE640 (-CreateDisplayMonitorInfoCollectionAsync@CControlCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 * Callees:
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 234) = a4;
  *(_QWORD *)a2 = CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 233) = 0;
  return CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync__ResumeCoro_1(a2);
}
