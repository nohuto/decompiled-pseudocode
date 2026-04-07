/*
 * XREFs of ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800CF28C
 * Callers:
 *     ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x18008EEC0 (-UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CCC70 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CDC90 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A897C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AFDF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Secondary_Windows@@@details@wil@@.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetCapturedItemRootVisual(
        CProjectionBorderManager *this,
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
  int WindowRootVisual; // eax
  unsigned int v15; // ebx
  struct CapturedWindowRepresentation *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct CapturedWindowRepresentation *v19; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+60h] [rbp+40h] BYREF

  v19 = this;
  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  v19 = 0LL;
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
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
    v12 = CapturedWindowRepresentation::Create(v11, &v19);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1878LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v12);
  }
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v19) )
  {
    v13 = (struct CVisualProxy *)*((_QWORD *)v19 + 3);
    *a3 = v13;
  }
  WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v13, a2, v8);
  v15 = WindowRootVisual;
  if ( WindowRootVisual >= 0 )
  {
    if ( *a3 )
    {
      v16 = v19;
      v19 = 0LL;
      *a4 = v16;
    }
    else
    {
      *a3 = *v8;
    }
    v15 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75F,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)WindowRootVisual);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v15;
}
