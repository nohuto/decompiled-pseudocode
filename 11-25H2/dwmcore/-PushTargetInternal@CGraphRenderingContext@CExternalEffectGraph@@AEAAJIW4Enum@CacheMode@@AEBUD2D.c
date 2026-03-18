/*
 * XREFs of ?PushTargetInternal@CGraphRenderingContext@CExternalEffectGraph@@AEAAJIW4Enum@CacheMode@@AEBUD2D_SIZE_F@@@Z @ 0x18007FC58
 * Callers:
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x18007E120 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     _lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_::operator() @ 0x1800803F0 (_lambda_16f9bd5df3b75e2e55d1e6198dc09b2c_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180080544 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DBF30 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CF0 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUPix.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  void (__fastcall *v18)(__int64 *, __int64 *); // rax
  int v19; // eax
  __int64 v20; // rdi
  int v21; // r14d
  _QWORD *v22; // rax
  __int128 v23; // xmm0
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 (__fastcall *v30)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *); // rax
  int v31; // eax
  CMILRefCountImpl *v32; // rcx
  unsigned int (__fastcall *v33)(CMILRefCountImpl *__hidden); // rax
  int v34; // eax
  int v35; // edi
  __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned int (__fastcall *v38)(CMILRefCountImpl *__hidden); // rax
  __int64 v39; // rcx
  __int64 v41; // rdi
  CResource *v42; // rcx
  void (*v43)(void); // rax
  __int64 v44; // rcx
  int v45; // r12d
  int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+20h] [rbp-59h]
  __int64 v49; // [rsp+30h] [rbp-49h] BYREF
  __int128 v50; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v51; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v52; // [rsp+50h] [rbp-29h]
  __int64 *v53; // [rsp+58h] [rbp-21h]
  __int64 v54; // [rsp+60h] [rbp-19h] BYREF
  __int64 v55; // [rsp+68h] [rbp-11h]
  char v56; // [rsp+70h] [rbp-9h]
  _BYTE v57[4]; // [rsp+78h] [rbp-1h] BYREF
  int v58; // [rsp+7Ch] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = (__m128i)*a4;
  v6 = *a1;
  v7 = a1;
  v8 = *((_DWORD *)a1 + 2);
  v9 = a1[2];
  v52 = a2;
  LODWORD(v51) = a3;
  v10 = 0LL;
  v53 = a1;
  if ( *(float *)v5.m128i_i32 <= 0.0 || (v11 = (__m128i)a4[1], *(float *)v11.m128i_i32 <= 0.0) )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x614u, 0LL);
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v21,
      v48);
    return (unsigned int)v21;
  }
  v12.m128_f32[0] = FLOAT_N0_5;
  *(_QWORD *)&v50 = 0LL;
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
    DWORD2(v50) = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32((__m128i)v4);
  }
  else
  {
    *(float *)&v49 = *(float *)v5.m128i_i32 + 6291456.25;
    DWORD2(v50) = (int)((_DWORD)v49 << 10) >> 11;
  }
  if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
    HIDWORD(v50) = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, v12));
  }
  else
  {
    *(float *)&v49 = *(float *)v11.m128i_i32 + 6291456.25;
    HIDWORD(v50) = (int)((_DWORD)v49 << 10) >> 11;
  }
  v13 = *(__int64 **)(v6 + 32);
  v14 = 0LL;
  v15 = v13 + 1;
  v16 = *(void (__fastcall **)(_QWORD *, _BYTE *))(v13[1] + 24);
  if ( (char *)v16 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v15, v57);
  else
    v16(v15, v57);
  v17 = *v13;
  v58 = 1;
  v18 = *(void (__fastcall **)(__int64 *, __int64 *))(v17 + 120);
  if ( (char *)v18 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    CDeviceTextureTarget::GetRenderTargetInfo(v13, &v54);
  else
    v18(v13, &v54);
  v49 = 0LL;
  LODWORD(v55) = v8;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v49);
  v19 = CExternalLayer::CreateBitmap(v9 + 1544, &v50, v57, &v54, (_DWORD)v51, &v49);
  v20 = v49;
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x25u, 0LL);
  }
  else
  {
    v22 = operator new(0x78uLL);
    v14 = v22;
    if ( v22 )
    {
      *v22 = &CExternalLayer::`vftable';
      v22[1] = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      v23 = v50;
      *((_DWORD *)v14 + 8) = 0;
      v14[5] = 0LL;
      *((_OWORD *)v14 + 1) = v23;
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
      v24 = *((_BYTE *)v14 + 113) & 0xE9;
      *((_BYTE *)v14 + 112) = -86;
      *((_BYTE *)v14 + 113) = v24 | 0x29;
      *v14 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v21 = -2147024882;
      v14 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 >= 0 )
  {
    v50 = 6uLL;
    if ( *(_DWORD *)(v6 + 272) == *(_DWORD *)(v6 + 276) )
    {
      v34 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(v6 + 264);
      v35 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v34,
          v6 + 264);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x1029u, 0LL);
        goto LABEL_33;
      }
    }
    v25 = *(_QWORD *)(v6 + 264);
    v26 = 2LL * *(unsigned int *)(v6 + 272);
    v51 = v14;
    *(_OWORD *)(v25 + 8 * v26) = v50;
    ++*(_DWORD *)(v6 + 272);
    v27 = *(_DWORD *)(v6 + 284);
    if ( v27 <= *(_DWORD *)(v6 + 272) )
      v27 = *(_DWORD *)(v6 + 272);
    *(_DWORD *)(v6 + 284) = v27;
    v28 = *(_DWORD *)(v6 + 384);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      v21 = -2147024362;
      v47 = 181;
      v45 = -2147024362;
    }
    else
    {
      if ( v29 <= *(_DWORD *)(v6 + 380) )
      {
        *(_QWORD *)(*(_QWORD *)(v6 + 360) + 8LL * v28) = v14;
        *(_DWORD *)(v6 + 384) = v29;
LABEL_25:
        v30 = *(__int64 (__fastcall **)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *))(*v14 + 24LL);
        if ( v30 == CD2DLayer::ApplyState )
        {
          v31 = CD2DLayer::ApplyState((CD2DLayer *)v14, (struct CDrawingContext *)v6);
        }
        else if ( v30 == COffScreenRenderingLayer::ApplyState )
        {
          v31 = COffScreenRenderingLayer::ApplyState((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)v6);
        }
        else
        {
          v31 = v30((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)v6);
        }
        v21 = v31;
        if ( v31 >= 0 )
        {
          ++dword_1804067B8;
          ++dword_180406868;
          v10 = v14[1];
          if ( v10 )
          {
            v32 = (CMILRefCountImpl *)v14[1];
            v33 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v10 + 8LL);
            if ( v33 == CMILRefCountImpl::AddReference )
              CMILRefCountImpl::AddReference(v32);
            else
              v33(v32);
          }
          goto LABEL_38;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1033u, 0LL);
        --*(_DWORD *)(v6 + 384);
        v35 = v21;
LABEL_64:
        v46 = *(_DWORD *)(v6 + 272);
        v7 = v53;
        if ( v46 )
        {
          *(_DWORD *)(v6 + 272) = v46 - 1;
          goto LABEL_34;
        }
LABEL_33:
        v21 = v35;
LABEL_34:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x618u, 0LL);
        goto LABEL_35;
      }
      v45 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 360, 8LL, 1LL, &v51);
      v21 = v45;
      if ( v45 >= 0 )
      {
        v7 = v53;
        goto LABEL_25;
      }
      v47 = 192;
    }
    v35 = v21;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v47, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x102Eu, 0LL);
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x610u, 0LL);
LABEL_35:
  if ( v14 )
  {
    CExternalLayer::~CExternalLayer((CExternalLayer *)v14);
    operator delete(v14, 0x78uLL);
  }
  if ( v21 < 0 )
    goto LABEL_43;
LABEL_38:
  v36 = v52;
  *((_DWORD *)v7 + 9) = v52;
  v56 = 0;
  v37 = (v10 + 8) & -(__int64)(v10 != 0);
  if ( v37 )
  {
    v38 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v37 + 8LL);
    if ( v38 == CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)((v10 + 8) & -(__int64)(v10 != 0)));
    }
    else
    {
      v39 = (v10 + 8) & -(__int64)(v10 != 0);
      if ( (char *)v38 == (char *)CGDISectionBitmapRealization::AddRef )
        CGDISectionBitmapRealization::AddRef(v39);
      else
        v38((CMILRefCountImpl *)v39);
    }
  }
  v54 = 0LL;
  v41 = v7[6] + 112 * v36;
  v42 = *(CResource **)v41;
  *(_QWORD *)v41 = 0LL;
  if ( v42 )
  {
    v43 = *(void (**)(void))(*(_QWORD *)v42 + 16LL);
    if ( (char *)v43 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v42);
    else
      v43();
  }
  v44 = *(_QWORD *)(v41 + 8);
  v55 = 0LL;
  *(_QWORD *)(v41 + 8) = v37;
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  *(_BYTE *)(v41 + 16) = 0;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v54);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
