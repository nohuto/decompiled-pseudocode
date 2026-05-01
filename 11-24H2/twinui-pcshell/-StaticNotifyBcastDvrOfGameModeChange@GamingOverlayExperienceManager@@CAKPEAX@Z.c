/*
 * XREFs of ?StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x18035B850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18023B2AC (-InternalAddRef@-$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180358A60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180358A60.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange(_QWORD *Block)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  char v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( Block )
  {
    v12[0] = *Block;
    v2 = v12[0];
    Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(v12);
    v3 = Block[1];
    v12[1] = v3;
    v4 = *((_BYTE *)Block + 16);
    v13 = v4;
    operator delete(Block);
    if ( !v2 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5EA,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x80004003LL);
      goto LABEL_11;
    }
    v14 = 0LL;
    v5 = *(_QWORD *)(v2 + 448);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v7 = v6(v5, &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217, &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217, &v14);
    v9 = v7;
    if ( v7 >= 0 )
    {
      LOBYTE(v8) = v4;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 88LL))(v14, v3, v8);
      v9 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
LABEL_11:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v2);
        return 0LL;
      }
      v10 = 1522LL;
    }
    else
    {
      v10 = 1520LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v2);
    return v9;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x5E3,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)0x80004003LL);
  return 0LL;
}
