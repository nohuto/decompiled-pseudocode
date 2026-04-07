/*
 * XREFs of ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800B3D2C (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B3F60 (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B46CC (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4D6C (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::SetupWindowCapture(
        CCaptureManager *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  CCompositor *v11; // rbx
  int HostWindowHandle; // eax
  CCaptureManager *v13; // rcx
  CCaptureManager *v14; // rcx
  HWND v15; // rdi
  HWND v16; // rsi
  CCaptureManager *v17; // rcx
  CCaptureManager *v18; // rcx
  CCaptureManager *v19; // rcx
  HWND v21; // [rsp+30h] [rbp-30h] BYREF
  struct CVisualProxy *v22; // [rsp+38h] [rbp-28h] BYREF
  struct CVisualProxy *v23; // [rsp+40h] [rbp-20h] BYREF
  void *v24; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  CCaptureControllerProxy *v27; // [rsp+90h] [rbp+30h] BYREF
  struct CapturedWindowRepresentation *v28; // [rsp+A0h] [rbp+40h] BYREF
  HWND v29; // [rsp+A8h] [rbp+48h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v24 = a3;
  if ( MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 8, (__int64)a4) )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 37LL;
  }
  else
  {
    v11 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
    HostWindowHandle = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v11, a3, &v27);
    v8 = HostWindowHandle;
    if ( HostWindowHandle >= 0 )
    {
      v29 = 0LL;
      HostWindowHandle = CCaptureManager::_GetHostWindowHandle(v13, a2, &v29);
      v8 = HostWindowHandle;
      if ( HostWindowHandle >= 0 )
      {
        v21 = 0LL;
        v15 = v29;
        HostWindowHandle = CCaptureManager::_GetProxyWindowHandle(v14, v29, &v21);
        v8 = HostWindowHandle;
        if ( HostWindowHandle >= 0 )
        {
          v16 = v21;
          if ( !v21 )
            v16 = v15;
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
          HostWindowHandle = CCaptureManager::_GetCapturedItemRootVisual(v17, v16, &v22, &v28, &v23);
          v8 = HostWindowHandle;
          if ( HostWindowHandle >= 0 )
          {
            HostWindowHandle = CCaptureControllerProxy::SetRootVisual(v27, v22);
            v8 = HostWindowHandle;
            if ( HostWindowHandle >= 0 )
            {
              HostWindowHandle = CCaptureControllerProxy::SetReferenceVisual(v27, v23);
              v8 = HostWindowHandle;
              if ( HostWindowHandle >= 0 )
              {
                HostWindowHandle = CCaptureManager::_AddWindowCaptureEntry(this, v15, v28, v27, a4);
                v8 = HostWindowHandle;
                if ( HostWindowHandle >= 0 )
                {
                  HostWindowHandle = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(this, v16);
                  v8 = HostWindowHandle;
                  if ( HostWindowHandle >= 0 )
                  {
                    HostWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v18, v16, 1);
                    v8 = HostWindowHandle;
                    if ( HostWindowHandle >= 0 )
                    {
                      if ( v16 == v15
                        || (HostWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v19, v15, 1),
                            v8 = HostWindowHandle,
                            HostWindowHandle >= 0) )
                      {
                        v8 = 0;
                        goto LABEL_29;
                      }
                      v10 = 72LL;
                    }
                    else
                    {
                      v10 = 69LL;
                    }
                  }
                  else
                  {
                    v10 = 66LL;
                  }
                }
                else
                {
                  v10 = 64LL;
                }
              }
              else
              {
                v10 = 61LL;
              }
            }
            else
            {
              v10 = 60LL;
            }
          }
          else
          {
            v10 = 58LL;
          }
        }
        else
        {
          v10 = 50LL;
        }
      }
      else
      {
        v10 = 46LL;
      }
    }
    else
    {
      v10 = 39LL;
    }
    v9 = (unsigned int)HostWindowHandle;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_29:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v27);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v8;
}
