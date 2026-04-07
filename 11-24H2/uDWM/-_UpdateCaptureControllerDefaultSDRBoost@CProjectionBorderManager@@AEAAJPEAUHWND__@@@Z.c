/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCC70 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDC90 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800CF3D0 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800CFBF8 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
        CProjectionBorderManager *this,
        HWND a2)
{
  CProjectionBorderManager *v4; // rcx
  struct CWindowData *v5; // rdi
  int DefaultSDRBoostForWindow; // eax
  CProjectionBorderManager *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HWND HostWindowHandleForProxyWindow; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v13);
  v5 = v13;
  if ( !v13 || !*((_QWORD *)v13 + 55) )
    goto LABEL_8;
  LODWORD(v13) = 0;
  DefaultSDRBoostForWindow = CProjectionBorderManager::_GetDefaultSDRBoostForWindow(v4, (HMONITOR *)v5, (float *)&v13);
  v8 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow >= 0 )
  {
    HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v7, v5);
    DefaultSDRBoostForWindow = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
                                 this,
                                 HostWindowHandleForProxyWindow,
                                 *(float *)&v13);
    v8 = DefaultSDRBoostForWindow;
    if ( DefaultSDRBoostForWindow < 0 )
    {
      v9 = 960LL;
      goto LABEL_7;
    }
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v9 = 957LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)DefaultSDRBoostForWindow);
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v8;
}
