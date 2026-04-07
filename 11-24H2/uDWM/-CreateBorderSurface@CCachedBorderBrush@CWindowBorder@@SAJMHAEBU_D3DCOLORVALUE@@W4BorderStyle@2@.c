/*
 * XREFs of ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180035CDC
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180036D38 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180035B08 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x180035BF0 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800389E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800700FC (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800745C8 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     _lambda_a83844c4964abc45ccfb90334120c2a5_::operator() @ 0x180075AF4 (_lambda_a83844c4964abc45ccfb90334120c2a5_--operator().c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x1800A1270 (-GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderSurface(
        float a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 *a6)
{
  int GraphicsDeviceNoRef; // eax
  unsigned int v10; // ebx
  float v11; // xmm10_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  __m128 v14; // xmm6
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v15; // rdi
  __int64 (__fastcall *v16)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64); // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, GUID *, __int64); // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  ID2D1DeviceContext *v24; // rbx
  int v25; // eax
  ID2D1DeviceContext *v26; // rbx
  int v27; // eax
  int v28; // eax
  ID2D1DeviceContext *v29; // rbx
  __int64 (__fastcall *v30)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, struct Windows::UI::Composition::ICompositionGraphicsDevice **); // rdi
  int v34; // eax
  ID2D1DeviceContext *v35; // rbx
  __int64 (__fastcall *v36)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  int v37; // eax
  float v38; // xmm9_4
  __int64 v39; // rdi
  int v40; // eax
  __m128 v41; // xmm2
  __m128 v42; // xmm2
  __int64 (__fastcall *v43)(__int64, float *, __int64 *); // rbx
  int v44; // eax
  __int64 (__fastcall *v45)(__int64, __int64 *); // rbx
  int v46; // eax
  __int64 v47; // rbx
  __int64 (__fastcall *v48)(__int64, enum D2D1_COMPOSITE_MODE *); // rdi
  int v49; // eax
  int v50; // eax
  int v51; // eax
  const struct D2D_POINT_2F *v52; // r8
  const struct D2D_RECT_F *v53; // r9
  const struct D2D_POINT_2F *v54; // r8
  const struct D2D_RECT_F *v55; // r9
  ID2D1DeviceContext *v56; // rbx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  int v61; // [rsp+28h] [rbp-E0h]
  int *v62; // [rsp+28h] [rbp-E0h]
  enum D2D1_INTERPOLATION_MODE v63; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v64; // [rsp+30h] [rbp-D8h]
  enum D2D1_COMPOSITE_MODE v65; // [rsp+30h] [rbp-D8h]
  ID2D1DeviceContext *v66; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1Effect *v67; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1Effect *v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  __int64 v73; // [rsp+80h] [rbp-88h] BYREF
  enum D2D1_COMPOSITE_MODE v74[2]; // [rsp+88h] [rbp-80h] BYREF
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v75; // [rsp+90h] [rbp-78h] BYREF
  float v76; // [rsp+98h] [rbp-70h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v78[3]; // [rsp+A8h] [rbp-60h] BYREF
  char v79; // [rsp+C0h] [rbp-48h]
  int v80[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v81; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-30h] BYREF
  int v83[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v85[16]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v86[40]; // [rsp+100h] [rbp-8h]
  __int64 v87; // [rsp+128h] [rbp+20h]
  __int64 v88; // [rsp+130h] [rbp+28h]
  __int128 v89; // [rsp+138h] [rbp+30h] BYREF
  float v90; // [rsp+148h] [rbp+40h]
  float v91; // [rsp+14Ch] [rbp+44h]
  __int128 v92; // [rsp+150h] [rbp+48h] BYREF
  float v93; // [rsp+160h] [rbp+58h]
  float v94; // [rsp+164h] [rbp+5Ch]
  float v95; // [rsp+168h] [rbp+60h] BYREF
  float v96; // [rsp+16Ch] [rbp+64h]
  __m128 v97; // [rsp+170h] [rbp+68h]
  float v98[2]; // [rsp+180h] [rbp+78h] BYREF
  __m128 v99; // [rsp+188h] [rbp+80h]
  _OWORD v100[4]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v101; // [rsp+1D8h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v75 = 0LL;
  GraphicsDeviceNoRef = CDesktopManager::GetGraphicsDeviceNoRef(
                          (struct CGraphicsDeviceManager::CGraphicsDeviceGuard *)&v84,
                          &v75);
  v10 = GraphicsDeviceNoRef;
  if ( GraphicsDeviceNoRef >= 0 )
  {
    LODWORD(v92) = 0;
    v76 = 0.0;
    v81 = 0;
    LODWORD(v89) = 0;
    CWindowBorder::GetShadowParameters(a5, a2, (float *)&v92, &v76, &v81, &v89);
    v11 = (float)a2 / 96.0;
    v12 = *(float *)&v92;
    v13 = fmaxf((float)((float)(a1 * v11) + 2.0) + (float)((float)(a1 * v11) + 2.0), *(float *)&v92);
    v14 = (__m128)(unsigned int)v92;
    v14.m128_f32[0] = (float)(*(float *)&v92 * 2.0) + v13;
    *(_QWORD *)v83 = 0LL;
    v15 = v75;
    v16 = *(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionGraphicsDevice *, unsigned __int64, __int64))(*(_QWORD *)v75 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v83);
    v17 = v16(v15, _mm_unpacklo_ps(v14, v14).m128_u64[0], 87LL);
    v10 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x176,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v17,
        (int)v83);
LABEL_55:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v83);
      return v10;
    }
    v69 = 0LL;
    v18 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
            v83,
            &v69);
    v10 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x179,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v18,
        (int)v83);
LABEL_7:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v69);
      goto LABEL_55;
    }
    v66 = 0LL;
    *(_QWORD *)v80 = 0LL;
    v19 = v69;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64))(*(_QWORD *)v69 + 24LL);
    v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v66);
    v62 = v80;
    v22 = v20(v19, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, v21);
    v10 = v22;
    if ( v22 >= 0 )
    {
      v23 = v84;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v84 + 24) + 32LL))(*(_QWORD *)(v84 + 24));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 64) + 24LL))(*(_QWORD *)(v23 + 64));
      v92 = _xmm;
      v93 = (float)v80[0];
      v94 = (float)v80[1];
      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v66 + 240LL))(v66, &v92);
      v78[0] = &v66;
      v78[1] = &v84;
      v78[2] = &v69;
      v79 = 1;
      v68 = 0LL;
      v67 = 0LL;
      v95 = v12;
      v96 = v12;
      v97.m128_f32[0] = v13 + v12;
      v97.m128_f32[1] = v13 + v12;
      v97.m128_f32[2] = a1 * v11;
      v97.m128_f32[3] = a1 * v11;
      if ( a5 )
      {
        v70 = 0LL;
        v24 = v66;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
        *(_QWORD *)&v92 = _mm_unpacklo_ps(v14, v14).m128_u64[0];
        v25 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v24 + 96LL))(
                v24,
                &v92,
                0LL,
                0LL);
        v10 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x199,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v25,
            0);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          goto LABEL_10;
        }
        v77 = 0LL;
        v26 = v66;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
        v92 = _xmm;
        v27 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int128 *, _QWORD, __int64 *))(*(_QWORD *)v26 + 64LL))(
                v26,
                &v92,
                0LL,
                &v77);
        v10 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19E,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v27,
            0);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 384LL))(v70);
        v92 = 0LL;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v70 + 376LL))(v70, &v92);
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v70 + 152LL))(v70, &v95, v77);
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v70 + 392LL))(v70, 0LL, 0LL);
        v10 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A3,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v28,
            0);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          goto LABEL_10;
        }
        v29 = v66;
        v30 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v66 + 504LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
        v31 = v30(v29, &CLSID_D2D1Shadow, &v68);
        v10 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A6,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v31,
            0);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          goto LABEL_10;
        }
        v75 = 0LL;
        v32 = v70;
        v33 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionGraphicsDevice **))(*(_QWORD *)v70 + 456LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v75);
        v34 = v33(v32, &v75);
        v10 = v34;
        if ( v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A9,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v34,
            0);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v75);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct Windows::UI::Composition::ICompositionGraphicsDevice *, __int64))(*(_QWORD *)v68 + 112LL))(
          v68,
          0LL,
          v75,
          1LL);
        *(float *)&v92 = v12 / 3.0;
        LODWORD(v62) = 4;
        (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v68 + 72LL))(
          v68,
          0LL,
          0LL,
          &v92,
          v62);
        *(_QWORD *)&v92 = 0LL;
        DWORD2(v92) = 0;
        HIDWORD(v92) = v81;
        LODWORD(v62) = 16;
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *))(*(_QWORD *)v68 + 72LL))(
          v68,
          1LL,
          0LL,
          &v92);
        if ( a5 != 1 )
        {
          v35 = v66;
          v36 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v66 + 504LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          v37 = v36(v35, &CLSID_D2D1Shadow, &v67);
          v10 = v37;
          if ( v37 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B1,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
              (const char *)(unsigned int)v37,
              16);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v75);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
            v79 = 0;
            lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
            goto LABEL_10;
          }
          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct Windows::UI::Composition::ICompositionGraphicsDevice *, __int64))(*(_QWORD *)v67 + 112LL))(
            v67,
            0LL,
            v75,
            1LL);
          v76 = v76 / 3.0;
          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v67 + 72LL))(
            v67,
            0LL,
            0LL,
            &v76,
            4);
          *(_QWORD *)&v92 = 0LL;
          DWORD2(v92) = 0;
          HIDWORD(v92) = v89;
          LODWORD(v62) = 16;
          (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *))(*(_QWORD *)v67 + 72LL))(
            v67,
            1LL,
            0LL,
            &v92);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v75);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v77);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
      }
      v89 = 0LL;
      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v66 + 376LL))(v66, &v89);
      v38 = v12 * 0.5;
      v96 = v96 - v38;
      v97.m128_f32[1] = v97.m128_f32[1] - v38;
      v71 = 0LL;
      v39 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 16LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
      *(_QWORD *)&v89 = 0LL;
      DWORD2(v89) = v14.m128_i32[0];
      HIDWORD(v89) = v14.m128_i32[0];
      v40 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v39 + 40LL))(v39, &v89, &v71);
      v10 = v40;
      if ( v40 >= 0 )
      {
        v41 = (__m128)COERCE_UNSIGNED_INT((float)((a2 + 48) / 96));
        if ( !a4 )
          v41.m128_f32[0] = v41.m128_f32[0] + 1.0;
        v42 = _mm_shuffle_ps(v41, v41, 0);
        v98[0] = v42.m128_f32[0] + v95;
        v98[1] = v42.m128_f32[0] + v96;
        v99 = _mm_sub_ps(v97, v42);
        v73 = 0LL;
        v43 = *(__int64 (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v39 + 48LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
        v44 = v43(v39, v98, &v73);
        v10 = v44;
        if ( v44 >= 0 )
        {
          v72 = 0LL;
          v45 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 80LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
          v46 = v45(v39, &v72);
          v10 = v46;
          if ( v46 >= 0 )
          {
            *(_QWORD *)v74 = 0LL;
            v47 = v72;
            v48 = *(__int64 (__fastcall **)(__int64, enum D2D1_COMPOSITE_MODE *))(*(_QWORD *)v72 + 136LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
            v49 = v48(v47, v74);
            v10 = v49;
            if ( v49 >= 0 )
            {
              v64 = v74[0];
              v63 = FLOAT_0_25;
              v50 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v71 + 88LL))(v71, v73, 3LL);
              v10 = v50;
              if ( v50 >= 0 )
              {
                v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v74 + 72LL))(*(_QWORD *)v74);
                v10 = v51;
                if ( v51 >= 0 )
                {
                  *(_QWORD *)&v89 = 0LL;
                  DWORD2(v89) = v14.m128_i32[0];
                  HIDWORD(v89) = v14.m128_i32[0];
                  memset_0(v85, 0, 0x48uLL);
                  *(_QWORD *)v86 = v72;
                  *(_DWORD *)&v86[8] = 0;
                  *(_OWORD *)&v86[12] = _xmm;
                  *(_QWORD *)&v86[28] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
                  *(_DWORD *)&v86[36] = 1065353216;
                  v87 = 0LL;
                  LODWORD(v88) = 0;
                  v100[0] = v89;
                  v100[1] = *(_OWORD *)v86;
                  v100[2] = *(_OWORD *)&v86[16];
                  v100[3] = *(unsigned __int64 *)&v86[32];
                  v101 = v88;
                  (*(void (__fastcall **)(ID2D1DeviceContext *, _OWORD *, _QWORD))(*(_QWORD *)v66 + 320LL))(
                    v66,
                    v100,
                    0LL);
                  if ( v68 )
                  {
                    ID2D1DeviceContext::DrawImage(v66, v68, v52, v53, FLOAT_0_25, v64);
                    if ( v67 )
                    {
                      v89 = _xmm;
                      v90 = (float)v80[0];
                      v91 = (float)((float)v80[1] - v38) + (float)(v11 + v11);
                      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v66 + 240LL))(v66, &v89);
                      ID2D1DeviceContext::DrawImage(v66, v67, v54, v55, v63, v65);
                      v89 = _xmm;
                      v90 = (float)v80[0];
                      v91 = (float)v80[1];
                      (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)v66 + 240LL))(v66, &v89);
                    }
                  }
                  if ( *(float *)(a3 + 12) > 0.0 )
                  {
                    *(_QWORD *)&v89 = 0LL;
                    v56 = v66;
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v89);
                    v57 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, _QWORD, __int128 *))(*(_QWORD *)v56 + 64LL))(
                            v56,
                            a3,
                            0LL,
                            &v89);
                    v10 = v57;
                    if ( v57 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x205,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                        (const char *)(unsigned int)v57,
                        v63);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v89);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                      v79 = 0;
                      lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
                      goto LABEL_10;
                    }
                    (*(void (__fastcall **)(ID2D1DeviceContext *, float *, _QWORD))(*(_QWORD *)v66 + 152LL))(
                      v66,
                      &v95,
                      v89);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v89);
                  }
                  (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v66 + 328LL))(v66);
                  v79 = 0;
                  lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
                  v82 = 0LL;
                  v58 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v83,
                          &v82);
                  v10 = v58;
                  if ( v58 >= 0 )
                  {
                    v59 = v82;
                    v82 = 0LL;
                    *a6 = v59;
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v82);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                    if ( v79 )
                    {
                      v79 = 0;
                      lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
                    }
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v69);
                    v10 = 0;
                    goto LABEL_55;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x20F,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                    (const char *)(unsigned int)v58,
                    v63);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v82);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                  if ( v79 )
                  {
                    v79 = 0;
                    lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
                  }
                  goto LABEL_10;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1E8,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                  (const char *)(unsigned int)v51,
                  FLOAT_0_25);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                v79 = 0;
                lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1E7,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                  (const char *)(unsigned int)v50,
                  FLOAT_0_25);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                v79 = 0;
                lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1E3,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                (const char *)(unsigned int)v49,
                (int)v62);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v74);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
              v79 = 0;
              lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E0,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
              (const char *)(unsigned int)v46,
              (int)v62);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v72);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
            v79 = 0;
            lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DD,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v44,
            (int)v62);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v73);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
          v79 = 0;
          lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C7,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v40,
          (int)v62);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v71);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v67);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
        v79 = 0;
        lambda_a83844c4964abc45ccfb90334120c2a5_::operator()(v78);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v22,
        (int)v80);
    }
LABEL_10:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v66);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15E,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)GraphicsDeviceNoRef,
    v61);
  return v10;
}
