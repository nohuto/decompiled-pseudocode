/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B4330
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa9dcec5f3___ @ 0x1800ABB44 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z @ 0x1800A85A4 (-SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_SendBoundsToCaptureControllerFromWindow(
        CCaptureManager *this,
        HWND a2,
        __int64 a3,
        struct CCaptureControllerProxy *a4)
{
  int ProxyWindowHandle; // eax
  unsigned int v7; // ebx
  HWND v9; // rbx
  HWND v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r8d
  int v16; // eax
  struct _MARGINS v17; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HWND v19; // [rsp+50h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+68h] [rbp+38h] BYREF

  v19 = (HWND)this;
  if ( a4 )
  {
    v19 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(this, a2, &v19);
    v7 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x618,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v7;
    }
    v9 = v19;
    if ( !v19 )
      v9 = a2;
    v20 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v19 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v9,
      (struct CWindowData **)&v19);
    v10 = v19;
    if ( v19 && *((_QWORD *)v19 + 55) )
    {
      if ( ((_DWORD)v19[29] & 0x20000000) != 0 )
      {
        v11 = CCaptureControllerProxy::SetCaptureState(a4, 0);
        v7 = v11;
        if ( v11 < 0 )
        {
          v12 = 1575LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v11);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
          return v7;
        }
      }
      v17 = 0LL;
      CTopLevelWindow::GetFrameMargins(*((CTopLevelWindow **)v10 + 55), &v17);
      v13 = *((_QWORD *)v10 + 6);
      v14 = 0;
      if ( (int)(*((_QWORD *)v10 + 7) - v13) >= 0 )
        v14 = *((_QWORD *)v10 + 7) - v13;
      v15 = v14 - v17.cxRightWidth - v17.cxLeftWidth;
      v16 = 0;
      if ( (int)(HIDWORD(*((_QWORD *)v10 + 7)) - HIDWORD(v13)) >= 0 )
        v16 = HIDWORD(*((_QWORD *)v10 + 7)) - HIDWORD(v13);
      v11 = CCaptureControllerProxy::SetContentSize(
              a4,
              (double)v15,
              (double)(v16 - v17.cyTopHeight - v17.cyBottomHeight));
      v7 = v11;
      if ( v11 < 0 )
      {
        v12 = 1600LL;
        goto LABEL_18;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  }
  return 0LL;
}
