/*
 * XREFs of ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9D7C (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802DB850 (-ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1800FDFC0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x1801DA3FC (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     gsl::final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___::_final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___ @ 0x1801DA4D8 (gsl--final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___--_final_action__lambda_0a12ce3aab9.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1801DA4F8 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___ @ 0x18020F348 (gsl--final_action__lambda_7c326dd339b6b31d734cab6f1173b304___--_final_action__lambda_7c326dd339b.c)
 *     gsl::final_action__lambda_22acde5ac7c406f4f69d298297452453___::_final_action__lambda_22acde5ac7c406f4f69d298297452453___ @ 0x18021F090 (gsl--final_action__lambda_22acde5ac7c406f4f69d298297452453___--_final_action__lambda_22acde5ac7c.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180258AAC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x180258C24 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180265814 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GenerateMaskIntermediate(
        struct CResourceTag *a1,
        __int64 a2,
        struct CShape **a3,
        unsigned int *a4,
        __int64 a5,
        struct CShape *a6,
        char a7,
        unsigned int *a8,
        _QWORD *a9)
{
  double v9; // xmm2_8
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  struct CShape *v22; // rbx
  int v23; // eax
  const struct tagRECT *v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __m128 v29; // [rsp+38h] [rbp-A1h] BYREF
  struct CShape *v30; // [rsp+48h] [rbp-91h] BYREF
  __int64 v31; // [rsp+50h] [rbp-89h] BYREF
  int v32; // [rsp+58h] [rbp-81h]
  int v33; // [rsp+5Ch] [rbp-7Dh]
  __int64 v34; // [rsp+60h] [rbp-79h] BYREF
  char v35; // [rsp+68h] [rbp-71h]
  __int64 v36; // [rsp+70h] [rbp-69h] BYREF
  char v37; // [rsp+78h] [rbp-61h]
  __m128 v38[4]; // [rsp+88h] [rbp-51h] BYREF
  char v39; // [rsp+C8h] [rbp-11h]
  __int16 v40; // [rsp+C9h] [rbp-10h]
  char v41; // [rsp+CBh] [rbp-Eh]
  int v42[8]; // [rsp+D8h] [rbp-1h] BYREF
  CMILRefCountImpl *v43; // [rsp+128h] [rbp+4Fh] BYREF

  v30 = 0LL;
  if ( a3 )
  {
    v15 = 4;
    v30 = *a3;
  }
  else
  {
    v13 = a4[1];
    v14 = *a4;
    *(_QWORD *)&v9 = (unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v29.m128_u64[0] = 0LL;
    v29.m128_u64[1] = __PAIR64__(v13, v14);
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v29.m128_f32, 1.0, 1.0);
    PixelAlign(
      (int *)&v31,
      (unsigned int *)&v29,
      COERCE_DOUBLE((unsigned __int64)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue));
    v15 = 3;
    *(float *)&v30 = (float)(v32 - v31);
    *((float *)&v30 + 1) = (float)(v33 - HIDWORD(v31));
  }
  v43 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v43, a2, (__int64)a3);
  v16 = CDrawingContext::PushOffScreenRenderingLayer(a2, a1, (unsigned int *)&v30, -1, v15, &v43);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xFFu, 0LL);
  }
  else
  {
    v31 = a2;
    LOBYTE(v32) = 1;
    v29.m128_u64[0] = 0x3F8000003F800000LL;
    v29.m128_f32[2] = *(float *)&v30 - 1.0;
    v29.m128_f32[3] = *((float *)&v30 + 1) - 1.0;
    if ( (float)(*(float *)&v30 - 1.0) <= 1.0 || (float)(*((float *)&v30 + 1) - 1.0) <= 1.0 )
      v29 = 0uLL;
    v18 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v29, 1, 0);
    v17 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x107u, 0LL);
    }
    else
    {
      v36 = a2;
      v37 = 1;
      v19 = CDrawingContext::MarkCurrentState((CDrawingContext *)a2);
      v17 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x10Bu, 0LL);
      }
      else
      {
        v41 = 0;
        v38[0] = (__m128)_xmm;
        v38[1] = (__m128)_xmm;
        v40 = 41;
        v34 = a2;
        v35 = 1;
        v38[2] = (__m128)_xmm;
        v38[3] = (__m128)_xmm;
        v39 = -88;
        v20 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, v38, 0, 1);
        v17 = v20;
        if ( v20 >= 0 )
        {
          v22 = a6;
          v29.m128_u64[0] = 0LL;
          v29.m128_i8[8] = 0;
          if ( a6 )
          {
            if ( !a7 )
            {
              CShapePtr::~CShapePtr((CRectanglesShape **)&v29);
              v29.m128_i8[8] = 0;
LABEL_34:
              v29.m128_u64[0] = (unsigned __int64)v22;
              if ( v22 )
              {
                v28 = CDrawingContext::PushClipShapeForCurrentNode((CDrawingContext *)a2);
                v17 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x12Du, 0LL);
                  goto LABEL_31;
                }
              }
              goto LABEL_11;
            }
            v30 = 0LL;
            v25 = (const struct tagRECT *)PixelAlign(v42, a8, v9);
            v26 = CShape::ClipWithRect(v22, v25, &v30);
            v17 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x11Cu, 0LL);
              goto LABEL_31;
            }
            v22 = v30;
            CShapePtr::~CShapePtr((CRectanglesShape **)&v29);
          }
          else
          {
            if ( !a7 )
            {
LABEL_11:
              v23 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, _QWORD))(*(_QWORD *)a5 + 200LL))(
                      a5,
                      a2,
                      a4,
                      0LL);
              v17 = v23;
              if ( v23 >= 0 )
              {
                *a9 = v43;
                CShapePtr::~CShapePtr((CRectanglesShape **)&v29);
                CDrawingContext::RestoreStateToLastMark((CDrawingContext *)a2);
                CBaseClipStack::Pop((CBaseClipStack *)(a2 + 3112));
                --*(_QWORD *)(*(_QWORD *)(a2 + 752) - 184LL);
                *(_BYTE *)(a2 + 8065) = 1;
                CDrawingContext::PopLayer((CDrawingContext *)a2);
                return v17;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x130u, 0LL);
LABEL_31:
              CShapePtr::~CShapePtr((CRectanglesShape **)&v29);
              gsl::final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___::_final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___(&v34);
              gsl::final_action__lambda_22acde5ac7c406f4f69d298297452453___::_final_action__lambda_22acde5ac7c406f4f69d298297452453___(&v36);
              gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___(&v31);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v43);
              return v17;
            }
            v30 = 0LL;
            v27 = CShape::BuildFromRectFs(a8, v21, &v30);
            v17 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x127u, 0LL);
              goto LABEL_31;
            }
            CShapePtr::~CShapePtr((CRectanglesShape **)&v29);
            v22 = v30;
          }
          v29.m128_i8[8] = 1;
          goto LABEL_34;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x111u, 0LL);
        CDrawingContext::RestoreStateToLastMark((CDrawingContext *)a2);
      }
      CBaseClipStack::Pop((CBaseClipStack *)(a2 + 3112));
      --*(_QWORD *)(*(_QWORD *)(a2 + 752) - 184LL);
      *(_BYTE *)(a2 + 8065) = 1;
    }
    CDrawingContext::PopLayer((CDrawingContext *)a2);
  }
  if ( v43 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v43 + 16LL))(v43);
  return v17;
}
