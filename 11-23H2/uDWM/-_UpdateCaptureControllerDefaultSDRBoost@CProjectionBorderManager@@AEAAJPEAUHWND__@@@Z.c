/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D4F90
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1620 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D3010 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D32E0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800ACD34 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800D421C (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800D43A0 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2)
{
  int SyncedWindowDataByHwnd; // eax
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct CWindowData *v8; // rbx
  int DefaultSDRBoostForWindow; // eax
  int v10; // edi
  HWND v11; // rdx
  __int64 v12; // rax
  CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v16; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             a2,
                             &v16);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v7 = 839LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    goto LABEL_13;
  }
  v8 = v16;
  if ( !v16 || !*((_QWORD *)v16 + 55) )
  {
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  LODWORD(v16) = 0;
  DefaultSDRBoostForWindow = CProjectionBorderManager::_GetDefaultSDRBoostForWindow(v5, (HMONITOR *)v8, (float *)&v16);
  v10 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow >= 0 )
  {
    v11 = (HWND)*((_QWORD *)v8 + 5);
    v12 = *((_QWORD *)v8 + 82);
    if ( v12 )
      v11 = *(HWND *)(v12 + 40);
    CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, v11);
    SyncedWindowDataByHwnd = CCaptureControllerProxy::SetDefaultSDRBoost(
                               CaptureControllerForCapturedWindow,
                               *(float *)&v16);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v7 = 846LL;
      goto LABEL_11;
    }
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34B,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)DefaultSDRBoostForWindow);
  v6 = v10;
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v6;
}
