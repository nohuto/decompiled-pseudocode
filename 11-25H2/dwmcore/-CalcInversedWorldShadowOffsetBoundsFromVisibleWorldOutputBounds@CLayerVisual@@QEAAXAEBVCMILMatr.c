/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800280AC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180027560 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180027EE4 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002849C (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x180119F78 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_RECT_F *a5)
{
  CDropShadow *v6; // rcx
  int MaskBounds; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  float left; // xmm7_4
  float right; // xmm8_4
  float top; // xmm5_4
  float bottom; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  FLOAT v27; // xmm2_4
  FLOAT v28; // xmm3_4
  FLOAT v29; // xmm4_4
  struct D2D_RECT_F v30; // [rsp+38h] [rbp-91h] BYREF
  struct D2D_RECT_F v31; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_RECT_F v32; // [rsp+58h] [rbp-71h] BYREF
  struct D2D_RECT_F v33; // [rsp+68h] [rbp-61h] BYREF
  struct D2D_RECT_F v34; // [rsp+78h] [rbp-51h] BYREF
  int v35[4]; // [rsp+88h] [rbp-41h] BYREF

  v6 = *(CDropShadow **)(a1 + 672);
  v32 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  *(_OWORD *)v35 = 0LL;
  CDropShadow::GetRadius(v6);
  v33 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v33);
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskBounds, 0x23Du, 0LL);
    *a4 = *a3;
    *a5 = *a3;
  }
  else
  {
    v30 = v33;
    if ( v33.right > v33.left && v33.bottom > v33.top )
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v30, v11, v12, v13);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v33, &v34.left);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v30, (float *)v35);
    v30 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(a1, a2, &v30.left, (FLOAT *)v35, &v32, &v31);
    CDropShadow::GetRadius(*(CDropShadow **)(a1 + 672));
    left = v32.left;
    right = v32.right;
    top = v32.top;
    bottom = v32.bottom;
    v30 = v32;
    if ( v32.right > v32.left && v32.bottom > v32.top )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v30, v14, v15, v16);
      top = v30.top;
      bottom = v30.bottom;
      right = v30.right;
      left = v30.left;
    }
    v21 = v34.left;
    v22 = v34.top;
    v23 = v34.right;
    v24 = v34.bottom;
    v32 = v34;
    if ( left > v34.left )
    {
      v32.left = left;
      v21 = left;
    }
    if ( top > v34.top )
    {
      v32.top = top;
      v22 = top;
    }
    if ( v34.right > right )
    {
      v23 = right;
      v32.right = right;
    }
    if ( v34.bottom > bottom )
    {
      v32.bottom = bottom;
      v24 = bottom;
    }
    if ( v23 <= v21 || v24 <= v22 )
    {
      v21 = 0.0;
      v24 = 0.0;
      v23 = 0.0;
      v32.bottom = 0.0;
      v22 = 0.0;
      v32.right = 0.0;
      v32.top = 0.0;
      v25 = 0.0;
      v32.left = 0.0;
      v26 = 0.0;
    }
    else
    {
      v25 = v23;
      v26 = v24;
    }
    v30.left = v21;
    *a4 = v32;
    v30.top = v22;
    v30.right = v23;
    v30.bottom = v24;
    if ( v25 > v21 && v26 > v22 )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v30, v14, v15, v16);
      v24 = v30.bottom;
      v23 = v30.right;
      v21 = v30.left;
      v22 = v30.top;
    }
    *(_QWORD *)&v32.left = *(_QWORD *)(*(_QWORD *)(a1 + 672) + 96LL);
    v27 = v22 + v32.top;
    v28 = v23 + v32.left;
    v29 = v24 + v32.top;
    a5->left = v21 + v32.left;
    a5->top = v27;
    a5->right = v28;
    a5->bottom = v29;
  }
}
