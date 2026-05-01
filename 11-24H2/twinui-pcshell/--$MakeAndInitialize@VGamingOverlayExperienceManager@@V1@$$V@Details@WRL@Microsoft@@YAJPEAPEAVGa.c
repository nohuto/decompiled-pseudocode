/*
 * XREFs of ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18023D048
 * Callers:
 *     ?CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18023DB30 (-CreateInstance@GamingOverlayExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802277E4 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18023B2AC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x18023D2D4 (--0GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18023E908 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180358A60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180358A60.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamingOverlayExperienceManager,GamingOverlayExperienceManager,>(
        GamingOverlayExperienceManager **a1)
{
  void *v2; // rax
  int v3; // edi
  GamingOverlayExperienceManager *v4; // rbx
  void *v6; // [rsp+28h] [rbp-20h] BYREF
  GamingOverlayExperienceManager *v7; // [rsp+30h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x6D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (GamingOverlayExperienceManager *)v2;
  if ( v2 )
  {
    v4 = GamingOverlayExperienceManager::GamingOverlayExperienceManager((GamingOverlayExperienceManager *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = GamingOverlayExperienceManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(&v7);
      *a1 = v4;
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v4);
      v3 = 0;
    }
    else if ( v4 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v6);
  return (unsigned int)v3;
}
