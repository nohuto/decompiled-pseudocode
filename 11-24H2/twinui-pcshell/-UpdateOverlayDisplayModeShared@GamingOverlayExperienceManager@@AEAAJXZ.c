/*
 * XREFs of ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802191BC
 * Callers:
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18021917C (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18035CFBC (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010D32C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x180224410 (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18023B2AC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8ba39f4a059f0dda37897a3bb179345b___ @ 0x18034299C (Windows--Internal--ComTaskPool--QueueTask__lambda_8ba39f4a059f0dda37897a3bb179345b___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180358A60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180358A60.c)
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x180364D7C (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **this)
{
  int v2; // eax
  int v3; // edi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v10 = this;
  Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(v10);
  v2 = GamingOverlayExperienceManager::DetermineCurrentDisplayMode(this);
  try
  {
    v3 = v2;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
      1u);
    if ( *((_BYTE *)this + 1624) )
    {
      if ( v3 != 2 )
      {
        v4 = this[59];
        if ( v4 )
        {
          winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(v4, 4u);
          *((_BYTE *)this + 1624) = 0;
        }
      }
    }
    *(_QWORD *)v10 = this;
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(v10);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8ba39f4a059f0dda37897a3bb179345b___(
           v6,
           v5,
           *((unsigned int *)this + 397),
           v10);
    if ( *(_QWORD *)v10 )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release)();
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D0,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(this);
    result = (unsigned int)v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11D1,
                           (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                           v8);
  }
  return result;
}
