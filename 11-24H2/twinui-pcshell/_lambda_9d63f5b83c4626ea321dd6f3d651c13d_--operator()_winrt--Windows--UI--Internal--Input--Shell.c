/*
 * XREFs of _lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058DF2C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_9d63f5b83c4626ea321dd6f3d651c13d___::Invoke @ 0x180591370 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180591370.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801F605C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??0?$vector@UPointerPoint@Input@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UPointerPoint@Input@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1802CA3D0 (--0-$vector@UPointerPoint@Input@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU-$IVector@UPointerPoint.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x1805929D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 *a3)
{
  TouchGestureProcessor **v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  AIXPolicyHelper *v7; // rcx
  void *v8; // r8
  TouchGestureProcessor *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // r8
  TouchGestureProcessor *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+38h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h]
  TouchGestureProcessor **v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v23; // [rsp+80h] [rbp+18h] BYREF
  struct IUnknown *v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = a2;
  v21 = a1;
  v3 = a1;
  v24 = 0LL;
  v4 = *a3;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v4 + 64LL))(v4, &v24);
  winrt::check_hresult((int *)&v22, v5, (__int64)&v17);
  v23 = v24;
  v9 = *v3;
  if ( !*((_BYTE *)*v3 + 120) )
  {
    winrt::param::vector<winrt::Windows::UI::Input::PointerPoint>::vector<winrt::Windows::UI::Input::PointerPoint>(
      (winrt *)&v17,
      &v23,
      v8);
    v10 = *((_QWORD *)v9 + 4);
    v19 = 0;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 208LL))(v10, v17);
    try
    {
      winrt::check_hresult((int *)&v22, v11, (__int64)&v19);
      v17 &= -(__int64)((_BYTE)v18 != 0);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53455430>::GetImpl'::`2'::impl)
        && AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy(v7) )
      {
        v13 = *v3;
        winrt::param::vector<winrt::Windows::UI::Input::PointerPoint>::vector<winrt::Windows::UI::Input::PointerPoint>(
          (winrt *)&v17,
          &v23,
          v12);
        v14 = *((_QWORD *)v13 + 5);
        v19 = 0;
        v20 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 328LL))(v14, v17);
        winrt::check_hresult((int *)&v22, v15, (__int64)&v19);
        v17 &= -(__int64)((_BYTE)v18 != 0);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      }
    }
    catch ( ... )
    {
      TouchGestureProcessor::HandleRecognizerException(*v21);
      v3 = v21;
    }
  }
  v16 = (__int64)*v3 + 136;
  if ( *((_QWORD *)*v3 + 19) )
  {
    if ( *((_BYTE *)*v3 + 293) )
    {
      if ( !*((_BYTE *)*v3 + 292) )
      {
        std::chrono::steady_clock::now((__int64 *)&v21);
        if ( (__int64)v21 - *(_QWORD *)v16 >= 101000000 )
        {
          *(_DWORD *)(v16 + 152) = *(_DWORD *)(v16 + 16);
          if ( *(_QWORD *)(v16 + 80) )
            std::_Func_class<void,>::operator()(v16 + 24);
          *(_BYTE *)(v16 + 156) = 1;
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(v7, v6);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
}
