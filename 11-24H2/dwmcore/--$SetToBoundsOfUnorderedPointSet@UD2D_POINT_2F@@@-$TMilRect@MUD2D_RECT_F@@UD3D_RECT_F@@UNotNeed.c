/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800344E0 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180060A84 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18019CD00 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019FA20 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801AF150 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D3468 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
        float *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  float *v4; // rdx
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  unsigned __int64 v9; // rcx
  float *v10; // rdx

  result = *a2;
  if ( !*a2 )
  {
    ((void (__fastcall *)(float *, unsigned __int64 *, float *))`gsl::details::get_terminate_handler'::`2'::handler)(
      a1,
      a2,
      a1);
    __debugbreak();
  }
  v4 = (float *)a2[1];
  v5 = *v4;
  *a1 = *v4;
  v6 = v4[1];
  a1[1] = v6;
  v7 = *v4;
  a1[2] = *v4;
  v8 = v4[1];
  a1[3] = v8;
  v9 = 1LL;
  if ( result > 1 )
  {
    v10 = v4 + 2;
    do
    {
      v5 = fminf(v5, *v10);
      ++v9;
      *a1 = v5;
      v6 = fminf(v6, v10[1]);
      a1[1] = v6;
      v7 = fmaxf(v7, *v10);
      a1[2] = v7;
      v8 = fmaxf(v8, v10[1]);
      v10 += 2;
      a1[3] = v8;
    }
    while ( v9 < result );
  }
  return result;
}
