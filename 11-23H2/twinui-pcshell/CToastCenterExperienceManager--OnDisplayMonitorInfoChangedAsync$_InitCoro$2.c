/*
 * XREFs of CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E0588
 * Callers:
 *     ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E0808 (-OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@X.c)
 * Callees:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0640 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 66) = a4;
  *(_QWORD *)a2 = CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 65) = 0;
  return CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(a2);
}
