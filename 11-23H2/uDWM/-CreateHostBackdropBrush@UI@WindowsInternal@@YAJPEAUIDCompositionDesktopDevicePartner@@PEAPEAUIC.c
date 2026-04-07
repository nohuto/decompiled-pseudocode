/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180022E5C
 * Callers:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x180025FDC (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??I?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800205C8 (--I-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$Com.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800219CC (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180021AD4 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180021B98 (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x180023270 (-put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionBackdropBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002329C (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionBackdropBrush@Compositio.c)
 *     ??$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@?$ComPtr@UICompositionEffectSourceParameter@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800232F8 (--$As@UIGraphicsEffectSource@Effects@Graphics@Windows@@@-$ComPtr@UICompositionEffectSourceParame.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180023774 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        __int64 (__fastcall ***this)(WindowsInternal::UI *, GUID *, __int64 *),
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  __int64 v5; // rbx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall **v12)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v13)(WindowsInternal::UI *, GUID *, __int64 *); // rdi
  __int64 *v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdi
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v23; // rcx
  __int64 v24; // rbx
  __int64 (__fastcall **v25)(WindowsInternal::UI *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v26)(WindowsInternal::UI *, GUID *, __int64 *); // rsi
  __int64 *v27; // rbx
  int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, __int64 *); // rsi
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64 *); // rsi
  __int64 *v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rdi
  __int64 (__fastcall **v37)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v38)(_QWORD *, __int64, __int64); // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-49h] BYREF
  __int64 v43; // [rsp+28h] [rbp-41h] BYREF
  __int64 v44; // [rsp+30h] [rbp-39h] BYREF
  __int64 v45; // [rsp+38h] [rbp-31h] BYREF
  __int64 v46; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v47; // [rsp+48h] [rbp-21h] BYREF
  __int64 v48; // [rsp+50h] [rbp-19h] BYREF
  __int64 v49; // [rsp+58h] [rbp-11h] BYREF
  __int64 v50; // [rsp+60h] [rbp-9h] BYREF
  __int64 v51; // [rsp+68h] [rbp-1h] BYREF
  __int64 v52; // [rsp+70h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v54; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.CompositionEffectSourceParameter",
    0x38u,
    0x37u);
  v5 = v54;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v52);
  ActivationFactory = RoGetActivationFactory(v5, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v52);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)ActivationFactory,
      v42);
    goto LABEL_17;
  }
  v8 = v52;
  v42 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v52 + 48LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v42);
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v10 = v9(v8, v54, &v42);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v10,
      v42);
LABEL_22:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v42);
    goto LABEL_17;
  }
  v43 = 0LL;
  v11 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameter>::As<Windows::Graphics::Effects::IGraphicsEffectSource>(
          &v42,
          &v43);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v11,
      v42);
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v43);
    goto LABEL_22;
  }
  v12 = *this;
  v45 = 0LL;
  v13 = *v12;
  v14 = (__int64 *)*Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::operator&((__int64)&v45, &v51);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
  v15 = v13((WindowsInternal::UI *)this, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v14);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v15,
      v42);
LABEL_26:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
    goto LABEL_21;
  }
  v16 = v45;
  v44 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 64LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v44);
  v18 = v17(v16, &v44);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18,
      v42);
LABEL_25:
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v44);
    goto LABEL_26;
  }
  v48 = 0LL;
  v19 = Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::operator&((__int64)&v48, &v51);
  v20 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBackdropBrush>::As<Windows::UI::Composition::ICompositionBrush>(
          &v44,
          *v19);
  v7 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v20,
      v42);
LABEL_31:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
    goto LABEL_25;
  }
  v47 = 0LL;
  v46 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v46);
  v21 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v46);
  v7 = v21;
  if ( v21 < 0 )
  {
    v40 = 40LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v21,
      v42);
LABEL_30:
    Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v47);
    goto LABEL_31;
  }
  v22 = v46;
  v23 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(v46 + 32);
  *(_DWORD *)(v46 + 76) = 1;
  v21 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(v23, 30.0);
  v7 = v21;
  if ( v21 < 0 )
  {
    v40 = 43LL;
    goto LABEL_29;
  }
  v24 = v43;
  if ( *(_QWORD *)(v22 + 64) != v43 )
  {
    v51 = v43;
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef(&v51);
    v51 = *(_QWORD *)(v22 + 64);
    *(_QWORD *)(v22 + 64) = v24;
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v51);
  }
  v25 = *this;
  v50 = 0LL;
  v26 = *v25;
  v27 = (__int64 *)*Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::operator&((__int64)&v50, &v51);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v27);
  v28 = v26((WindowsInternal::UI *)this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v27);
  v7 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v28,
      v42);
LABEL_36:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
    goto LABEL_30;
  }
  v29 = v50;
  v49 = 0LL;
  v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v50 + 88LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v49);
  v31 = v30(v29, v22, &v49);
  v7 = v31;
  if ( v31 < 0 )
  {
    v41 = 50LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v31,
      v42);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v49);
    goto LABEL_36;
  }
  v32 = v49;
  v33 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 48LL);
  v34 = (__int64 *)*Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>::operator&((__int64)&v47, &v51);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v34);
  v31 = v33(v32, v34);
  v7 = v31;
  if ( v31 < 0 )
  {
    v41 = 51LL;
    goto LABEL_35;
  }
  v35 = v47;
  v36 = v48;
  v37 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v47;
  v54 = 0LL;
  v38 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64))v37[7];
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"source", 7u, 6u);
  v31 = v38(v35, v54, v36);
  v7 = v31;
  if ( v31 < 0 )
  {
    v41 = 53LL;
    goto LABEL_35;
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IDCompositionDesktopDevicePartner *))*v47)(
          v47,
          &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
          a2);
  v7 = v31;
  if ( v31 < 0 )
  {
    v41 = 55LL;
    goto LABEL_35;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
  Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v47);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v44);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v42);
  v7 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v52);
  return v7;
}
