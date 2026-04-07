/*
 * XREFs of ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4C54
 * Callers:
 *     ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF400 (-OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800B44B8 (-_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerContentOffsetFromWindow(
        CCaptureManager *this,
        HWND a2,
        struct CCaptureControllerProxy *a3)
{
  int ProxyWindowHandle; // eax
  unsigned int v6; // ebx
  HWND v8; // rbx
  CCaptureManager *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = this;
  if ( a3 )
  {
    v13 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(this, a2, (HWND *)&v13);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return v6;
    }
    v8 = (HWND)v13;
    if ( !v13 )
      v8 = a2;
    v14 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v13 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v8, &v13);
    if ( v13 )
    {
      v10 = *((_QWORD *)v13 + 55);
      if ( v10 )
      {
        v11 = CCaptureManager::_SetCaptureControllerContentOffset(
                v9,
                a3,
                *(_QWORD *)(v10 + 64),
                HIDWORD(*(_QWORD *)(v10 + 64)));
        v6 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68F,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v11);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
          return v6;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  }
  return 0LL;
}
