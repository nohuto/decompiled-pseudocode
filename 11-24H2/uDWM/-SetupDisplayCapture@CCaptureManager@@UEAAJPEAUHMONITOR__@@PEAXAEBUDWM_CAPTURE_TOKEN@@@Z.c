/*
 * XREFs of ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800B3EBC (-_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCaptureManager::SetupDisplayCapture(
        CCaptureManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  CCompositor *v11; // rbx
  int DesktopRootVisual; // eax
  CCaptureManager *v13; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  CCaptureControllerProxy *v17; // [rsp+60h] [rbp+30h] BYREF
  struct CVisualProxy *v18; // [rsp+70h] [rbp+40h] BYREF
  void *v19; // [rsp+78h] [rbp+48h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  v17 = 0LL;
  v19 = a3;
  if ( MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 72, (__int64)a4) )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 203LL;
  }
  else
  {
    v11 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
    DesktopRootVisual = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v11, a3, &v17);
    v8 = DesktopRootVisual;
    if ( DesktopRootVisual >= 0 )
    {
      DesktopRootVisual = CCaptureManager::_GetDesktopRootVisual(v13, &v18);
      v8 = DesktopRootVisual;
      if ( DesktopRootVisual >= 0 )
      {
        DesktopRootVisual = CCaptureControllerProxy::SetRootVisual(v17, v18);
        v8 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          DesktopRootVisual = CCaptureControllerProxy::SetCaptureState(v17, 0);
          v8 = DesktopRootVisual;
          if ( DesktopRootVisual >= 0 )
          {
            DesktopRootVisual = CCaptureManager::_AddDisplayCaptureEntry(this, a2, v17, a4);
            v8 = DesktopRootVisual;
            if ( DesktopRootVisual >= 0 )
            {
              v8 = 0;
              goto LABEL_16;
            }
            v10 = 211LL;
          }
          else
          {
            v10 = 209LL;
          }
        }
        else
        {
          v10 = 208LL;
        }
      }
      else
      {
        v10 = 207LL;
      }
    }
    else
    {
      v10 = 205LL;
    }
    v9 = (unsigned int)DesktopRootVisual;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_16:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v8;
}
