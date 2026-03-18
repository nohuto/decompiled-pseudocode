/*
 * XREFs of ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009488 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180033910 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180066060 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18006EA40 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006F9C8 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18006FB54 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800702F0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180072340 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1800A75F0 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800A9A98 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9F60 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA3A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800ADB30 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B96F0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180123C00 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801525DC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180164598 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1801655C4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801659D0 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18016823C (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180168E10 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18019ECE0 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801FCD34 (-GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18020C964 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281244 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x1802822C4 (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 *     ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180295230 (-GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNod.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180298190 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180298560 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x1802A8D10 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     ?EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802B2BB8 (-EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 * Callees:
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

void __fastcall CMILMatrix::Multiply(CMILMatrix *this, const struct CMILMatrix *a2)
{
  CMILMatrix *v2; // r9
  char v3; // cl
  const struct CMILMatrix *v4; // r10
  char v5; // dl
  int v6; // xmm5_4
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  char v10; // cl
  char v11; // dl
  char v12; // cl
  char v13; // cl
  char v14; // cl
  float v15; // xmm3_4
  float v16; // xmm10_4
  float v17; // xmm4_4
  char v18; // cl
  char v19; // cl
  char v20; // cl
  float v21; // xmm10_4
  float v22; // xmm4_4
  float v23; // xmm11_4
  char v24; // cl
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm4_4
  char v30; // cl
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  float v36; // xmm3_4
  char v37; // cl
  int v38; // xmm0_4
  float v39; // xmm10_4
  float v40; // xmm11_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  int v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm3_4
  char v55; // cl
  char v56; // cl
  float v57; // xmm8_4
  float v58; // xmm9_4
  float v59; // xmm11_4
  float v60; // xmm7_4
  float v61; // xmm10_4
  float v62; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm5_4
  float v65; // xmm12_4
  float v66; // xmm14_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm9_4
  float v70; // xmm1_4
  float v71; // xmm15_4
  char v72; // al
  float v73; // xmm0_4
  float v74; // xmm11_4
  int v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm3_4
  float v78; // xmm0_4
  float v79; // xmm1_4
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm2_4
  float v85; // xmm0_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm3_4
  __m128 v91; // xmm3
  __m128 v92; // xmm4
  __m128 v93; // xmm9
  __m128 v94; // xmm10
  __m128 v95; // xmm7
  __m128 v96; // xmm8
  __m128 v97; // xmm6
  __m128 v98; // xmm1
  char v99; // dl
  char v100; // cl
  char v101; // cl
  int v102; // xmm0_4
  char v103; // al
  char v104; // al
  char v105; // al
  char v106; // al
  float v107; // [rsp+20h] [rbp-B8h]

  v2 = this;
  v3 = *((_BYTE *)this + 64);
  v4 = a2;
  if ( (char)(v3 << 6) >> 6 == 1 )
  {
    v6 = _xmm;
    v7 = FLOAT_61440_0;
    v8 = FLOAT_0_000081380211;
    v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    goto LABEL_12;
  }
  if ( (char)(v3 << 6) >> 6 < 0 )
  {
LABEL_51:
    *(_OWORD *)v2 = *(_OWORD *)v4;
    *((_OWORD *)v2 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)v2 + 2) = *((_OWORD *)v4 + 2);
    *((_OWORD *)v2 + 3) = *((_OWORD *)v4 + 3);
    *((_DWORD *)v2 + 16) = *((_DWORD *)v4 + 16);
    return;
  }
  v5 = *((_BYTE *)v2 + 65);
  v6 = _xmm;
  v7 = FLOAT_61440_0;
  v8 = FLOAT_0_000081380211;
  v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( (v5 & 8) == 0 && 16 * (v5 & 0xFC) != 0 )
    goto LABEL_10;
  if ( (v5 & 8) == 0 )
  {
    if ( (char)(4 * v5) >> 6 != 1 )
    {
      if ( (char)(4 * v5) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*((_DWORD *)v2 + 15) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          *((_BYTE *)v2 + 65) = v5 & 0xC3 | 0x14;
          goto LABEL_10;
        }
        v5 |= 0x30u;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_140;
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_140;
        v5 = *((_BYTE *)v2 + 65);
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 8) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 9) - 0.0) & _xmm) < 0.000081380211 )
      {
        v5 |= 0xCu;
        *((_BYTE *)v2 + 65) = v5;
        goto LABEL_5;
      }
    }
LABEL_140:
    *((_BYTE *)v2 + 65) = v5 & 0xF3 | 4;
    goto LABEL_10;
  }
LABEL_5:
  if ( (char)(16 * v3) >> 6 == 1 )
    goto LABEL_10;
  if ( (char)(16 * v3) >> 6 < 0 )
  {
LABEL_7:
    v10 = *((_BYTE *)v2 + 64);
    if ( (char)(4 * v10) >> 6 != 1 )
    {
      if ( (char)(4 * v10) >> 6 < 0 )
      {
LABEL_9:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 10) - 1.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 12) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 13) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 14) - 0.0) & _xmm) < 0.000081380211 )
        {
          *((_BYTE *)v2 + 64) |= 3u;
          goto LABEL_51;
        }
        goto LABEL_10;
      }
      if ( v10 >> 6 == 1 )
        goto LABEL_102;
      if ( v10 >> 6 < 0 )
      {
        v10 = *((_BYTE *)v2 + 64);
LABEL_101:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v2 - 1.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 5) - 1.0) & _xmm) < 0.000081380211 )
        {
          *((_BYTE *)v2 + 64) = v10 | 0x30;
          goto LABEL_9;
        }
        goto LABEL_102;
      }
      v99 = *((_BYTE *)v2 + 65);
      if ( (char)(4 * v99) >> 6 != 1 )
      {
        if ( (char)(4 * v99) >> 6 >= 0 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & _xmm) * 61440.0))
                                    + COERCE_FLOAT(*((_DWORD *)v2 + 15) & _xmm))
                            - 1.0) & _xmm) >= 0.000081380211 )
          {
            *((_BYTE *)v2 + 65) = v99 & 0xCF | 0x10;
            v10 = v10 & 0x3F | 0x40;
            goto LABEL_102;
          }
          *((_BYTE *)v2 + 65) = v99 | 0x30;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 1) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 4) - 0.0) & _xmm) < 0.000081380211 )
        {
          v10 |= 0xC0u;
          goto LABEL_101;
        }
      }
      v10 = v10 & 0x3F | 0x40;
LABEL_102:
      *((_BYTE *)v2 + 64) = v10 & 0xCF | 0x10;
      *((_BYTE *)v2 + 64) &= ~2u;
      *((_BYTE *)v2 + 64) |= 1u;
      goto LABEL_12;
    }
LABEL_10:
    *((_BYTE *)v2 + 64) &= ~2u;
    *((_BYTE *)v2 + 64) |= 1u;
    goto LABEL_12;
  }
  if ( (char)(4 * v5) >> 6 != 1 )
  {
    if ( (char)(4 * v5) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)v2 + 15) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
      {
        *((_BYTE *)v2 + 65) = v5 & 0xCF | 0x10;
        goto LABEL_152;
      }
      *((_BYTE *)v2 + 65) = v5 | 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 2) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 6) - 0.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)v2 + 64) = v3 | 0xC;
      goto LABEL_7;
    }
  }
LABEL_152:
  *((_BYTE *)v2 + 64) = v3 & 0xF3 | 4;
  *((_BYTE *)v2 + 64) &= ~2u;
  *((_BYTE *)v2 + 64) |= 1u;
LABEL_12:
  v11 = *((_BYTE *)v4 + 64);
  if ( (char)(v11 << 6) >> 6 == 1 )
    goto LABEL_22;
  if ( (char)(v11 << 6) >> 6 < 0 )
    return;
  v12 = *((_BYTE *)v4 + 65);
  if ( (v12 & 8) == 0 && 16 * (v12 & 0xFC) != 0 )
    goto LABEL_21;
  if ( (v12 & 8) == 0 )
  {
    if ( (char)(4 * v12) >> 6 != 1 )
    {
      if ( (char)(4 * v12) >> 6 >= 0 )
      {
        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                        + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                - v9) & v6) )
        {
          *((_BYTE *)v4 + 65) = v12 & 0xC3 | 0x14;
          goto LABEL_21;
        }
        v12 |= 0x30u;
        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v4 + 11) & v6) * v7) - 0.0) & v6) )
          goto LABEL_175;
      }
      else
      {
        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v4 + 11) & v6) * v7) - 0.0) & v6) )
          goto LABEL_175;
        v12 = *((_BYTE *)v4 + 65);
      }
      if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 0.0) & v6)
        && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 9) - 0.0) & v6) )
      {
        v12 |= 0xCu;
        *((_BYTE *)v4 + 65) = v12;
        goto LABEL_16;
      }
    }
LABEL_175:
    *((_BYTE *)v4 + 65) = v12 & 0xF3 | 4;
    goto LABEL_21;
  }
LABEL_16:
  if ( (char)(16 * v11) >> 6 != 1 )
  {
    if ( (char)(16 * v11) >> 6 >= 0 )
    {
      if ( (char)(4 * v12) >> 6 == 1 )
        goto LABEL_200;
      if ( (char)(4 * v12) >> 6 >= 0 )
      {
        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                        + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                - v9) & v6) )
        {
          *((_BYTE *)v4 + 65) = v12 & 0xCF | 0x10;
          *((_BYTE *)v4 + 64) = v11 & 0xF3 | 4;
          goto LABEL_21;
        }
        *((_BYTE *)v4 + 65) = v12 | 0x30;
      }
      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 2) - 0.0) & v6)
        || v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 6) - 0.0) & v6) )
      {
LABEL_200:
        *((_BYTE *)v4 + 64) = v11 & 0xF3 | 4;
        goto LABEL_21;
      }
      *((_BYTE *)v4 + 64) = v11 | 0xC;
    }
    if ( (char)(4 * *((_BYTE *)v4 + 64)) >> 6 != 1 )
    {
      if ( (char)(4 * *((_BYTE *)v4 + 64)) >> 6 < 0 )
      {
LABEL_20:
        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 10) - v9) & v6)
          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 12) - 0.0) & v6)
          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 13) - 0.0) & v6)
          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 14) - 0.0) & v6) )
        {
          *((_BYTE *)v4 + 64) |= 3u;
          return;
        }
        goto LABEL_21;
      }
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v4)
        && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v4 - v9) & v6)
        && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 5) - v9) & v6) )
      {
        *((_BYTE *)v4 + 64) |= 0x30u;
        goto LABEL_20;
      }
      *((_BYTE *)v4 + 64) &= ~0x20u;
      *((_BYTE *)v4 + 64) |= 0x10u;
    }
  }
LABEL_21:
  *((_BYTE *)v4 + 64) &= ~2u;
  *((_BYTE *)v4 + 64) |= 1u;
LABEL_22:
  v13 = *((_BYTE *)v4 + 65);
  if ( (char)(16 * (v13 & 0xFC)) > 0 )
    goto LABEL_35;
  if ( (v13 & 8) == 0 )
  {
    if ( (char)(4 * v13) >> 6 == 1 )
      goto LABEL_34;
    if ( (char)(4 * v13) >> 6 >= 0 )
    {
      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                              + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                      + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                              - v9) & v6) )
      {
        v13 = v13 & 0xCF | 0x10;
        *((_BYTE *)v4 + 65) = v13;
        goto LABEL_34;
      }
      v13 |= 0x30u;
      v102 = *((_DWORD *)v4 + 11) & v6;
      *((_BYTE *)v4 + 65) = v13;
      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v102 * v7) - 0.0) & v6) )
      {
LABEL_34:
        *((_BYTE *)v4 + 65) = v13 & 0xF3 | 4;
        goto LABEL_35;
      }
    }
    else
    {
      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v4 + 11) & v6) * v7) - 0.0) & v6) )
        goto LABEL_34;
      v13 = *((_BYTE *)v4 + 65);
    }
    if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 0.0) & v6)
      && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 9) - 0.0) & v6) )
    {
      v13 |= 0xCu;
      *((_BYTE *)v4 + 65) = v13;
      goto LABEL_24;
    }
    goto LABEL_34;
  }
LABEL_24:
  if ( (char)(16 * *((_BYTE *)v4 + 64)) >> 6 == 1 )
    goto LABEL_35;
  if ( (char)(16 * *((_BYTE *)v4 + 64)) >> 6 >= 0 )
  {
    if ( (char)(4 * v13) >> 6 != 1 )
    {
      if ( (char)(4 * v13) >> 6 >= 0 )
      {
        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                        + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                - v9) & v6) )
        {
          v103 = *((_BYTE *)v4 + 64) & 0xF3 | 4;
          *((_BYTE *)v4 + 65) = v13 & 0xCF | 0x10;
          *((_BYTE *)v4 + 64) = v103;
LABEL_35:
          v19 = *((_BYTE *)v2 + 65);
          if ( (v19 & 8) == 0 && 16 * (v19 & 0xFC) != 0 )
            goto LABEL_53;
          if ( (v19 & 8) != 0 )
          {
LABEL_37:
            if ( (char)(16 * *((_BYTE *)v2 + 64)) >> 6 == 1 )
              goto LABEL_53;
            if ( (char)(16 * *((_BYTE *)v2 + 64)) >> 6 >= 0 )
            {
              if ( (char)(4 * v19) >> 6 == 1 )
                goto LABEL_183;
              if ( (char)(4 * v19) >> 6 >= 0 )
              {
                if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                        + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                        - v9) & v6) )
                {
                  v104 = *((_BYTE *)v2 + 64) & 0xF3 | 4;
                  *((_BYTE *)v2 + 65) = v19 & 0xCF | 0x10;
                  *((_BYTE *)v2 + 64) = v104;
                  goto LABEL_53;
                }
                *((_BYTE *)v2 + 65) = v19 | 0x30;
              }
              if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 2) - 0.0) & v6)
                || v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 6) - 0.0) & v6) )
              {
LABEL_183:
                *((_BYTE *)v2 + 64) = *((_BYTE *)v2 + 64) & 0xF3 | 4;
                goto LABEL_53;
              }
              *((_BYTE *)v2 + 64) |= 0xCu;
            }
            v20 = *((_BYTE *)v2 + 64);
            if ( (char)(4 * v20) >> 6 == 1 )
              goto LABEL_53;
            if ( (char)(4 * v20) >> 6 < 0 )
            {
LABEL_41:
              if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 10) - v9) & v6) )
              {
                v21 = *((float *)v2 + 12);
                v22 = *((float *)v2 + 13);
                v23 = *((float *)v2 + 14);
                *(_OWORD *)v2 = *(_OWORD *)v4;
                *((_OWORD *)v2 + 1) = *((_OWORD *)v4 + 1);
                *((_OWORD *)v2 + 2) = *((_OWORD *)v4 + 2);
                *((_OWORD *)v2 + 3) = *((_OWORD *)v4 + 3);
                *((_DWORD *)v2 + 16) = *((_DWORD *)v4 + 16);
                if ( v8 > COERCE_FLOAT(LODWORD(v21) & v6)
                  && v8 > COERCE_FLOAT(LODWORD(v22) & v6)
                  && v8 > COERCE_FLOAT(LODWORD(v23) & v6) )
                {
                  return;
                }
                v24 = *((_BYTE *)v2 + 65);
                v25 = v21 * *((float *)v2 + 2);
                v26 = (float)((float)(v22 * *((float *)v2 + 5)) + (float)(v21 * *((float *)v2 + 1)))
                    + (float)(v23 * *((float *)v2 + 9));
                v27 = v23 * *((float *)v2 + 10);
                *((float *)v2 + 12) = (float)((float)((float)(v22 * *((float *)v2 + 4)) + (float)(v21 * *(float *)v2))
                                            + (float)(v23 * *((float *)v2 + 8)))
                                    + *((float *)v2 + 12);
                v28 = (float)(v22 * *((float *)v2 + 6)) + v25;
                *((float *)v2 + 13) = v26 + *((float *)v2 + 13);
                *((float *)v2 + 14) = (float)(v28 + v27) + *((float *)v2 + 14);
                if ( (char)(4 * v24) >> 6 != 1 )
                {
                  if ( (char)(4 * v24) >> 6 >= 0 )
                  {
                    if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                            + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                    + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                            - v9) & v6) )
                      goto LABEL_46;
                    v75 = *((_DWORD *)v2 + 11) & v6;
                    *((_BYTE *)v2 + 65) = v24 | 0x30;
                    if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v75 * v7) - 0.0) & v6) )
                      goto LABEL_46;
                  }
                  else if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
                  {
                    goto LABEL_46;
                  }
                  *((_BYTE *)v2 + 64) &= 0xFCu;
                  return;
                }
LABEL_46:
                v29 = v22 * *((float *)v2 + 7);
                *((_DWORD *)v2 + 16) = 0;
                *((float *)v2 + 15) = (float)((float)(v29 + (float)(v21 * *((float *)v2 + 3)))
                                            + (float)(v23 * *((float *)v2 + 11)))
                                    + *((float *)v2 + 15);
                return;
              }
LABEL_53:
              v30 = *((_BYTE *)v4 + 65);
              if ( (char)(16 * (v30 & 0xFC)) > 0 )
                goto LABEL_92;
              if ( (v30 & 8) != 0 )
                goto LABEL_55;
              if ( (char)(4 * v30) >> 6 != 1 )
              {
                if ( (char)(4 * v30) >> 6 >= 0 )
                {
                  if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                          + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                                  + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                          - v9) & v6) )
                  {
                    *((_BYTE *)v4 + 65) = v30 & 0xC3 | 0x14;
                    goto LABEL_92;
                  }
                  v30 |= 0x30u;
                  if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v4 + 11) & v6) * v7) - 0.0) & v6) )
                    goto LABEL_179;
                }
                else
                {
                  if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v4 + 11) & v6) * v7) - 0.0) & v6) )
                    goto LABEL_179;
                  v30 = *((_BYTE *)v4 + 65);
                }
                if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 8) - 0.0) & v6)
                  && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 9) - 0.0) & v6) )
                {
                  v30 |= 0xCu;
                  *((_BYTE *)v4 + 65) = v30;
LABEL_55:
                  if ( (char)(16 * *((_BYTE *)v4 + 64)) >> 6 == 1 )
                    goto LABEL_92;
                  if ( (char)(16 * *((_BYTE *)v4 + 64)) >> 6 < 0 )
                  {
LABEL_57:
                    if ( *((char *)v4 + 64) >> 6 == 1 )
                      goto LABEL_92;
                    if ( *((char *)v4 + 64) >> 6 < 0 )
                    {
LABEL_59:
                      v31 = *(float *)v4;
                      v32 = *((float *)v4 + 12);
                      v33 = *((float *)v4 + 13);
                      v34 = *((float *)v4 + 14);
                      v35 = *((float *)v4 + 10);
                      v36 = *((float *)v4 + 5);
                      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v4 - v9) & v6)
                        || v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - v9) & v6)
                        || v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - v9) & v6) )
                      {
                        *(float *)v2 = v31 * *(float *)v2;
                        *((float *)v2 + 4) = v31 * *((float *)v2 + 4);
                        *((float *)v2 + 8) = v31 * *((float *)v2 + 8);
                        *((float *)v2 + 12) = v31 * *((float *)v2 + 12);
                        *((float *)v2 + 1) = v36 * *((float *)v2 + 1);
                        *((float *)v2 + 5) = v36 * *((float *)v2 + 5);
                        *((float *)v2 + 9) = v36 * *((float *)v2 + 9);
                        *((float *)v2 + 13) = v36 * *((float *)v2 + 13);
                        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - v9) & v6) )
                        {
                          *((float *)v2 + 2) = v35 * *((float *)v2 + 2);
                          *((float *)v2 + 6) = v35 * *((float *)v2 + 6);
                          *((float *)v2 + 10) = v35 * *((float *)v2 + 10);
                          *((float *)v2 + 14) = v35 * *((float *)v2 + 14);
                        }
                        *((_BYTE *)v2 + 64) &= 0xCCu;
                      }
                      if ( v8 > COERCE_FLOAT(LODWORD(v32) & v6)
                        && v8 > COERCE_FLOAT(LODWORD(v33) & v6)
                        && v8 > COERCE_FLOAT(LODWORD(v34) & v6) )
                      {
                        return;
                      }
                      v37 = *((_BYTE *)v2 + 65);
                      if ( (char)(4 * v37) >> 6 == 1 )
                        goto LABEL_118;
                      if ( (char)(4 * v37) >> 6 < 0 )
                      {
                        if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
                          goto LABEL_118;
LABEL_69:
                        v39 = v33 + *((float *)v2 + 13);
                        v40 = v34 + *((float *)v2 + 14);
                        *((float *)v2 + 12) = v32 + *((float *)v2 + 12);
                        *((float *)v2 + 13) = v39;
                        *((float *)v2 + 14) = v40;
LABEL_70:
                        *((_BYTE *)v2 + 64) &= 0xFCu;
                        return;
                      }
                      if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                               (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                             + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                     + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                             - v9) & v6) )
                      {
                        v37 |= 0x30u;
                        v38 = *((_DWORD *)v2 + 11) & v6;
                        *((_BYTE *)v2 + 65) = v37;
                        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v38 * v7) - 0.0) & v6) )
                          goto LABEL_69;
                      }
                      else
                      {
                        v37 = v37 & 0xCF | 0x10;
                      }
LABEL_118:
                      v76 = *((float *)v2 + 3);
                      v77 = *((float *)v2 + 7);
                      v78 = v76 * v32;
                      *((_BYTE *)v2 + 65) = v37 & 0xF3;
                      v79 = (float)(v76 * v33) + *((float *)v2 + 1);
                      v80 = (float)(v76 * v34) + *((float *)v2 + 2);
                      *(float *)v2 = v78 + *(float *)v2;
                      *((float *)v2 + 1) = v79;
                      v81 = (float)(v77 * v32) + *((float *)v2 + 4);
                      v82 = (float)(v77 * v33) + *((float *)v2 + 5);
                      *((float *)v2 + 2) = v80;
                      v83 = (float)(v77 * v34) + *((float *)v2 + 6);
                      v84 = *((float *)v2 + 11);
                      *((float *)v2 + 4) = v81;
                      *((float *)v2 + 5) = v82;
                      v85 = (float)(v84 * v32) + *((float *)v2 + 8);
                      *((float *)v2 + 6) = v83;
                      v86 = (float)(v84 * v33) + *((float *)v2 + 9);
                      v87 = *((float *)v2 + 15);
                      *((float *)v2 + 8) = v85;
                      *((float *)v2 + 9) = v86;
                      v88 = (float)(v87 * v32) + *((float *)v2 + 12);
                      v89 = (float)(v87 * v33) + *((float *)v2 + 13);
                      *((float *)v2 + 10) = (float)(v84 * v34) + *((float *)v2 + 10);
                      v90 = (float)(v87 * v34) + *((float *)v2 + 14);
                      *((float *)v2 + 12) = v88;
                      *((float *)v2 + 13) = v89;
                      *((float *)v2 + 14) = v90;
                      goto LABEL_70;
                    }
                    v55 = *((_BYTE *)v4 + 65);
                    if ( (char)(4 * v55) >> 6 == 1 )
                      goto LABEL_91;
                    if ( (char)(4 * v55) >> 6 >= 0 )
                    {
                      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                              + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                                      + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                              - v9) & v6) )
                      {
                        *((_BYTE *)v4 + 65) = v55 & 0xCF | 0x10;
LABEL_91:
                        *((_BYTE *)v4 + 64) = *((_BYTE *)v4 + 64) & 0x3F | 0x40;
                        goto LABEL_92;
                      }
                      *((_BYTE *)v4 + 65) = v55 | 0x30;
                    }
                    if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 1) - 0.0) & v6)
                      && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 4) - 0.0) & v6) )
                    {
                      *((_BYTE *)v4 + 64) |= 0xC0u;
                      goto LABEL_59;
                    }
                    goto LABEL_91;
                  }
                  if ( (char)(4 * v30) >> 6 == 1 )
                    goto LABEL_214;
                  if ( (char)(4 * v30) >> 6 < 0 )
                  {
LABEL_213:
                    if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 2) - 0.0) & v6)
                      && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 6) - 0.0) & v6) )
                    {
                      *((_BYTE *)v4 + 64) |= 0xCu;
                      goto LABEL_57;
                    }
LABEL_214:
                    *((_BYTE *)v4 + 64) = *((_BYTE *)v4 + 64) & 0xF3 | 4;
                    goto LABEL_92;
                  }
                  if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                         + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                                 + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                         - v9) & v6) )
                  {
                    *((_BYTE *)v4 + 65) = v30 | 0x30;
                    goto LABEL_213;
                  }
                  v105 = *((_BYTE *)v4 + 64) & 0xF3 | 4;
                  *((_BYTE *)v4 + 65) = v30 & 0xCF | 0x10;
                  *((_BYTE *)v4 + 64) = v105;
LABEL_92:
                  v56 = *((_BYTE *)v2 + 65);
                  if ( (v56 & 8) == 0 && 16 * (v56 & 0xFC) != 0 )
                    goto LABEL_120;
                  if ( (v56 & 8) != 0 )
                  {
LABEL_94:
                    if ( (char)(16 * *((_BYTE *)v2 + 64)) >> 6 != 1 )
                    {
                      if ( (char)(16 * *((_BYTE *)v2 + 64)) >> 6 < 0 )
                        goto LABEL_96;
                      if ( (char)(4 * v56) >> 6 != 1 )
                      {
                        if ( (char)(4 * v56) >> 6 >= 0 )
                        {
                          if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                    (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                                  + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                          + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                                  - v9) & v6) )
                          {
                            v106 = *((_BYTE *)v2 + 64) & 0xF3 | 4;
                            *((_BYTE *)v2 + 65) = v56 & 0xCF | 0x10;
                            *((_BYTE *)v2 + 64) = v106;
                            goto LABEL_120;
                          }
                          *((_BYTE *)v2 + 65) = v56 | 0x30;
                        }
                        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 2) - 0.0) & v6)
                          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 6) - 0.0) & v6) )
                        {
                          *((_BYTE *)v2 + 64) |= 0xCu;
LABEL_96:
                          if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v4) )
                          {
                            v57 = *(float *)v4;
                            v58 = *((float *)v4 + 4);
                            v59 = *((float *)v4 + 5);
                            v60 = *((float *)v4 + 12);
                            v61 = *((float *)v4 + 13);
                            v62 = v58 * *((float *)v2 + 1);
                            v63 = *(float *)v2;
                            v64 = *((float *)v2 + 4);
                            v65 = *((float *)v2 + 12);
                            v107 = *((float *)v2 + 14);
                            v66 = *((float *)v4 + 1);
                            *((_DWORD *)v2 + 14) = 0;
                            *((_QWORD *)v2 + 1) = 0LL;
                            v67 = v59 * *((float *)v2 + 1);
                            *((_QWORD *)v2 + 3) = 0LL;
                            *(float *)v2 = v62 + (float)(v57 * v63);
                            v68 = v58;
                            v69 = v58 * *((float *)v2 + 13);
                            *((_QWORD *)v2 + 4) = 0LL;
                            v70 = v68 * *((float *)v2 + 5);
                            *(_QWORD *)((char *)v2 + 60) = 1065353216LL;
                            v71 = *((float *)v2 + 10);
                            v72 = *((_BYTE *)v2 + 65) & 0xC3 | 0x28;
                            *((_QWORD *)v2 + 5) = 1065353216LL;
                            *((_BYTE *)v2 + 64) = 8;
                            *((_BYTE *)v2 + 65) = v72;
                            *((float *)v2 + 1) = (float)(v66 * v63) + v67;
                            v73 = v59 * *((float *)v2 + 5);
                            v74 = v59 * *((float *)v2 + 13);
                            *((float *)v2 + 4) = v70 + (float)(v57 * v64);
                            *((float *)v2 + 12) = (float)(v69 + (float)(v57 * v65)) + v60;
                            *((float *)v2 + 5) = (float)(v66 * v64) + v73;
                            *((float *)v2 + 13) = (float)((float)(v66 * v65) + v74) + v61;
                            *((float *)v2 + 10) = v71 * *((float *)v4 + 10);
                            *((float *)v2 + 14) = (float)(v107 * *((float *)v4 + 10)) + *((float *)v4 + 14);
                            return;
                          }
                          goto LABEL_120;
                        }
                      }
                      *((_BYTE *)v2 + 64) = *((_BYTE *)v2 + 64) & 0xF3 | 4;
                    }
LABEL_120:
                    v91 = *((__m128 *)v2 + 1);
                    v92 = *((__m128 *)v2 + 2);
                    v93 = *((__m128 *)v2 + 3);
                    v94 = *(__m128 *)v4;
                    v95 = *((__m128 *)v4 + 1);
                    v96 = *((__m128 *)v4 + 2);
                    v97 = *((__m128 *)v4 + 3);
                    v98 = _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v91, v91, 170), v96),
                            _mm_mul_ps(_mm_shuffle_ps(v91, v91, 0), *(__m128 *)v4));
                    *(__m128 *)v2 = _mm_add_ps(
                                      _mm_add_ps(
                                        _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v2, *(__m128 *)v2, 255), v97),
                                        _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v2, *(__m128 *)v2, 85), v95)),
                                      _mm_add_ps(
                                        _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v2, *(__m128 *)v2, 170), v96),
                                        _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v2, *(__m128 *)v2, 0), *(__m128 *)v4)));
                    *((__m128 *)v2 + 1) = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v91, v91, 255), v97),
                                              _mm_mul_ps(_mm_shuffle_ps(v91, v91, 85), v95)),
                                            v98);
                    *((__m128 *)v2 + 2) = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v92, v92, 255), v97),
                                              _mm_mul_ps(_mm_shuffle_ps(v92, v92, 85), v95)),
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v92, v92, 170), v96),
                                              _mm_mul_ps(_mm_shuffle_ps(v92, v92, 0), v94)));
                    *((__m128 *)v2 + 3) = _mm_add_ps(
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v93, v93, 255), v97),
                                              _mm_mul_ps(_mm_shuffle_ps(v93, v93, 85), v95)),
                                            _mm_add_ps(
                                              _mm_mul_ps(_mm_shuffle_ps(v93, v93, 170), v96),
                                              _mm_mul_ps(_mm_shuffle_ps(v93, v93, 0), v94)));
                    *((_DWORD *)v2 + 16) = 0;
                    return;
                  }
                  if ( (char)(4 * v56) >> 6 != 1 )
                  {
                    if ( (char)(4 * v56) >> 6 < 0 )
                    {
                      if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
                        goto LABEL_119;
                      v56 = *((_BYTE *)v2 + 65);
                      goto LABEL_267;
                    }
                    if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                            + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                    + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                            - v9) & v6) )
                    {
                      v56 = v56 & 0xCF | 0x10;
                      goto LABEL_119;
                    }
                    v56 |= 0x30u;
                    if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
                    {
LABEL_267:
                      if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 8) - 0.0) & v6)
                        && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 9) - 0.0) & v6) )
                      {
                        v56 |= 0xCu;
                        *((_BYTE *)v2 + 65) = v56;
                        goto LABEL_94;
                      }
                    }
                  }
LABEL_119:
                  *((_BYTE *)v2 + 65) = v56 & 0xF3 | 4;
                  goto LABEL_120;
                }
              }
LABEL_179:
              *((_BYTE *)v4 + 65) = v30 & 0xF3 | 4;
              goto LABEL_92;
            }
            if ( v20 >> 6 != 1 )
            {
              if ( v20 >> 6 >= 0 )
              {
                v101 = *((_BYTE *)v2 + 65);
                if ( (char)(4 * v101) >> 6 == 1 )
                  goto LABEL_194;
                if ( (char)(4 * v101) >> 6 >= 0 )
                {
                  if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                          + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                                  + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                          - v9) & v6) )
                  {
                    *((_BYTE *)v2 + 65) = v101 & 0xCF | 0x10;
                    v20 = *((_BYTE *)v2 + 64) & 0x3F | 0x40;
                    goto LABEL_127;
                  }
                  *((_BYTE *)v2 + 65) = v101 | 0x30;
                }
                if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 1) - 0.0) & v6)
                  || v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 4) - 0.0) & v6) )
                {
LABEL_194:
                  v20 = *((_BYTE *)v2 + 64) & 0x3F | 0x40;
                  goto LABEL_127;
                }
                v20 = *((_BYTE *)v2 + 64) | 0xC0;
              }
              else
              {
                v20 = *((_BYTE *)v2 + 64);
              }
              if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v2 - v9) & v6)
                && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 5) - v9) & v6) )
              {
                *((_BYTE *)v2 + 64) = v20 | 0x30;
                goto LABEL_41;
              }
            }
LABEL_127:
            *((_BYTE *)v2 + 64) = v20 & 0xCF | 0x10;
            goto LABEL_53;
          }
          if ( (char)(4 * v19) >> 6 != 1 )
          {
            if ( (char)(4 * v19) >> 6 < 0 )
            {
              if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
                goto LABEL_52;
              v19 = *((_BYTE *)v2 + 65);
              goto LABEL_224;
            }
            if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                                    + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                            + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                                    - v9) & v6) )
            {
              v19 = v19 & 0xCF | 0x10;
              goto LABEL_52;
            }
            v19 |= 0x30u;
            if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
            {
LABEL_224:
              if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 8) - 0.0) & v6)
                && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v2 + 9) - 0.0) & v6) )
              {
                v19 |= 0xCu;
                *((_BYTE *)v2 + 65) = v19;
                goto LABEL_37;
              }
            }
          }
LABEL_52:
          *((_BYTE *)v2 + 65) = v19 & 0xF3 | 4;
          goto LABEL_53;
        }
        *((_BYTE *)v4 + 65) = v13 | 0x30;
      }
      if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 2) - 0.0) & v6)
        && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 6) - 0.0) & v6) )
      {
        *((_BYTE *)v4 + 64) |= 0xCu;
        goto LABEL_26;
      }
    }
    *((_BYTE *)v4 + 64) = *((_BYTE *)v4 + 64) & 0xF3 | 4;
    goto LABEL_35;
  }
LABEL_26:
  v14 = *((_BYTE *)v4 + 64);
  if ( (char)(4 * v14) >> 6 == 1 )
    goto LABEL_35;
  if ( (char)(4 * v14) >> 6 >= 0 )
  {
    if ( v14 >> 6 != 1 )
    {
      if ( v14 >> 6 < 0 )
      {
        v14 = *((_BYTE *)v4 + 64);
LABEL_112:
        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v4 - v9) & v6)
          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 5) - v9) & v6) )
        {
          *((_BYTE *)v4 + 64) = v14 | 0x30;
          goto LABEL_28;
        }
        goto LABEL_113;
      }
      v100 = *((_BYTE *)v4 + 65);
      if ( (char)(4 * v100) >> 6 != 1 )
      {
        if ( (char)(4 * v100) >> 6 >= 0 )
        {
          if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v4 + 7) & v6) * v7)
                                                  + (float)(COERCE_FLOAT(*((_DWORD *)v4 + 3) & v6) * v7))
                                          + COERCE_FLOAT(*((_DWORD *)v4 + 15) & v6))
                                  - v9) & v6) )
          {
            *((_BYTE *)v4 + 65) = v100 & 0xCF | 0x10;
            v14 = *((_BYTE *)v4 + 64) & 0x3F | 0x40;
            goto LABEL_113;
          }
          *((_BYTE *)v4 + 65) = v100 | 0x30;
        }
        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 1) - 0.0) & v6)
          && v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 4) - 0.0) & v6) )
        {
          v14 = *((_BYTE *)v4 + 64) | 0xC0;
          goto LABEL_112;
        }
      }
      v14 = *((_BYTE *)v4 + 64) & 0x3F | 0x40;
    }
LABEL_113:
    *((_BYTE *)v4 + 64) = v14 & 0xCF | 0x10;
    goto LABEL_35;
  }
LABEL_28:
  if ( v8 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 10) - v9) & v6) )
    goto LABEL_35;
  v15 = *((float *)v4 + 12);
  v16 = *((float *)v4 + 14);
  v17 = *((float *)v4 + 13);
  if ( v8 <= COERCE_FLOAT(LODWORD(v15) & v6)
    || v8 <= COERCE_FLOAT(LODWORD(v17) & v6)
    || v8 <= COERCE_FLOAT(LODWORD(v16) & v6) )
  {
    v18 = *((_BYTE *)v2 + 65);
    if ( (char)(4 * v18) >> 6 != 1 )
    {
      if ( (char)(4 * v18) >> 6 >= 0 )
      {
        if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                 (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v2 + 7) & v6) * v7)
                                               + (float)(COERCE_FLOAT(*((_DWORD *)v2 + 3) & v6) * v7))
                                       + COERCE_FLOAT(*((_DWORD *)v2 + 15) & v6))
                               - v9) & v6) )
        {
          v18 |= 0x30u;
          v52 = *((_DWORD *)v2 + 11) & v6;
          *((_BYTE *)v2 + 65) = v18;
          if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v52 * v7) - 0.0) & v6) )
          {
LABEL_81:
            *((float *)v2 + 14) = v16 + *((float *)v2 + 14);
            goto LABEL_82;
          }
        }
        else
        {
          v18 = v18 & 0xCF | 0x10;
        }
      }
      else if ( v8 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)v2 + 11) & v6) * v7) - 0.0) & v6) )
      {
        goto LABEL_81;
      }
    }
    v41 = *((float *)v2 + 3);
    *((_BYTE *)v2 + 65) = v18 & 0xF3;
    v42 = (float)(v17 * v41) + *((float *)v2 + 1);
    *(float *)v2 = (float)(v15 * v41) + *(float *)v2;
    v43 = v16 * v41;
    v44 = *((float *)v2 + 7);
    *((float *)v2 + 1) = v42;
    v45 = (float)(v17 * v44) + *((float *)v2 + 5);
    *((float *)v2 + 2) = v43 + *((float *)v2 + 2);
    *((float *)v2 + 5) = v45;
    *((float *)v2 + 4) = (float)(v15 * v44) + *((float *)v2 + 4);
    v46 = v16 * v44;
    v47 = *((float *)v2 + 11);
    v48 = (float)(v17 * v47) + *((float *)v2 + 9);
    *((float *)v2 + 6) = v46 + *((float *)v2 + 6);
    *((float *)v2 + 9) = v48;
    v49 = *((float *)v2 + 15);
    v50 = (float)(v15 * v47) + *((float *)v2 + 8);
    v15 = v15 * v49;
    v17 = v17 * v49;
    *((float *)v2 + 8) = v50;
    v51 = (float)(v49 * v16) + *((float *)v2 + 14);
    *((float *)v2 + 10) = (float)(v16 * v47) + *((float *)v2 + 10);
    *((float *)v2 + 14) = v51;
LABEL_82:
    v53 = v17 + *((float *)v2 + 13);
    v54 = v15 + *((float *)v2 + 12);
    *((_BYTE *)v2 + 64) &= 0xFCu;
    *((float *)v2 + 13) = v53;
    *((float *)v2 + 12) = v54;
  }
}
