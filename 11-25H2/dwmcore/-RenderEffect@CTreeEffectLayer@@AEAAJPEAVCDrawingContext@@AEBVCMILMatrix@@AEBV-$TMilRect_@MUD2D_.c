/*
 * XREFs of ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801174F0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180029684 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x180117408 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18011747C (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1801186B8 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderEffect(
        CTreeEffectLayer *this,
        const void **a2,
        __m128 *a3,
        __m128 *a4,
        float *a5)
{
  char v8; // r14
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  char v16; // dl
  int v17; // eax
  CDropShadow *v19; // rcx
  float v20; // xmm2_4
  float v21; // xmm6_4
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rcx
  FLOAT v25; // xmm4_4
  double v26; // xmm2_8
  double v27; // xmm2_8
  double v28; // xmm2_8
  double v29; // xmm2_8
  int v30; // eax
  __int64 v31; // rax
  char *v32; // rdx
  _DWORD v33[6]; // [rsp+48h] [rbp-41h] BYREF
  struct D2D_RECT_F v34; // [rsp+60h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v8 = 0;
  v34 = 0LL;
  if ( *((_QWORD *)this + 32) )
  {
    v9 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, a4, 1, 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2BDu, 0LL);
    }
    else
    {
      CDrawingContext::GetClipBoundsWorld((__int64)a2, &v34.left);
      if ( v34.right > v34.left && v34.bottom > v34.top )
      {
        v11 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
        v10 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x2CAu, 0LL);
        }
        else
        {
          v8 = 1;
          v12 = CDrawingContext::PushEffectiveAlphaForNode((CDrawingContext *)a2, 0LL, 1.0, 1);
          v10 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x2CDu, 0LL);
          }
          else
          {
            ++*((_DWORD *)a2 + 163);
            if ( g_LockAndReadLayer )
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
              v32 = (char *)(a2 + 3);
              if ( !a2 )
                v32 = 0LL;
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 112LL))(v31, v32);
            }
            v13 = *((_QWORD *)this + 32);
            if ( *((_QWORD *)this + 31) )
            {
              v14 = *(_QWORD *)(v13 + 680);
              if ( v14 )
              {
                CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
                *(_QWORD *)(v14 + 8) = this;
                v15 = (*(__int64 (__fastcall **)(_QWORD, const void **, float *, _QWORD))(**((_QWORD **)this + 31)
                                                                                        + 200LL))(
                        *((_QWORD *)this + 31),
                        a2,
                        a5,
                        0LL);
                *(_QWORD *)(v14 + 8) = 0LL;
                v10 = v15;
                CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
                if ( v10 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2E9u, 0LL);
              }
            }
            else
            {
              v19 = *(CDropShadow **)(v13 + 672);
              if ( v19 && !CDropShadow::GetMaskForLayerVisualNoRef(v19) )
              {
                v20 = *((float *)this + 57);
                v21 = *((float *)this + 58);
                v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
                v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
                v24 = *((_QWORD *)this + 1);
                v33[1] = 0;
                v33[2] = 0;
                v34.top = v21 - _mm_cvtepi32_ps(v23).m128_f32[0];
                v25 = v34.top + *((float *)this + 60);
                v34.left = v20 - _mm_cvtepi32_ps(v22).m128_f32[0];
                v26 = *a5 - 0.0;
                v34.right = v34.left + *((float *)this + 59);
                v34.bottom = v25;
                v27 = v26 / (v34.right - v34.left);
                *(float *)v23.m128i_i32 = v27;
                v33[0] = v23.m128i_i32[0];
                *(double *)v23.m128i_i64 = 0.0 - v27 * v34.left;
                v28 = a5[1];
                *(float *)v23.m128i_i32 = *(double *)v23.m128i_i64;
                v33[4] = v23.m128i_i32[0];
                v29 = (v28 - 0.0) / (v25 - v34.top);
                *(float *)v23.m128i_i32 = v29;
                v33[3] = v23.m128i_i32[0];
                *(float *)&v33[5] = 0.0 - v29 * v34.top;
                v30 = CDrawingContext::DrawBitmapRealization(
                        (CDrawingContext *)a2,
                        (struct IBitmapRealization *)((v24 + 8) & -(__int64)(v24 != 0)),
                        &v34,
                        (const struct D2D1::Matrix3x2F *)v33,
                        0,
                        0,
                        (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
                v10 = v30;
                if ( v30 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x914,
                    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
                    (const char *)(unsigned int)v30);
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x306u, 0LL);
                }
                else
                {
                  v10 = 0;
                }
              }
            }
          }
        }
      }
      CBaseClipStack::Pop((CBaseClipStack *)(a2 + 389));
      --*((_QWORD *)a2[94] - 23);
      *((_BYTE *)a2 + 8065) = 1;
      if ( v16 )
      {
        --*((_DWORD *)a2 + 163);
        v17 = *((_DWORD *)a2 + 68);
        if ( v17 )
          *((_DWORD *)a2 + 68) = v17 - 1;
        CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)(a2 + 395));
      }
      if ( v8 )
        CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
    }
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x2BAu, 0LL);
  }
  return (unsigned int)v10;
}
