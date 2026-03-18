/*
 * XREFs of ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x180072534
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011AD84 (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E4C04 (-ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCa.c)
 * Callees:
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180071ACC (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180073D20 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x18007E01C (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x18007E40C (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x1800DDA08 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GenerateBlurIntermediate(
        struct CResourceTag *a1,
        struct CDrawingContext *a2,
        struct IBitmapRealization *a3,
        _QWORD *a4,
        __int128 *a5,
        int a6,
        __int64 a7,
        _OWORD *a8)
{
  __int128 v12; // xmm0
  CDrawListBitmap *v13; // rax
  __int64 v14; // rax
  __m128 y_low; // xmm6
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ebx
  struct CBlurRenderingGraph *v19; // rbx
  int v20; // eax
  int v21; // edi
  int v23; // [rsp+20h] [rbp-E0h]
  struct D2D_VECTOR_2F v24; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v25; // [rsp+38h] [rbp-C8h] BYREF
  struct CBlurRenderingGraph *v26; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v27[24]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+70h] [rbp-90h]
  char v30; // [rsp+8Ch] [rbp-74h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+B4h] [rbp-4Ch]
  char v33; // [rsp+C8h] [rbp-38h]
  _BYTE v34[8]; // [rsp+D0h] [rbp-30h] BYREF
  void (__fastcall ***v35)(_QWORD, GUID *, __int64); // [rsp+D8h] [rbp-28h]
  __int128 v36; // [rsp+124h] [rbp+24h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v28 = 0LL;
  v31 = 0LL;
  v29 = 0;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v28);
  memset_0(&v28, 0, 0x70uLL);
  v12 = *a5;
  v30 = 1;
  v33 = 1;
  v32 = v12;
  detail::construct<EffectInput,EffectInput>(v34, &v28);
  v13 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v27, a3);
  CDrawListBitmap::operator=(&v28, v13);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v27);
  v25 = 0LL;
  v24.x = *(float *)&a6 / 3.0;
  v24.y = *(float *)&a6 / 3.0;
  CBlurRenderingGraph::DeterminePreScale(
    (const struct EffectInput *)&v28,
    (const struct EffectInput *)v34,
    D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED,
    &v24,
    &v25);
  v14 = *((_QWORD *)a2 + 5);
  v26 = 0LL;
  y_low = (__m128)LODWORD(v25.y);
  v16 = *(_DWORD *)(v14 + 616);
  v24.x = v24.x * v25.x;
  v24.y = v24.y * v25.y;
  v17 = CBlurRenderingGraph::Create(a1, v16, &v24, D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED, D2D1_BORDER_MODE_SOFT, &v26);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v17,
      v23);
    if ( v26 )
      (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v26 + 8LL))(v26);
  }
  else
  {
    v19 = v26;
    *((_QWORD *)v26 + 198) = _mm_unpacklo_ps((__m128)LODWORD(v25.x), y_low).m128_u64[0];
    if ( a4 )
      *((_QWORD *)v19 + 195) = *a4;
    v20 = CExternalEffectGraph::Render(v19, a2, (const struct EffectInput *)&v28, (struct EffectInput *)v34);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v20,
        v23);
      (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = v21;
    }
    else
    {
      (**v35)(v35, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, a7);
      if ( a8 )
        *a8 = v36;
      if ( v19 )
        (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v34);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v28);
  return v18;
}
