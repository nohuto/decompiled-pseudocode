/*
 * XREFs of ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x1800484C4
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9D7C (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802DB964 (-ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180047F34 (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180049FD4 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x1801371EC (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct D2D_VECTOR_2F v23; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v24; // [rsp+38h] [rbp-C8h] BYREF
  struct CBlurRenderingGraph *v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+70h] [rbp-90h]
  char v29; // [rsp+8Ch] [rbp-74h]
  __int128 v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+B4h] [rbp-4Ch]
  char v32; // [rsp+C8h] [rbp-38h]
  _BYTE v33[8]; // [rsp+D0h] [rbp-30h] BYREF
  void (__fastcall ***v34)(_QWORD, GUID *, __int64); // [rsp+D8h] [rbp-28h]
  __int128 v35; // [rsp+124h] [rbp+24h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v27 = 0LL;
  v30 = 0LL;
  v28 = 0;
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v27);
  memset_0(&v27, 0, 0x70uLL);
  v12 = *a5;
  v29 = 1;
  v32 = 1;
  v31 = v12;
  detail::construct<EffectInput,EffectInput>(v33, &v27);
  v13 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v26, a3);
  CDrawListBitmap::operator=(&v27, v13);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v26);
  v24 = 0LL;
  v23.x = *(float *)&a6 / 3.0;
  v23.y = *(float *)&a6 / 3.0;
  CBlurRenderingGraph::DeterminePreScale(
    (const struct EffectInput *)&v27,
    (const struct EffectInput *)v33,
    D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED,
    &v23,
    &v24);
  v14 = *((_QWORD *)a2 + 5);
  v25 = 0LL;
  y_low = (__m128)LODWORD(v24.y);
  v16 = *(_DWORD *)(v14 + 616);
  v23.x = v23.x * v24.x;
  v23.y = v23.y * v24.y;
  v17 = CBlurRenderingGraph::Create(a1, v16, &v23, D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED, D2D1_BORDER_MODE_SOFT, &v25);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v17);
    if ( v25 )
      (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v25 + 8LL))(v25);
  }
  else
  {
    v19 = v25;
    *((_QWORD *)v25 + 198) = _mm_unpacklo_ps((__m128)LODWORD(v24.x), y_low).m128_u64[0];
    if ( a4 )
      *((_QWORD *)v19 + 195) = *a4;
    v20 = CExternalEffectGraph::Render(v19, a2, (const struct EffectInput *)&v27, (struct EffectInput *)v33);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v20);
      (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = v21;
    }
    else
    {
      (**v34)(v34, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, a7);
      if ( a8 )
        *a8 = v35;
      if ( v19 )
        (*(void (__fastcall **)(struct CBlurRenderingGraph *))(*(_QWORD *)v19 + 8LL))(v19);
      v18 = 0;
    }
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v33);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v27);
  return v18;
}
