/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18004EA18
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z @ 0x1800A1460 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000AEF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x18004E694 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004F660 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004F728 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(
        CAccentAcrylicBlurBehind *this,
        int a2,
        double *a3)
{
  unsigned int v6; // ebx
  double v7; // xmm6_8
  __int64 *v8; // r12
  __int64 *v10; // rbx
  HRESULT v11; // eax
  int ActivationFactory; // eax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v15; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD, __int64); // rdi
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  int v23; // eax
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rdi
  int v26; // eax
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int LuminosityOpacityReference; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-69h] BYREF
  __int64 v40; // [rsp+50h] [rbp-61h] BYREF
  __int64 v41; // [rsp+58h] [rbp-59h] BYREF
  __int64 v42; // [rsp+60h] [rbp-51h] BYREF
  int v43; // [rsp+68h] [rbp-49h]
  unsigned int v44; // [rsp+6Ch] [rbp-45h]
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER v46; // [rsp+78h] [rbp-39h] BYREF
  HSTRING v47; // [rsp+90h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-19h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v6 = 0;
  if ( a3 )
    v7 = *a3;
  else
    v7 = DOUBLE_N1_0;
  v8 = (__int64 *)((char *)this + 280);
  if ( !std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 35)
    && *((_DWORD *)this + 82) == a2
    && *((double *)this + 42) == v7 )
  {
    return v6;
  }
  v39 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v39);
  string = 0LL;
  v11 = WindowsCreateStringReference(L"Windows.UI.Xaml.Media.AcrylicBrush", 0x22u, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    RaiseException(v11, 1u, 0, 0LL);
    goto LABEL_31;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v10);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x4FDu, 0LL);
    goto LABEL_52;
  }
  v40 = 0LL;
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v39;
  v14 = **v39;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v40);
  v16 = v14(v13, &GUID_89c2d40e_e139_58af_b3ef_70f0c0abf608, v15);
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x501u, 0LL);
LABEL_50:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
LABEL_52:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
    return v6;
  }
  v42 = 0LL;
  v17 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
          (char *)this + 248,
          &v42);
  v6 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x505u, 0LL);
LABEL_48:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
    goto LABEL_50;
  }
  v41 = 0LL;
  if ( a3 )
    goto LABEL_32;
  do
  {
    v45 = 0LL;
    v18 = v40;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v40 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
    v43 = 255;
    LOBYTE(v44) = HIBYTE(a2);
    *(_WORD *)((char *)&v44 + 1) = a2;
    HIBYTE(v44) = BYTE2(a2);
    v20 = v19(v18, v42, v44, v41);
    v6 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x517u, 0LL);
      goto LABEL_46;
    }
    v21 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x51E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v21,
        255);
    v47 = 0LL;
    v22 = WindowsCreateStringReference(L"Noise", 5u, &v46, &v47);
    if ( v22 >= 0 )
    {
      v23 = (*v45)[7](v45, (GUID *)v47, *((__int64 **)this + 36));
      v6 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x522u, 0LL);
      }
      else
      {
        v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
        v25 = **v45;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
        v26 = v25(v24, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v8);
        v6 = v26;
        if ( v26 >= 0 )
        {
          *((_DWORD *)this + 82) = a2;
          *((double *)this + 42) = v7;
          v47 = 0LL;
          v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
          if ( v45 )
          {
            v45 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v27)[2])(v27);
          }
          v28 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v29 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v31 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v39;
          if ( v39 )
          {
            v39 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v31)[2])(v31);
          }
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x53Au, 0LL);
      }
      v47 = 0LL;
LABEL_46:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v45);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
      goto LABEL_48;
    }
LABEL_31:
    RaiseException(v22, 1u, 0, 0LL);
LABEL_32:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
    LuminosityOpacityReference = CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(v33, v32, &v41);
    v6 = LuminosityOpacityReference;
  }
  while ( LuminosityOpacityReference >= 0 );
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LuminosityOpacityReference, 0x50Au, 0LL);
  v35 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v39;
  if ( v39 )
  {
    v39 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v38)[2])(v38);
  }
  return v6;
}
