/*
 * XREFs of ??$AsWeak@VGamingOverlayExperienceManager@@@WRL@Microsoft@@YAJPEAVGamingOverlayExperienceManager@@PEAVWeakRef@01@@Z @ 0x180340FC8
 * Callers:
 *     ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18023E908 (-RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356230 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@GamingOverlay@Internal@Windows@@UIGameBarGameLauncher@GamingOverlay@Internal@Windows@@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18034BD38 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<GamingOverlayExperienceManager>(__int64 a1, __int64 *a2)
{
  const struct _GUID *v4; // rcx
  __int64 v5; // rcx
  int CanCastTo; // edi
  __int64 v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF

  v11 = 0LL;
  if ( InlineIsEqualGUID(
         &_uuidof__AUIWeakReferenceSource_Details_Platform__,
         &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1,
                  v5,
                  &v11);
    a1 = v11;
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  if ( CanCastTo < 0 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)CanCastTo;
  }
  v10 = 0LL;
  CanCastTo = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v10);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (unsigned int)CanCastTo;
  }
  v8 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v9 = 0LL;
  v11 = *a2;
  *a2 = v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return 0LL;
}
