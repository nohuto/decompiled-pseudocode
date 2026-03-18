/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800A7200
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800A6B00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1800A672C (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8004 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
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
  float left; // xmm7_4
  float right; // xmm8_4
  float top; // xmm5_4
  float bottom; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  FLOAT v21; // xmm2_4
  FLOAT v22; // xmm3_4
  FLOAT v23; // xmm4_4
  struct D2D_RECT_F v24; // [rsp+38h] [rbp-91h] BYREF
  struct D2D_RECT_F v25; // [rsp+48h] [rbp-81h] BYREF
  struct D2D_RECT_F v26; // [rsp+58h] [rbp-71h] BYREF
  struct D2D_RECT_F v27; // [rsp+68h] [rbp-61h] BYREF
  struct D2D_RECT_F v28; // [rsp+78h] [rbp-51h] BYREF
  int v29[4]; // [rsp+88h] [rbp-41h] BYREF

  v6 = *(CDropShadow **)(a1 + 680);
  v26 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  *(_OWORD *)v29 = 0LL;
  CDropShadow::GetRadius(v6);
  v27 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v27);
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MaskBounds, 0x23Du, 0LL);
    *a4 = *a3;
    *a5 = *a3;
  }
  else
  {
    v24 = v27;
    if ( v27.right > v27.left && v27.bottom > v27.top )
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v24);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v27, &v28.left);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v24, (float *)v29);
    v24 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      a1,
      a2,
      (__int64)&v24,
      (FLOAT *)v29,
      &v26,
      &v25);
    CDropShadow::GetRadius(*(CDropShadow **)(a1 + 680));
    left = v26.left;
    right = v26.right;
    top = v26.top;
    bottom = v26.bottom;
    v24 = v26;
    if ( v26.right > v26.left && v26.bottom > v26.top )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v24);
      top = v24.top;
      bottom = v24.bottom;
      right = v24.right;
      left = v24.left;
    }
    v15 = v28.left;
    v16 = v28.top;
    v17 = v28.right;
    v18 = v28.bottom;
    v26 = v28;
    if ( left > v28.left )
    {
      v26.left = left;
      v15 = left;
    }
    if ( top > v28.top )
    {
      v26.top = top;
      v16 = top;
    }
    if ( v28.right > right )
    {
      v17 = right;
      v26.right = right;
    }
    if ( v28.bottom > bottom )
    {
      v26.bottom = bottom;
      v18 = bottom;
    }
    if ( v17 <= v15 || v18 <= v16 )
    {
      v15 = 0.0;
      v18 = 0.0;
      v17 = 0.0;
      v26.bottom = 0.0;
      v16 = 0.0;
      v26.right = 0.0;
      v26.top = 0.0;
      v19 = 0.0;
      v26.left = 0.0;
      v20 = 0.0;
    }
    else
    {
      v19 = v17;
      v20 = v18;
    }
    v24.left = v15;
    *a4 = v26;
    v24.top = v16;
    v24.right = v17;
    v24.bottom = v18;
    if ( v19 > v15 && v20 > v16 )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v24);
      v18 = v24.bottom;
      v17 = v24.right;
      v15 = v24.left;
      v16 = v24.top;
    }
    *(_QWORD *)&v26.left = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 96LL);
    v21 = v16 + v26.top;
    v22 = v17 + v26.left;
    v23 = v18 + v26.top;
    a5->left = v15 + v26.left;
    a5->top = v21;
    a5->right = v22;
    a5->bottom = v23;
  }
}
