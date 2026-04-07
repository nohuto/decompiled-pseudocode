/*
 * XREFs of ?IsWindowCapturable@CWindowList@@AEAAJPEAUHWND__@@PEA_N@Z @ 0x1800F0D4C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::IsWindowCapturable(CWindowList *this, HWND a2, bool *a3)
{
  struct CWindowData *WindowDataByHwnd; // rax
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd )
  {
    v7 = *((_QWORD *)WindowDataByHwnd + 55);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 16) )
        *a3 = 1;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return 0LL;
}
