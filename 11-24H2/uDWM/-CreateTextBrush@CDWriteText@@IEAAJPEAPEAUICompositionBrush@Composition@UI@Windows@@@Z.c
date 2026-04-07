/*
 * XREFs of ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC
 * Callers:
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800351B0 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18006217C (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800700FC (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x18009C450 (_o_ceilf_0.c)
 *     floorf @ 0x18009C474 (floorf.c)
 *     ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x1800A1270 (-GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEA.c)
 *     _lambda_24da319b3cf33cd268668b77c8951af8_::operator() @ 0x1800C2E74 (_lambda_24da319b3cf33cd268668b77c8951af8_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CDWriteText::CreateTextBrush(
        CDWriteText *this,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  __int64 v4; // r14
  int TextLayout; // eax
  unsigned int v6; // ebx
  int GraphicsDeviceNoRef; // eax
  __int64 v8; // rdx
  float v9; // xmm10_4
  __m128 v10; // xmm0
  __m128 v11; // xmm6
  __m128 v12; // xmm0
  __m128 v13; // xmm7
  __m128 v14; // xmm0
  __m128 v15; // xmm8
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v16; // rdi
  __int64 (__fastcall *v17)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64); // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v22; // rbx
  unsigned int v23; // xmm3_4
  float v24; // xmm1_4
  int v25; // eax
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v29)(_QWORD, GUID *, __int64 *); // rdi
  int v30; // eax
  __int64 (__fastcall *v31)(__int64, __int64, _QWORD); // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 (*v34)(void); // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v38)(_QWORD, GUID *, _QWORD); // rdi
  __int64 (__fastcall ***v39)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v40)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionBrush **); // rdi
  __m128 v41; // xmm0
  __int64 (__fastcall ***v42)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v43)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionBrush **); // rdi
  int v44; // eax
  struct Windows::UI::Composition::ICompositionBrush *v45; // rax
  int v47; // [rsp+28h] [rbp-E0h]
  int *v48; // [rsp+28h] [rbp-E0h]
  int v49[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, _QWORD); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v53)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionBrush **); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A8h] BYREF
  struct Windows::UI::Composition::ICompositionBrush *v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  int v57[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v59[2]; // [rsp+88h] [rbp-80h] BYREF
  char v60; // [rsp+98h] [rbp-70h]
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v61[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-38h]
  int v65; // [rsp+E0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  TextLayout = CDWriteText::CreateTextLayout(this);
  v6 = TextLayout;
  if ( TextLayout >= 0 )
  {
    v56 = 0LL;
    v54 = 0LL;
    *(_QWORD *)v57 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0;
    v62 = 0LL;
    GraphicsDeviceNoRef = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 23) + 480LL))(
                            *((_QWORD *)this + 23),
                            &v63);
    v6 = GraphicsDeviceNoRef;
    if ( GraphicsDeviceNoRef < 0 )
    {
      v8 = 109LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)GraphicsDeviceNoRef,
        v47);
LABEL_44:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
      return v6;
    }
    GraphicsDeviceNoRef = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 23) + 488LL))(
                            *((_QWORD *)this + 23),
                            &v62);
    v6 = GraphicsDeviceNoRef;
    if ( GraphicsDeviceNoRef < 0 )
    {
      v8 = 110LL;
      goto LABEL_7;
    }
    v9 = floorf(COERCE_FLOAT(v62 ^ _xmm)) - 1.0;
    v10 = _mm_xor_ps((__m128)DWORD1(v62), (__m128)_xmm);
    v10.m128_f32[0] = floorf(v10.m128_f32[0]);
    v11 = v10;
    v11.m128_f32[0] = v10.m128_f32[0] - 1.0;
    v12 = (__m128)DWORD2(v62);
    v12.m128_f32[0] = o_ceilf_0(*((float *)&v62 + 2) + *((float *)&v64 + 1));
    v13 = v12;
    v13.m128_f32[0] = (float)(v12.m128_f32[0] + 1.0) - v9;
    v14 = (__m128)HIDWORD(v62);
    v14.m128_f32[0] = o_ceilf_0(*((float *)&v62 + 3) + *((float *)&v64 + 2));
    v15 = v14;
    v61[0] = 0LL;
    GraphicsDeviceNoRef = CDesktopManager::GetGraphicsDeviceNoRef(
                            (struct CGraphicsDeviceManager::CGraphicsDeviceGuard *)&v58,
                            v61);
    v6 = GraphicsDeviceNoRef;
    if ( GraphicsDeviceNoRef < 0 )
    {
      v8 = 126LL;
      goto LABEL_7;
    }
    *(_QWORD *)v49 = 0LL;
    v16 = v61[0];
    v17 = *(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64))(*(_QWORD *)v61[0] + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v49);
    v48 = v49;
    v15.m128_f32[0] = (float)(v14.m128_f32[0] + 1.0) - v11.m128_f32[0];
    v18 = v17(v16, _mm_unpacklo_ps(v13, v15).m128_u64[0], 87LL);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 134LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v18,
        (int)v48);
LABEL_13:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v49);
      goto LABEL_44;
    }
    v18 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
            v49,
            &v56);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 137LL;
      goto LABEL_12;
    }
    v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v56;
    v21 = (*v56)[3];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
    v48 = v57;
    v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), _QWORD, GUID *, __int64 *))v21)(
            v20,
            0LL,
            &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
            &v54);
    v6 = v18;
    if ( v18 < 0 )
    {
      v19 = 144LL;
      goto LABEL_12;
    }
    v52 = 0LL;
    v22 = v58;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v58 + 24) + 32LL))(*(_QWORD *)(v58 + 24));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 64) + 24LL))(*(_QWORD *)(v22 + 64));
    v59[0] = &v58;
    v59[1] = &v56;
    v60 = 1;
    *(_OWORD *)v61 = 0LL;
    (*(void (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionGraphicsDevice **))(*(_QWORD *)v54 + 376LL))(
      v54,
      v61);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 272LL))(v54, 2LL);
    *(float *)&v23 = (float)*((unsigned __int8 *)this + 410) / 255.0;
    v24 = (float)*((unsigned __int8 *)this + 409) / 255.0;
    *(float *)v61 = (float)*((unsigned __int8 *)this + 408) / 255.0;
    *((float *)v61 + 1) = v24;
    v61[1] = (struct Windows::UI::Composition::ICompositionGraphicsDevice *)(v23 | 0x3F80000000000000LL);
    v25 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionGraphicsDevice **, _QWORD, __int64 *))(*(_QWORD *)v54 + 64LL))(
            v54,
            v61,
            0LL,
            &v52);
    v6 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v25,
        (int)v57);
      v60 = 0;
      lambda_24da319b3cf33cd268668b77c8951af8_::operator()(v59);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
      goto LABEL_13;
    }
    v26 = (__m128)COERCE_UNSIGNED_INT((float)v57[0]);
    v26.m128_f32[0] = v26.m128_f32[0] - v9;
    v27 = (__m128)COERCE_UNSIGNED_INT((float)v57[1]);
    v27.m128_f32[0] = v27.m128_f32[0] - v11.m128_f32[0];
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v54 + 224LL))(
      v54,
      _mm_unpacklo_ps(v26, v27).m128_u64[0],
      *((_QWORD *)this + 23),
      v52);
    v60 = 0;
    lambda_24da319b3cf33cd268668b77c8951af8_::operator()(v59);
    v51 = 0LL;
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v56;
    v29 = **v56;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
    v30 = v29(v28, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, &v51);
    v6 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v30,
        0);
LABEL_23:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      goto LABEL_20;
    }
    v50 = 0LL;
    v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 192LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
    v32 = v31(v4, v51, &v50);
    v6 = v32;
    if ( v32 < 0 )
    {
      v33 = 183LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v32,
        0);
LABEL_27:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
      goto LABEL_23;
    }
    v34 = (__int64 (*)(void))(*v50)[9];
    if ( (*((_BYTE *)this + 36) & 1) != 0 )
    {
      v32 = v34();
      v6 = v32;
      if ( v32 < 0 )
      {
        v33 = 187LL;
        goto LABEL_26;
      }
    }
    else
    {
      v32 = v34();
      v6 = v32;
      if ( v32 < 0 )
      {
        v33 = 191LL;
        goto LABEL_26;
      }
    }
    v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD), _QWORD))(*v50)[11])(v50, 0LL);
    v6 = v32;
    if ( v32 < 0 )
    {
      v33 = 193LL;
      goto LABEL_26;
    }
    v53 = 0LL;
    v35 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v50)[15])(v50);
    v6 = v35;
    if ( v35 >= 0 )
    {
      v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v50;
      v38 = **v50;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
      v35 = v38(v37, &GUID_d27174d5_64f5_4692_9dc7_71b61d7e5880, &v53);
      v6 = v35;
      if ( v35 >= 0 )
      {
        v39 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v53;
        v40 = (*v53)[11];
        v11.m128_f32[0] = v11.m128_f32[0] + (float)((float)((float)*((int *)this + 19) - *(float *)&v64) * 0.5);
        v41 = v11;
        v41.m128_f32[0] = floorf(v11.m128_f32[0]);
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), unsigned __int64))v40)(
          v39,
          _mm_unpacklo_ps((__m128)0LL, v41).m128_u64[0]);
        v55 = 0LL;
        v42 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v53;
        v43 = **v53;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
        v44 = v43(v42, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v55);
        v6 = v44;
        if ( v44 >= 0 )
        {
          v45 = v55;
          v55 = 0LL;
          *a2 = v45;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v49);
          v6 = 0;
          goto LABEL_44;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCB,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
          (const char *)(unsigned int)v44,
          0);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
        goto LABEL_38;
      }
      v36 = 198LL;
    }
    else
    {
      v36 = 197LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v35,
      0);
LABEL_38:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
    (const char *)(unsigned int)TextLayout,
    v47);
  return v6;
}
