/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180039D20
 * Callers:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x18007292C (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A374 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@@012@@Z @ 0x18003A72C (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C2A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180099F28 (--$GetActivationFactory@V-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windo.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x18009ADC0 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        __int64 (__fastcall ***this)(WindowsInternal::UI *, GUID *, __int64 *),
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 (__fastcall *v3)(WindowsInternal::UI *, GUID *, __int64 *); // rbx
  HRESULT v6; // eax
  __int64 (__fastcall *v7)(_QWORD, HSTRING, _QWORD); // rdi
  HRESULT v8; // eax
  int v9; // eax
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 (__fastcall **v12)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 *v13; // rax
  int v14; // eax
  __int64 (__fastcall *v15)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *), __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 (__fastcall **v22)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 *v23; // rax
  int v24; // eax
  __int64 (__fastcall *v25)(_QWORD, __int64, _QWORD); // rdi
  __int64 (__fastcall *v26)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *), __int64 (__fastcall **)(WindowsInternal::UI *, GUID *, __int64 *)); // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 (__fastcall *v29)(_QWORD, HSTRING, __int64); // rsi
  HRESULT v30; // eax
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 (__fastcall *v33)(__int64, GUID *, __int64); // r10
  __int64 (__fastcall *v34)(WindowsInternal::UI *, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v35)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v36; // rcx
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall *v38)(WindowsInternal::UI *, GUID *, __int64 *); // rcx
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(WindowsInternal::UI *, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v42)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v43; // rcx
  __int64 (__fastcall ***v44)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall *v45)(WindowsInternal::UI *, GUID *, __int64 *); // rcx
  __int64 v46; // rdx
  __int64 (__fastcall *v47)(WindowsInternal::UI *, GUID *, __int64 *); // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-41h] BYREF
  __int64 v49; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-31h] BYREF
  __int64 v51; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall *v52)(WindowsInternal::UI *, GUID *, __int64 *); // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall *v53)(WindowsInternal::UI *, GUID *, __int64 *); // [rsp+50h] [rbp-19h] BYREF
  __int64 (__fastcall *v54)(WindowsInternal::UI *, GUID *, __int64 *); // [rsp+58h] [rbp-11h] BYREF
  __int64 v55; // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall *v56)(WindowsInternal::UI *, GUID *, __int64 *); // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  HSTRING string; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v47 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.UI.Composition.CompositionEffectSourceParameter",
         0x37u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    RaiseException(v6, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_36;
  }
  LODWORD(v3) = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>>(
                  string,
                  &v47);
  if ( (int)v3 < 0 )
    goto LABEL_56;
  v3 = v47;
  v48 = 0LL;
  v7 = *(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(*(_QWORD *)v47 + 48LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v48);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"source", 6u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
LABEL_36:
    RaiseException(v8, 1u, 0, 0LL);
    __debugbreak();
LABEL_37:
    v40 = 53LL;
    goto LABEL_38;
  }
  v9 = v7(v3, string, &v48);
  LODWORD(v3) = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v9,
      (int)v47);
LABEL_50:
    v44 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v48;
    if ( v48 )
    {
      v48 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v44)[2])(v44);
    }
    goto LABEL_52;
  }
  v3 = (__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *))v48;
  v49 = 0LL;
  v10 = **v48;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v49);
  v11 = v10(v3, &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2, &v49);
  LODWORD(v3) = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v11,
      (int)v47);
LABEL_48:
    v43 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    goto LABEL_50;
  }
  v12 = *this;
  v53 = 0LL;
  v3 = *v12;
  v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v53);
  v14 = v3((WindowsInternal::UI *)this, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v13);
  LODWORD(v3) = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v14,
      (int)v47);
LABEL_47:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
    goto LABEL_48;
  }
  v3 = v53;
  v50 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *), __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v53 + 64LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v50);
  v16 = v15(v3, &v50);
  LODWORD(v3) = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v16,
      (int)v47);
LABEL_45:
    v42 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v50;
    if ( v50 )
    {
      v50 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v42)[2])(v42);
    }
    goto LABEL_47;
  }
  v3 = (__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *))v50;
  v55 = 0LL;
  v17 = **v50;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
  v18 = v17(v3, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v55);
  LODWORD(v3) = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18,
      (int)v47);
LABEL_44:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
    goto LABEL_45;
  }
  v54 = 0LL;
  v51 = 0LL;
  LODWORD(v3) = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v51);
  if ( (int)v3 < 0 )
  {
    v46 = 40LL;
    goto LABEL_60;
  }
  *(_DWORD *)(v51 + 76) = 1;
  LODWORD(v3) = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
                  (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v51 + 32),
                  30.0);
  if ( (int)v3 < 0 )
  {
    v46 = 43LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v3,
      (int)v47);
    goto LABEL_41;
  }
  v19 = v51;
  v20 = v49;
  if ( *(_QWORD *)(v51 + 64) != v49 )
  {
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
    v21 = *(_QWORD *)(v19 + 64);
    *(_QWORD *)(v19 + 64) = v20;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *this;
  v56 = 0LL;
  v3 = *v22;
  v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v56);
  v24 = v3((WindowsInternal::UI *)this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v23);
  LODWORD(v3) = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v24,
      (int)v47);
LABEL_40:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
LABEL_41:
    if ( v51 )
    {
      v51 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release();
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
    goto LABEL_44;
  }
  v3 = v56;
  v52 = 0LL;
  v25 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v56 + 88LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v52);
  LODWORD(v3) = v25(v3, v51, &v52);
  if ( (int)v3 < 0 )
  {
    v40 = 50LL;
    goto LABEL_38;
  }
  v3 = v52;
  v26 = *(__int64 (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *), __int64 (__fastcall **)(WindowsInternal::UI *, GUID *, __int64 *)))(*(_QWORD *)v52 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
  LODWORD(v3) = v26(v3, &v54);
  if ( (int)v3 < 0 )
  {
    v40 = 51LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v3,
      (int)v47);
    v41 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *)))(*(_QWORD *)v41 + 16LL))(v41);
    }
    goto LABEL_40;
  }
  v3 = v54;
  v27 = v55;
  v28 = *(_QWORD *)v54;
  string = 0LL;
  v29 = *(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(v28 + 56);
  v30 = WindowsCreateStringReference(L"source", 6u, &hstringHeader, &string);
  if ( v30 >= 0 )
  {
    LODWORD(v3) = v29(v3, string, v27);
    if ( (int)v3 >= 0 )
    {
      v31 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
      LODWORD(v3) = v33(v32, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v31);
      if ( (int)v3 >= 0 )
      {
        v34 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          (*(void (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *)))(*(_QWORD *)v34 + 16LL))(v34);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
        if ( v51 )
        {
          v51 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release();
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
        v35 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v50;
        if ( v50 )
        {
          v50 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v35)[2])(v35);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
        v36 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v48;
        if ( v48 )
        {
          v48 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v37)[2])(v37);
        }
        v38 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *)))(*(_QWORD *)v38 + 16LL))(v38);
        }
        return 0LL;
      }
      v40 = 55LL;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  RaiseException(v30, 1u, 0, 0LL);
  __debugbreak();
LABEL_56:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16,
    (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
    (const char *)(unsigned int)v3,
    (int)v47);
LABEL_52:
  v45 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64 (__fastcall *)(WindowsInternal::UI *, GUID *, __int64 *)))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return (unsigned int)v3;
}
