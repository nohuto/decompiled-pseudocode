/*
 * XREFs of ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x180138E78
 * Callers:
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x1801372F0 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     _lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_::operator() @ 0x1801E519C (_lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_--operator().c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBE20 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18010B420 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802CDA80 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::PushTargetInternal(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  __m128 v4; // xmm2
  __m128i v5; // xmm0
  __int64 v6; // r13
  __int64 *v7; // r12
  int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rbx
  __m128i v11; // xmm3
  __m128 v12; // xmm5
  __int64 *v13; // r14
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  void (__fastcall *v16)(_QWORD *, _BYTE *); // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  CGlobalDrawingContext *v22; // rdi
  int v23; // r14d
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int128 v28; // xmm0
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // edx
  __int64 (__fastcall *v35)(CD2DLayer *, struct CDrawingContext *, __int64); // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  CMILRefCountImpl *v39; // rcx
  __int64 (__fastcall *v40)(CMILRefCountImpl *); // rax
  int v41; // eax
  int v42; // edi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 (__fastcall *v45)(CMILRefCountImpl *); // rax
  __int64 v46; // rcx
  __int64 v48; // rdi
  CCachedVisualImage *v49; // rcx
  void (*v50)(void); // rax
  __int64 v51; // rcx
  int v52; // r12d
  int v53; // eax
  unsigned int v54; // eax
  CGlobalDrawingContext *v55; // [rsp+30h] [rbp-49h] BYREF
  __int128 v56; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v57; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-29h]
  __int64 *v59; // [rsp+58h] [rbp-21h]
  __int64 v60; // [rsp+60h] [rbp-19h] BYREF
  __int64 v61; // [rsp+68h] [rbp-11h]
  char v62; // [rsp+70h] [rbp-9h]
  _BYTE v63[4]; // [rsp+78h] [rbp-1h] BYREF
  int v64; // [rsp+7Ch] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = (__m128i)*a4;
  v6 = *a1;
  v7 = a1;
  v8 = *((_DWORD *)a1 + 2);
  v9 = a1[2];
  v58 = a2;
  LODWORD(v57) = a3;
  v10 = 0LL;
  v59 = a1;
  if ( *(float *)v5.m128i_i32 <= 0.0 || (v11 = (__m128i)a4[1], *(float *)v11.m128i_i32 <= 0.0) )
  {
    v23 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x614u, 0LL);
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v23);
    return (unsigned int)v23;
  }
  v12.m128_f32[0] = FLOAT_N0_5;
  *(_QWORD *)&v56 = 0LL;
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
    DWORD2(v56) = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32((__m128i)v4);
  }
  else
  {
    *(float *)&v55 = *(float *)v5.m128i_i32 + 6291456.25;
    DWORD2(v56) = (int)((_DWORD)v55 << 10) >> 11;
  }
  if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
    HIDWORD(v56) = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, v12));
  }
  else
  {
    *(float *)&v55 = *(float *)v11.m128i_i32 + 6291456.25;
    HIDWORD(v56) = (int)((_DWORD)v55 << 10) >> 11;
  }
  v13 = *(__int64 **)(v6 + 32);
  v14 = 0LL;
  v15 = v13 + 1;
  v16 = *(void (__fastcall **)(_QWORD *, _BYTE *))(v13[1] + 24);
  if ( (char *)v16 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v15, v63);
  else
    v16(v15, v63);
  v17 = *v13;
  v64 = 1;
  v18 = *(__int64 (__fastcall **)(__int64, __int64))(v17 + 120);
  if ( v18 == CDeviceTextureTarget::GetRenderTargetInfo )
    CDeviceTextureTarget::GetRenderTargetInfo((__int64)v13, (__int64)&v60);
  else
    v18((__int64)v13, (__int64)&v60);
  v55 = 0LL;
  LODWORD(v61) = v8;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v55, v19, v20);
  v21 = CExternalLayer::CreateBitmap(
          (struct CResourceTag *)(v9 + 1544),
          &v56,
          (struct PixelFormatInfo *)v63,
          (CDeviceTextureTarget *)&v60,
          (int)v57,
          (__int64 *)&v55);
  v22 = v55;
  v23 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x25u, 0LL);
  }
  else
  {
    v24 = operator new(0x78uLL);
    v14 = v24;
    if ( v24 )
    {
      *v24 = &CExternalLayer::`vftable';
      v24[1] = v22;
      if ( v22 )
        (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v22 + 8LL))(v22);
      v28 = v56;
      *((_DWORD *)v14 + 8) = 0;
      v14[5] = 0LL;
      *((_OWORD *)v14 + 1) = v28;
      *(_QWORD *)((char *)v14 + 108) = 1065353216LL;
      v14[6] = 1065353216LL;
      v14[7] = 0LL;
      *((_DWORD *)v14 + 16) = 0;
      *(_QWORD *)((char *)v14 + 68) = 1065353216LL;
      *(_QWORD *)((char *)v14 + 76) = 0LL;
      *((_DWORD *)v14 + 21) = 0;
      v14[11] = 1065353216LL;
      v14[12] = 0LL;
      *((_DWORD *)v14 + 26) = 0;
      v29 = *((_BYTE *)v14 + 113) & 0xE9;
      *((_BYTE *)v14 + 112) = -86;
      *((_BYTE *)v14 + 113) = v29 | 0x29;
      *v14 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v23 = -2147024882;
      v14 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 >= 0 )
  {
    v56 = 6uLL;
    if ( *(_DWORD *)(v6 + 272) == *(_DWORD *)(v6 + 276) )
    {
      v41 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(
              v6 + 264,
              v25,
              v26,
              v27,
              (const void **)(v6 + 264));
      v42 = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v41);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x1051u, 0LL);
        goto LABEL_33;
      }
    }
    v30 = *(_QWORD *)(v6 + 264);
    v31 = 2LL * *(unsigned int *)(v6 + 272);
    v57 = v14;
    *(_OWORD *)(v30 + 8 * v31) = v56;
    ++*(_DWORD *)(v6 + 272);
    v32 = *(_DWORD *)(v6 + 284);
    if ( v32 <= *(_DWORD *)(v6 + 272) )
      v32 = *(_DWORD *)(v6 + 272);
    *(_DWORD *)(v6 + 284) = v32;
    v33 = *(_DWORD *)(v6 + 384);
    v34 = v33 + 1;
    if ( v33 + 1 < v33 )
    {
      v23 = -2147024362;
      v54 = 181;
      v52 = -2147024362;
    }
    else
    {
      if ( v34 <= *(_DWORD *)(v6 + 380) )
      {
        *(_QWORD *)(*(_QWORD *)(v6 + 360) + 8LL * v33) = v14;
        *(_DWORD *)(v6 + 384) = v34;
LABEL_25:
        v35 = *(__int64 (__fastcall **)(CD2DLayer *, struct CDrawingContext *, __int64))(*v14 + 24LL);
        if ( v35 == CD2DLayer::ApplyState )
        {
          v36 = CD2DLayer::ApplyState((CD2DLayer *)v14, (struct CDrawingContext *)v6, v26);
        }
        else if ( (char *)v35 == (char *)COffScreenRenderingLayer::ApplyState )
        {
          v36 = COffScreenRenderingLayer::ApplyState((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)v6);
        }
        else
        {
          v36 = ((__int64 (__fastcall *)(_QWORD *, __int64))v35)(v14, v6);
        }
        v23 = v36;
        if ( v36 >= 0 )
        {
          ++dword_1803FA758;
          ++dword_1803FA808;
          v10 = v14[1];
          if ( v10 )
          {
            v39 = (CMILRefCountImpl *)v14[1];
            v40 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v10 + 8LL);
            if ( v40 == CMILRefCountImpl::AddReference )
              CMILRefCountImpl::AddReference(v39);
            else
              v40(v39);
          }
          goto LABEL_38;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x105Bu, 0LL);
        --*(_DWORD *)(v6 + 384);
        v42 = v23;
LABEL_64:
        v53 = *(_DWORD *)(v6 + 272);
        v7 = v59;
        if ( v53 )
        {
          *(_DWORD *)(v6 + 272) = v53 - 1;
          goto LABEL_34;
        }
LABEL_33:
        v23 = v42;
LABEL_34:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x618u, 0LL);
        goto LABEL_35;
      }
      v52 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 360, 8, 1, &v57);
      v23 = v52;
      if ( v52 >= 0 )
      {
        v7 = v59;
        goto LABEL_25;
      }
      v54 = 192;
    }
    v42 = v23;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, v54, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x1056u, 0LL);
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x610u, 0LL);
LABEL_35:
  if ( v14 )
  {
    CExternalLayer::~CExternalLayer((CExternalLayer *)v14);
    operator delete(v14, 0x78uLL);
  }
  if ( v23 < 0 )
    goto LABEL_43;
LABEL_38:
  v43 = v58;
  *((_DWORD *)v7 + 9) = v58;
  v62 = 0;
  v44 = (v10 + 8) & -(__int64)(v10 != 0);
  if ( v44 )
  {
    v45 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v44 + 8LL);
    if ( v45 == CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)((v10 + 8) & -(__int64)(v10 != 0)));
    }
    else
    {
      v46 = (v10 + 8) & -(__int64)(v10 != 0);
      if ( (char *)v45 == (char *)CGDISectionBitmapRealization::AddRef )
        CGDISectionBitmapRealization::AddRef(v46, v37, v38);
      else
        v45((CMILRefCountImpl *)v46);
    }
  }
  v60 = 0LL;
  v48 = v7[6] + 112 * v43;
  v49 = *(CCachedVisualImage **)v48;
  *(_QWORD *)v48 = 0LL;
  if ( v49 )
  {
    v50 = *(void (**)(void))(*(_QWORD *)v49 + 16LL);
    if ( (char *)v50 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v49,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        v38);
    else
      v50();
  }
  v51 = *(_QWORD *)(v48 + 8);
  v61 = 0LL;
  *(_QWORD *)(v48 + 8) = v44;
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  *(_BYTE *)(v48 + 16) = 0;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v60);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
