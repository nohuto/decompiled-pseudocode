/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DCA0C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180118F44 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18016F69C (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18019FAE8 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180080544 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushOffScreenRenderingLayer(
        __int64 a1,
        struct CResourceTag *a2,
        unsigned int *a3,
        int a4,
        int a5,
        CMILRefCountImpl **a6)
{
  __m128 v6; // xmm2
  __m128i v7; // xmm0
  CMILRefCountImpl **v8; // r12
  __m128i v12; // xmm3
  __int64 *v13; // rsi
  char *v14; // r14
  _QWORD *v15; // rcx
  void (__fastcall *v16)(_QWORD *, _BYTE *); // rax
  __int64 v17; // rax
  void (__fastcall *v18)(__int64 *, char *); // rax
  int v19; // eax
  __int64 v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // r8
  __int128 v23; // xmm0
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 (__fastcall *v30)(CD2DLayer *, struct CDrawingContext *, __int64); // rax
  int v31; // eax
  CMILRefCountImpl *v32; // rcx
  unsigned int (__fastcall *v33)(CMILRefCountImpl *__hidden); // rax
  int v34; // eax
  int v35; // ebx
  unsigned int v36; // eax
  int v38; // r12d
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // [rsp+30h] [rbp-50h] BYREF
  __int128 v42; // [rsp+38h] [rbp-48h] BYREF
  CMILRefCountImpl **v43; // [rsp+48h] [rbp-38h]
  char v44[8]; // [rsp+50h] [rbp-30h] BYREF
  int v45; // [rsp+58h] [rbp-28h]
  _BYTE v46[4]; // [rsp+68h] [rbp-18h] BYREF
  int v47; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v7 = (__m128i)*a3;
  v8 = a6;
  v43 = a6;
  if ( *(float *)v7.m128i_i32 <= 0.0 || (v12 = (__m128i)a3[1], *(float *)v12.m128i_i32 <= 0.0) )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x614u, 0LL);
    return v21;
  }
  *(_QWORD *)&v42 = 0LL;
  if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
    v6 = _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5));
    DWORD2(v42) = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
  }
  else
  {
    *(float *)&v41 = *(float *)v7.m128i_i32 + 6291456.25;
    DWORD2(v42) = (int)((_DWORD)v41 << 10) >> 11;
  }
  if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
    HIDWORD(v42) = (int)*(float *)v12.m128i_i32
                 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v41 = *(float *)v12.m128i_i32 + 6291456.25;
    HIDWORD(v42) = (int)((_DWORD)v41 << 10) >> 11;
  }
  v13 = *(__int64 **)(a1 + 32);
  v14 = 0LL;
  v15 = v13 + 1;
  v16 = *(void (__fastcall **)(_QWORD *, _BYTE *))(v13[1] + 24);
  if ( (char *)v16 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v15, v46);
  else
    v16(v15, v46);
  v17 = *v13;
  v47 = 1;
  v18 = *(void (__fastcall **)(__int64 *, char *))(v17 + 120);
  if ( (char *)v18 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    CDeviceTextureTarget::GetRenderTargetInfo(v13, v44);
  else
    v18(v13, v44);
  v45 = a4;
  v41 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v41);
  v19 = CExternalLayer::CreateBitmap(a2, &v42, (struct PixelFormatInfo *)v46, (CDeviceTextureTarget *)v44, a5, &v41);
  v20 = v41;
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x25u, 0LL);
  }
  else
  {
    v14 = (char *)operator new(0x78uLL);
    if ( v14 )
    {
      *(_QWORD *)v14 = &CExternalLayer::`vftable';
      *((_QWORD *)v14 + 1) = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      v23 = v42;
      *((_DWORD *)v14 + 8) = 0;
      *((_QWORD *)v14 + 5) = 0LL;
      *((_OWORD *)v14 + 1) = v23;
      *(_QWORD *)(v14 + 108) = 1065353216LL;
      *((_QWORD *)v14 + 6) = 1065353216LL;
      *((_QWORD *)v14 + 7) = 0LL;
      *((_DWORD *)v14 + 16) = 0;
      *(_QWORD *)(v14 + 68) = 1065353216LL;
      *(_QWORD *)(v14 + 76) = 0LL;
      *((_DWORD *)v14 + 21) = 0;
      *((_QWORD *)v14 + 11) = 1065353216LL;
      *((_QWORD *)v14 + 12) = 0LL;
      *((_DWORD *)v14 + 26) = 0;
      v24 = v14[113] & 0xE9;
      v14[112] = -86;
      v14[113] = v24 | 0x29;
      *(_QWORD *)v14 = &COffScreenRenderingLayer::`vftable';
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
  if ( (v21 & 0x80000000) != 0 )
  {
    v35 = v21;
    v36 = 1552;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v36, 0LL);
    if ( v14 )
    {
      CExternalLayer::~CExternalLayer((CExternalLayer *)v14);
      operator delete(v14, 0x78uLL);
    }
    return v21;
  }
  v42 = 6uLL;
  if ( *(_DWORD *)(a1 + 272) == *(_DWORD *)(a1 + 276) )
  {
    v34 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(a1 + 264);
    v35 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v34);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x1029u, 0LL);
      goto LABEL_33;
    }
  }
  v25 = *(_QWORD *)(a1 + 264);
  v26 = 2LL * *(unsigned int *)(a1 + 272);
  v41 = (__int64)v14;
  *(_OWORD *)(v25 + 8 * v26) = v42;
  ++*(_DWORD *)(a1 + 272);
  v27 = *(_DWORD *)(a1 + 284);
  if ( v27 <= *(_DWORD *)(a1 + 272) )
    v27 = *(_DWORD *)(a1 + 272);
  *(_DWORD *)(a1 + 284) = v27;
  v28 = *(_DWORD *)(a1 + 384);
  v29 = v28 + 1;
  if ( v28 + 1 < v28 )
  {
    v21 = -2147024362;
    v40 = 181;
    v38 = -2147024362;
LABEL_57:
    v35 = v21;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v40, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x102Eu, 0LL);
LABEL_50:
    v39 = *(_DWORD *)(a1 + 272);
    if ( v39 )
    {
      *(_DWORD *)(a1 + 272) = v39 - 1;
      goto LABEL_34;
    }
LABEL_33:
    v21 = v35;
LABEL_34:
    v36 = 1560;
    goto LABEL_35;
  }
  if ( v29 <= *(_DWORD *)(a1 + 380) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8LL * v28) = v14;
    *(_DWORD *)(a1 + 384) = v29;
    goto LABEL_25;
  }
  v38 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 360, 8, 1, &v41);
  v21 = v38;
  if ( v38 < 0 )
  {
    v40 = 192;
    goto LABEL_57;
  }
  v8 = v43;
LABEL_25:
  v30 = *(__int64 (__fastcall **)(CD2DLayer *, struct CDrawingContext *, __int64))(*(_QWORD *)v14 + 24LL);
  if ( v30 == CD2DLayer::ApplyState )
  {
    v31 = CD2DLayer::ApplyState((CD2DLayer *)v14, (struct CDrawingContext *)a1, v22);
  }
  else if ( (char *)v30 == (char *)COffScreenRenderingLayer::ApplyState )
  {
    v31 = COffScreenRenderingLayer::ApplyState((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)a1);
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(char *, __int64))v30)(v14, a1);
  }
  v21 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1033u, 0LL);
    --*(_DWORD *)(a1 + 384);
    v35 = v21;
    goto LABEL_50;
  }
  ++dword_1804067B8;
  ++dword_180406868;
  v32 = (CMILRefCountImpl *)*((_QWORD *)v14 + 1);
  *v8 = v32;
  if ( v32 )
  {
    v33 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v32 + 8LL);
    if ( v33 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v32);
    else
      v33(v32);
  }
  return v21;
}
