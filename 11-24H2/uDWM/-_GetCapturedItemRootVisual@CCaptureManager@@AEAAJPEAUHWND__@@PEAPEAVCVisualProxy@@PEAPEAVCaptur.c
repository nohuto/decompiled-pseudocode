/*
 * XREFs of ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800B3D2C
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B0490 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFDF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_GetCapturedItemRootVisual(
        CCaptureManager *this,
        HWND a2,
        struct CVisualProxy **a3,
        struct CapturedWindowRepresentation **a4,
        struct CVisualProxy **a5)
{
  struct CVisualProxy **v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  struct CWindowData *v11; // rbx
  int v12; // eax
  struct CVisualProxy *v13; // rcx
  bool v14; // r8
  int WindowRootVisual; // eax
  unsigned int v16; // ebx
  struct CapturedWindowRepresentation *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct CapturedWindowRepresentation *v20; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+40h] BYREF

  v20 = this;
  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v20 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_Secondary_Windows>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Capture_Secondary_Windows>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  a5 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    a2,
    (struct CWindowData **)&a5);
  v11 = (struct CWindowData *)a5;
  if ( a5 )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
    v12 = CapturedWindowRepresentation::Create(v11, &v20);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1401LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v20) )
  {
    v13 = (struct CVisualProxy *)*((_QWORD *)v20 + 3);
    *a3 = v13;
  }
  WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v13, a2, v14, v8);
  v16 = WindowRootVisual;
  if ( WindowRootVisual >= 0 )
  {
    if ( *a3 )
    {
      v17 = v20;
      v20 = 0LL;
      *a4 = v17;
    }
    else
    {
      *a3 = *v8;
    }
    v16 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x582,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)WindowRootVisual);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v20);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v16;
}
