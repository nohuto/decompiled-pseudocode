/*
 * XREFs of ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CC840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18002E620 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180089A10 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z @ 0x18008AF50 (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A85F8 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x1800A862C (-SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800B5440 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800B61BC (-CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerPro.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBADC (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProjectionBorderManager::StartFilteredDisplayCapture(
        CProjectionBorderManager *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  int DesktopRootVisual; // eax
  __int64 v16; // rdx
  CProjectionBorderManager *v17; // rcx
  bool v18; // [rsp+20h] [rbp-40h]
  CCaptureControllerProxy *v19; // [rsp+30h] [rbp-30h] BYREF
  struct CVisualProxy *v20; // [rsp+38h] [rbp-28h] BYREF
  struct CVisualProxy *v21; // [rsp+40h] [rbp-20h] BYREF
  void *v22; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
    return 2147942405LL;
  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v22 = a3;
  if ( !CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    v11 = CCompositor::CreateCaptureControllerProxyFromSharedHandle(v10, (__int64)a3, &v19);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = CCaptureControllerProxy::SetSuspendOnScreenOff(v19, v12, v13);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
        DesktopRootVisual = CCompositor::CreateContainerVisualProxy(v10, &v20);
        v9 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
        {
          DesktopRootVisual = CCaptureControllerProxy::SetRootVisual(v19, v20);
          v9 = DesktopRootVisual;
          if ( DesktopRootVisual >= 0 )
          {
            v21 = 0LL;
            DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v17, &v21);
            v9 = DesktopRootVisual;
            if ( DesktopRootVisual >= 0 )
            {
              DesktopRootVisual = CCaptureControllerProxy::SetReferenceVisual(v19, v21);
              v9 = DesktopRootVisual;
              if ( DesktopRootVisual >= 0 )
              {
                DesktopRootVisual = CProjectionBorderManager::_AddFilteredDisplayCaptureEntry(
                                      this,
                                      a2,
                                      v19,
                                      a4,
                                      v18,
                                      v20);
                v9 = DesktopRootVisual;
                if ( DesktopRootVisual >= 0 )
                {
                  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
                  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
                  v9 = 0;
                  goto LABEL_23;
                }
                v16 = 1236LL;
              }
              else
              {
                v16 = 1234LL;
              }
            }
            else
            {
              v16 = 1233LL;
            }
          }
          else
          {
            v16 = 1230LL;
          }
        }
        else
        {
          v16 = 1229LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)DesktopRootVisual);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
        goto LABEL_8;
      }
      v14 = 1226LL;
    }
    else
    {
      v14 = 1223LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    goto LABEL_23;
  }
  v9 = -2147418113;
LABEL_23:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v22);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v9;
}
