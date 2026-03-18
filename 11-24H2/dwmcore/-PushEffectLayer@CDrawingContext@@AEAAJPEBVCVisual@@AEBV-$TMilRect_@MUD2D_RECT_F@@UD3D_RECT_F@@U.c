/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800A6ACC (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8754 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800A886C (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800A8898 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800A8C98 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800F8D84 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800FA5F0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x1801B4898 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18020A500 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IDeviceTarget **this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        CEffectBrush *a6,
        char *a7)
{
  __m128 v7; // xmm2
  CExternalLayer *v10; // rsi
  CTreeEffectLayer *v11; // r15
  char v12; // r13
  __m128i *v13; // rax
  float *v14; // r11
  __m128 v15; // xmm3
  __m128i v16; // xmm6
  int v17; // ecx
  __m128i v18; // xmm4
  int v19; // ecx
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  int v22; // eax
  int v23; // ecx
  float v24; // xmm7_4
  __m128i v25; // xmm3
  unsigned __int64 v26; // xmm0_8
  float v27; // xmm8_4
  unsigned int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  unsigned int v31; // ebx
  int v33; // r9d
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+28h] [rbp-B1h]
  float v37; // [rsp+48h] [rbp-91h]
  float v38; // [rsp+48h] [rbp-91h]
  struct CLayer *v39; // [rsp+50h] [rbp-89h] BYREF
  struct CLayer *v40[2]; // [rsp+58h] [rbp-81h] BYREF
  void *v41; // [rsp+68h] [rbp-71h]
  char *v42; // [rsp+70h] [rbp-69h]
  __m128i v43; // [rsp+78h] [rbp-61h] BYREF
  float v44[2]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v45; // [rsp+90h] [rbp-49h]

  v45 = 0LL;
  v41 = a5;
  v10 = 0LL;
  v11 = 0LL;
  v42 = a7;
  v40[0] = 0LL;
  v39 = 0LL;
  v12 = 0;
  v13 = (__m128i *)CTreeEffectLayer::RoundOffLayerSize(&v43, a3);
  v15 = (__m128)*(unsigned int *)v14;
  v16 = *v13;
  v43 = *v13;
  if ( (_mm_cvtsi128_si32((__m128i)v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v15.m128_f32[0] - v15.m128_f32[0];
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v17 = (int)v15.m128_f32[0] - _mm_cvtsi128_si32((__m128i)v7);
  }
  else
  {
    v37 = v15.m128_f32[0] + 6291456.25;
    v17 = (int)(LODWORD(v37) << 10) >> 11;
  }
  v18 = (__m128i)*((unsigned int *)v14 + 1);
  v44[0] = (float)v17;
  if ( (_mm_cvtsi128_si32(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v18.m128i_i32 - *(float *)v18.m128i_i32;
    v19 = (int)*(float *)v18.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v38 = *(float *)v18.m128i_i32 + 6291456.25;
    v19 = (int)(LODWORD(v38) << 10) >> 11;
  }
  v20.m128_f32[0] = v14[2] - v15.m128_f32[0];
  v21 = (__m128)COERCE_UNSIGNED_INT((float)v19);
  v44[1] = (float)v19;
  v21.m128_f32[0] = (float)(int)v20.m128_f32[0];
  v22 = _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v21, v20));
  v21.m128_f32[0] = v14[3] - *(float *)v18.m128i_i32;
  v23 = (int)v21.m128_f32[0];
  v24 = (float)((int)v20.m128_f32[0] - v22);
  v15.m128_f32[0] = (float)(int)v21.m128_f32[0];
  *(float *)&v45 = v24;
  v25 = (__m128i)_mm_cmplt_ss(v15, v21);
  v26 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v27 = (float)(v23 - _mm_cvtsi128_si32(v25));
  *((float *)&v45 + 1) = v27;
  if ( (int)v26 <= 0 || SHIDWORD(v26) <= 0 )
  {
    v12 = 1;
    v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_17;
    v36 = 3851;
    goto LABEL_27;
  }
  if ( a6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)a6 + 64LL))(a6, 61LL) )
    {
      if ( CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v26, _mm_cvtsi128_si32(_mm_srli_si128(v16, 12))) )
      {
        v34 = CFilterEffectLayer::Create(
                this[4],
                (const struct D2D_POINTANDSIZE_L *)&v43,
                a6,
                a2,
                (const struct D2D_POINTANDSIZE_F *)v44,
                v40);
        v31 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xF20u, 0LL);
          v10 = v40[0];
          goto LABEL_18;
        }
        v10 = v40[0];
        v30 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v40[0], 1, 1);
        v31 = v30;
        if ( v30 >= 0 )
        {
          v10 = 0LL;
          goto LABEL_17;
        }
        v36 = 3878;
      }
      else
      {
        v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
        v31 = v30;
        if ( v30 >= 0 )
          goto LABEL_17;
        v36 = 3861;
      }
LABEL_27:
      v33 = v30;
      goto LABEL_25;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)a6 + 64LL))(a6, 57LL) )
    {
      v31 = -2147024809;
      v33 = -2147024809;
      v36 = 3928;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, v36, 0LL);
      goto LABEL_18;
    }
  }
  *(__m128i *)v40 = v16;
  if ( a6 && CEffectBrush::HasBlurEffectNode(a6) )
  {
    v28 = (int)v24;
    v29 = (int)v27;
  }
  else
  {
    v29 = HIDWORD(v40[1]);
    v28 = (unsigned int)v40[1];
  }
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v28, v29) )
  {
    v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_17;
    v36 = 3894;
    goto LABEL_27;
  }
  if ( (int)CTreeEffectLayer::Create(this[4], &v43, a6, a2, v44, v41, &v39) >= 0 )
  {
    v11 = v39;
    v30 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v39, 1, 1);
    v31 = v30;
    if ( v30 >= 0 )
    {
      v11 = 0LL;
LABEL_17:
      *v42 = v12;
      goto LABEL_18;
    }
    v36 = 3918;
    goto LABEL_27;
  }
  v35 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
  v31 = v35;
  if ( v35 >= 0 )
  {
    v11 = v39;
    v31 = 0;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0xF45u, 0LL);
  v11 = v39;
LABEL_18:
  if ( v10 )
  {
    *(_QWORD *)v10 = &CFilterEffectLayer::`vftable';
    CExternalLayer::~CExternalLayer(v10);
    operator delete(v10, 0x90uLL);
  }
  if ( v11 )
    CTreeEffectLayer::`vector deleting destructor'(v11, 1u);
  return v31;
}
