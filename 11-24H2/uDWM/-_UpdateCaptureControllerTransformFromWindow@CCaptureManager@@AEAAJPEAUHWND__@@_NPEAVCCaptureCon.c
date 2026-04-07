/*
 * XREFs of ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800B50E4
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0da7cd119d___ @ 0x1800AB9A4 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0d.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800B4500 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerTransformFromWindow(
        CCaptureManager *this,
        HWND a2,
        __int64 a3,
        struct CCaptureControllerProxy *a4)
{
  int ProxyWindowHandle; // eax
  unsigned int v7; // ebx
  HWND v9; // rbx
  CTopLevelWindow *v10; // rcx
  CCaptureManager *v11; // rcx
  int v12; // eax
  struct _MARGINS v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HWND v15; // [rsp+60h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = (HWND)this;
  if ( a4 )
  {
    v15 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(this, a2, &v15);
    v7 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v7;
    }
    v9 = v15;
    if ( !v15 )
      v9 = a2;
    v16 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v9,
      (struct CWindowData **)&v15);
    if ( v15 )
    {
      v10 = (CTopLevelWindow *)*((_QWORD *)v15 + 55);
      if ( v10 )
      {
        v13 = 0LL;
        CTopLevelWindow::GetFrameMargins(v10, &v13);
        v12 = CCaptureManager::_SetCaptureControllerOffsetTransform(
                v11,
                a4,
                -v13.cxLeftWidth,
                -v13.cyTopHeight,
                LODWORD(FLOAT_1_0));
        v7 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x671,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v12);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
          return v7;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  }
  return 0LL;
}
