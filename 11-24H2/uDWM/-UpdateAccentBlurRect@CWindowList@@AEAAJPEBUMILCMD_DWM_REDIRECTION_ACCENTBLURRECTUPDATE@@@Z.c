/*
 * XREFs of ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180093A70
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z @ 0x180073208 (-UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateAccentBlurRect(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *a2)
{
  CTopLevelWindow *v4; // rcx
  struct CWindowData *v6; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h]

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a2 + 4), &v6);
  if ( v6 )
  {
    v4 = (CTopLevelWindow *)*((_QWORD *)v6 + 55);
    if ( v4 )
      CTopLevelWindow::UpdateAccentBlurRect(v4, (const struct tagRECT *)((char *)a2 + 12));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
