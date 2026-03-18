/*
 * XREFs of ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int128 v22; // xmm0
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  __int64 (__fastcall *v29)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *); // rax
  int v30; // eax
  CMILRefCountImpl *v31; // rcx
  __int64 (__fastcall *v32)(CMILRefCountImpl *); // rax
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // eax
  int v37; // r12d
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+38h] [rbp-48h] BYREF
  CMILRefCountImpl **v42; // [rsp+48h] [rbp-38h]
  char v43[8]; // [rsp+50h] [rbp-30h] BYREF
  int v44; // [rsp+58h] [rbp-28h]
  _BYTE v45[4]; // [rsp+68h] [rbp-18h] BYREF
  int v46; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v7 = (__m128i)*a3;
  v8 = a6;
  v42 = a6;
  if ( *(float *)v7.m128i_i32 <= 0.0 || (v12 = (__m128i)a3[1], *(float *)v12.m128i_i32 <= 0.0) )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x614u, 0LL);
    return v21;
  }
  *(_QWORD *)&v41 = 0LL;
  if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
    v6 = _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5));
    DWORD2(v41) = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32((__m128i)v6);
  }
  else
  {
    *(float *)&v40 = *(float *)v7.m128i_i32 + 6291456.25;
    DWORD2(v41) = (int)((_DWORD)v40 << 10) >> 11;
  }
  if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
    HIDWORD(v41) = (int)*(float *)v12.m128i_i32
                 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    *(float *)&v40 = *(float *)v12.m128i_i32 + 6291456.25;
    HIDWORD(v41) = (int)((_DWORD)v40 << 10) >> 11;
  }
  v13 = *(__int64 **)(a1 + 32);
  v14 = 0LL;
  v15 = v13 + 1;
  v16 = *(void (__fastcall **)(_QWORD *, _BYTE *))(v13[1] + 24);
  if ( (char *)v16 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v15, v45);
  else
    v16(v15, v45);
  v17 = *v13;
  v46 = 1;
  v18 = *(void (__fastcall **)(__int64 *, char *))(v17 + 120);
  if ( (char *)v18 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    CDeviceTextureTarget::GetRenderTargetInfo(v13, v43);
  else
    v18(v13, v43);
  v44 = a4;
  v40 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v40);
  v19 = CExternalLayer::CreateBitmap(a2, &v41, (struct PixelFormatInfo *)v45, (CDeviceTextureTarget *)v43, a5, &v40);
  v20 = v40;
  v21 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x25u, 0LL);
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
      v22 = v41;
      *((_DWORD *)v14 + 8) = 0;
      *((_QWORD *)v14 + 5) = 0LL;
      *((_OWORD *)v14 + 1) = v22;
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
      v23 = v14[113] & 0xE9;
      v14[112] = -86;
      v14[113] = v23 | 0x29;
      *(_QWORD *)v14 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v21 = -2147024882;
      v14 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Au, 0LL);
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( (v21 & 0x80000000) != 0 )
  {
    v34 = v21;
    v35 = 1552;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, v35, 0LL);
    if ( v14 )
    {
      CExternalLayer::~CExternalLayer((CExternalLayer *)v14);
      operator delete(v14, 0x78uLL);
    }
    return v21;
  }
  v41 = 6uLL;
  if ( *(_DWORD *)(a1 + 272) == *(_DWORD *)(a1 + 276) )
  {
    v33 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(a1 + 264);
    v34 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v33);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x1051u, 0LL);
      goto LABEL_33;
    }
  }
  v24 = *(_QWORD *)(a1 + 264);
  v25 = 2LL * *(unsigned int *)(a1 + 272);
  v40 = (__int64)v14;
  *(_OWORD *)(v24 + 8 * v25) = v41;
  ++*(_DWORD *)(a1 + 272);
  v26 = *(_DWORD *)(a1 + 284);
  if ( v26 <= *(_DWORD *)(a1 + 272) )
    v26 = *(_DWORD *)(a1 + 272);
  *(_DWORD *)(a1 + 284) = v26;
  v27 = *(_DWORD *)(a1 + 384);
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v21 = -2147024362;
    v39 = 181;
    v37 = -2147024362;
LABEL_57:
    v34 = v21;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v39, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x1056u, 0LL);
LABEL_50:
    v38 = *(_DWORD *)(a1 + 272);
    if ( v38 )
    {
      *(_DWORD *)(a1 + 272) = v38 - 1;
      goto LABEL_34;
    }
LABEL_33:
    v21 = v34;
LABEL_34:
    v35 = 1560;
    goto LABEL_35;
  }
  if ( v28 <= *(_DWORD *)(a1 + 380) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8LL * v27) = v14;
    *(_DWORD *)(a1 + 384) = v28;
    goto LABEL_25;
  }
  v37 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 360, 8, 1, &v40);
  v21 = v37;
  if ( v37 < 0 )
  {
    v39 = 192;
    goto LABEL_57;
  }
  v8 = v42;
LABEL_25:
  v29 = *(__int64 (__fastcall **)(COffScreenRenderingLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v14 + 24LL);
  if ( v29 == CD2DLayer::ApplyState )
  {
    v30 = CD2DLayer::ApplyState((CD2DLayer *)v14, (struct CDrawingContext *)a1);
  }
  else if ( v29 == COffScreenRenderingLayer::ApplyState )
  {
    v30 = COffScreenRenderingLayer::ApplyState((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)a1);
  }
  else
  {
    v30 = v29((COffScreenRenderingLayer *)v14, (struct CDrawingContext *)a1);
  }
  v21 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x105Bu, 0LL);
    --*(_DWORD *)(a1 + 384);
    v34 = v21;
    goto LABEL_50;
  }
  ++dword_1803FA758;
  ++dword_1803FA808;
  v31 = (CMILRefCountImpl *)*((_QWORD *)v14 + 1);
  *v8 = v31;
  if ( v31 )
  {
    v32 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v31 + 8LL);
    if ( v32 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v31);
    else
      v32(v31);
  }
  return v21;
}
