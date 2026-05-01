/*
 * XREFs of CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E0864
 * Callers:
 *     ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0B70 (-RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 * Callees:
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0920 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 145) = a4;
  *(_QWORD *)a2 = CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 144) = 0;
  return CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}
