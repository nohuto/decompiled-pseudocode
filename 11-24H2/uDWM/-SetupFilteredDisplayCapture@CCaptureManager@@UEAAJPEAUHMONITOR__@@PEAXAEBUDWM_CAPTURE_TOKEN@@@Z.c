/*
 * XREFs of ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18002E620 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180097B54 (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x1800A862C (-SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ??$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV?$unordered_map@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@5@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@@std@@AEBT_LARGE_INTEGER@@@Z @ 0x1800AB694 (--$MapContains@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@@YA_NAEBV-$unordered.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800B27DC (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x1800B3EBC (-_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800B5440 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::SetupFilteredDisplayCapture(
        CCaptureManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v9; // ebx
  CCompositor *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  int DesktopRootVisual; // eax
  __int64 v16; // rdx
  CCaptureManager *v17; // rcx
  CCaptureControllerProxy *v18; // [rsp+30h] [rbp-30h] BYREF
  struct CVisualProxy *v19; // [rsp+38h] [rbp-28h] BYREF
  struct CVisualProxy *v20; // [rsp+40h] [rbp-20h] BYREF
  void *v21; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
    return 2147942405LL;
  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = a3;
  if ( !MapContains<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>((__int64)this + 136, (__int64)a4) )
  {
    v10 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
    v11 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v10, a3, &v18);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = CCaptureControllerProxy::SetSuspendOnScreenOff(v18, v12, v13);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v19 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
        DesktopRootVisual = CCompositor::CreateContainerVisualProxy((__int64)v10, &v19);
        v9 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          DesktopRootVisual = CCaptureControllerProxy::SetRootVisual(v18, v19);
          v9 = DesktopRootVisual;
          if ( DesktopRootVisual >= 0 )
          {
            v20 = 0LL;
            DesktopRootVisual = CCaptureManager::_GetDesktopRootVisual(v17, &v20);
            v9 = DesktopRootVisual;
            if ( DesktopRootVisual >= 0 )
            {
              DesktopRootVisual = CCaptureControllerProxy::SetReferenceVisual(v18, v20);
              v9 = DesktopRootVisual;
              if ( DesktopRootVisual >= 0 )
              {
                DesktopRootVisual = CCaptureControllerProxy::SetCaptureState(v18, 0);
                v9 = DesktopRootVisual;
                if ( DesktopRootVisual >= 0 )
                {
                  DesktopRootVisual = CCaptureManager::_AddFilteredDisplayCaptureEntry(this, a2, v18, a4, v19);
                  v9 = DesktopRootVisual;
                  if ( DesktopRootVisual >= 0 )
                  {
                    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
                    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
                    v9 = 0;
                    goto LABEL_25;
                  }
                  v16 = 839LL;
                }
                else
                {
                  v16 = 837LL;
                }
              }
              else
              {
                v16 = 836LL;
              }
            }
            else
            {
              v16 = 835LL;
            }
          }
          else
          {
            v16 = 832LL;
          }
        }
        else
        {
          v16 = 831LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)DesktopRootVisual);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
        goto LABEL_8;
      }
      v14 = 828LL;
    }
    else
    {
      v14 = 825LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v18);
    goto LABEL_25;
  }
  v9 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x334,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x8000FFFFLL);
LABEL_25:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v21);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v9;
}
