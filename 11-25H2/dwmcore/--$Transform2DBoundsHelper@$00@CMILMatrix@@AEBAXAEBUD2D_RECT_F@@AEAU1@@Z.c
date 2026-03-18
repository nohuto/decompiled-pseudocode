/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180027560 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180027EE4 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800280AC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18002BB30 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043AC0 (-AddTightDirtyRect@-$CTargetDirtyBase@$07@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800963E0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109860 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z @ 0x1801EE1C0 (-DrawBitmap@CRenderDataBounds@@UEAAJPEAVCResource@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE2F8 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180223F70 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180226440 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180289F00 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x180299E64 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029A220 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1802B2E50 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, const struct D2D_RECT_F *a2, float *a3)
{
  float *v3; // r10
  char v4; // r8
  char v5; // bl
  float *v6; // r9
  char v7; // r11
  unsigned int v8; // edx
  unsigned int i; // ecx
  float x; // xmm0_4
  unsigned __int64 v11; // rax
  float y; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  int v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  char v22; // r9
  char v23; // r9
  struct D2D_POINT_2F v24[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a3;
  v4 = *(_BYTE *)(a1 + 64);
  v5 = 0;
  if ( (char)(4 * v4) >> 6 == 1 )
  {
    v15 = _xmm;
    v16 = FLOAT_61440_0;
    v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v18 = FLOAT_0_000081380211;
    goto LABEL_16;
  }
  if ( (char)(4 * v4) >> 6 < 0 )
  {
LABEL_3:
    v6 = v3 + 2;
    v7 = 1;
    *v3 = *(float *)(a1 + 48) + a2->left;
    v3[1] = a2->top + *(float *)(a1 + 52);
    v3[2] = a2->right + *(float *)(a1 + 48);
    v3[3] = a2->bottom + *(float *)(a1 + 52);
    goto LABEL_4;
  }
  v15 = _xmm;
  v16 = FLOAT_61440_0;
  v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v18 = FLOAT_0_000081380211;
  if ( v4 >> 6 != 1 )
  {
    if ( v4 >> 6 < 0 )
    {
LABEL_23:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a1 + 64) = v4 | 0x30;
        goto LABEL_3;
      }
      goto LABEL_24;
    }
    v23 = *(_BYTE *)(a1 + 65);
    if ( (char)(4 * v23) >> 6 != 1 )
    {
      if ( (char)(4 * v23) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          *(_BYTE *)(a1 + 65) = v23 & 0xCF | 0x10;
          v4 = v4 & 0x3F | 0x40;
          goto LABEL_24;
        }
        *(_BYTE *)(a1 + 65) = v23 | 0x30;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & _xmm) < 0.000081380211 )
      {
        v4 |= 0xC0u;
        goto LABEL_23;
      }
    }
    v4 = v4 & 0x3F | 0x40;
  }
LABEL_24:
  v4 = v4 & 0xCF | 0x10;
  *(_BYTE *)(a1 + 64) = v4;
LABEL_16:
  if ( v4 >> 6 == 1 )
  {
LABEL_35:
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)a1, a2, v24);
    v8 = 8;
    v6 = v3 + 2;
    goto LABEL_6;
  }
  if ( v4 >> 6 < 0 )
    goto LABEL_18;
  v22 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v22) >> 6 == 1 )
    goto LABEL_34;
  if ( (char)(4 * v22) >> 6 >= 0 )
  {
    if ( v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v15) * v16)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v15) * v16))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v15))
                            - v17) & v15) )
    {
      *(_BYTE *)(a1 + 65) = v22 | 0x30;
      goto LABEL_33;
    }
    *(_BYTE *)(a1 + 65) = v22 & 0xCF | 0x10;
LABEL_34:
    *(_BYTE *)(a1 + 64) = v4 & 0x3F | 0x40;
    goto LABEL_35;
  }
LABEL_33:
  if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v15)
    || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v15) )
  {
    goto LABEL_34;
  }
  *(_BYTE *)(a1 + 64) = v4 | 0xC0;
LABEL_18:
  v6 = v3 + 2;
  v7 = 1;
  *v3 = (float)(a2->left * *(float *)a1) + *(float *)(a1 + 48);
  v3[1] = (float)(a2->top * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  v3[2] = (float)(a2->right * *(float *)a1) + *(float *)(a1 + 48);
  v3[3] = (float)(a2->bottom * *(float *)(a1 + 20)) + *(float *)(a1 + 52);
  if ( *(float *)a1 <= 0.0 )
    goto LABEL_5;
  v6 = v3 + 2;
  if ( *(float *)(a1 + 20) <= 0.0 )
    goto LABEL_5;
  v6 = v3 + 2;
LABEL_4:
  v5 = 1;
LABEL_5:
  v8 = 4;
LABEL_6:
  for ( i = 0; i < v8; ++i )
    ;
  if ( !v5 )
  {
    if ( v7 )
    {
      v19 = *v3;
      if ( *v3 > *v6 )
      {
        *v3 = *v6;
        *v6 = v19;
      }
      v20 = v3[1];
      v21 = v3[3];
      if ( v20 > v21 )
      {
        v3[1] = v21;
        v3[3] = v20;
      }
    }
    else
    {
      x = v24[0].x;
      v11 = 1LL;
      y = v24[0].y;
      v13 = v24[0].x;
      *v3 = v24[0].x;
      v14 = y;
      v3[1] = y;
      *v6 = v13;
      v3[3] = y;
      do
      {
        x = fminf(x, v24[v11].x);
        *v3 = x;
        y = fminf(y, v24[v11].y);
        v3[1] = y;
        v13 = fmaxf(v13, v24[v11].x);
        *v6 = v13;
        v14 = fmaxf(v14, v24[v11++].y);
        v3[3] = v14;
      }
      while ( v11 < 4 );
    }
  }
}
