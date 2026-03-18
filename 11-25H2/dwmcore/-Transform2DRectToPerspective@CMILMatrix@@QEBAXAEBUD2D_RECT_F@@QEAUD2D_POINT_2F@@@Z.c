/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600
 * Callers:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180015B90 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800513D0 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180051CA0 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180052640 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180073D90 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800889D0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18008A030 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA80 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18008ED00 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180095260 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009F580 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800A27D0 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A3330 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x1801779DC (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C3900 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E06E8 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct D2D_RECT_F *a2,
        struct D2D_POINT_2F *const a3)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float top; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float bottom; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float right; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  char v15; // dl
  int v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm9_4
  float v27; // xmm7_4
  FLOAT v28; // xmm1_4
  FLOAT v29; // xmm1_4
  FLOAT v30; // xmm1_4
  FLOAT v31; // xmm1_4

  v4 = a2->left * *(float *)this;
  v5 = a2->left * *((float *)this + 1);
  top = a2->top;
  v7 = top * *((float *)this + 5);
  v8 = top * *((float *)this + 4);
  a3->x = (float)(v8 + v4) + *((float *)this + 12);
  a3->y = (float)(v7 + v5) + *((float *)this + 13);
  bottom = a2->bottom;
  v10 = bottom * *((float *)this + 5);
  v11 = bottom * *((float *)this + 4);
  a3[1].x = (float)(v11 + v4) + *((float *)this + 12);
  a3[1].y = (float)(v10 + v5) + *((float *)this + 13);
  right = a2->right;
  v13 = right * *((float *)this + 1);
  v14 = right * *(float *)this;
  a3[2].x = (float)(v14 + v11) + *((float *)this + 12);
  a3[2].y = (float)(v13 + v10) + *((float *)this + 13);
  a3[3].x = (float)(v14 + v8) + *((float *)this + 12);
  a3[3].y = (float)(v13 + v7) + *((float *)this + 13);
  v15 = *((_BYTE *)this + 65);
  if ( (char)(4 * v15) >> 6 == 1 )
  {
    v16 = _xmm;
    v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v18 = FLOAT_0_000081380211;
  }
  else
  {
    if ( (char)(4 * v15) >> 6 < 0 )
      return;
    v16 = _xmm;
    v17 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v18 = FLOAT_0_000081380211;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)this + 65) = v15 | 0x30;
      return;
    }
    *((_BYTE *)this + 65) = v15 & 0xCF | 0x10;
  }
  v19 = *((float *)this + 15);
  v20 = *((float *)this + 7) * a2->top;
  v21 = *((float *)this + 7) * a2->bottom;
  v22 = *((float *)this + 3) * a2->left;
  v23 = *((float *)this + 3) * a2->right;
  v24 = (float)(v21 + v22) + v19;
  v25 = (float)(v21 + v23) + v19;
  v26 = (float)(v20 + v22) + v19;
  v27 = (float)(v20 + v23) + v19;
  if ( v18 > v26 || v18 > v24 || v18 > v25 || v18 > v27 )
  {
    if ( v26 >= -0.000081380211 || v24 >= -0.000081380211 || v25 >= -0.000081380211 || v27 >= -0.000081380211 )
    {
      a3->x = -3.4028235e38;
      a3->y = -3.4028235e38;
      a3[1].x = -3.4028235e38;
      a3[1].y = 3.4028235e38;
      a3[2].x = 3.4028235e38;
      a3[2].y = 3.4028235e38;
      a3[3].x = 3.4028235e38;
      a3[3].y = -3.4028235e38;
    }
    else
    {
      *a3 = 0LL;
      a3[1] = 0LL;
      a3[2] = 0LL;
      a3[3] = 0LL;
    }
  }
  else
  {
    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - v17) & v16) )
    {
      v28 = a3->y / v26;
      a3->x = a3->x / v26;
      a3->y = v28;
    }
    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - v17) & v16) )
    {
      v29 = a3[1].y / v24;
      a3[1].x = a3[1].x / v24;
      a3[1].y = v29;
    }
    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - v17) & v16) )
    {
      v30 = a3[2].y / v25;
      a3[2].x = a3[2].x / v25;
      a3[2].y = v30;
    }
    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - v17) & v16) )
    {
      v31 = a3[3].y / v27;
      a3[3].x = a3[3].x / v27;
      a3[3].y = v31;
    }
  }
}
