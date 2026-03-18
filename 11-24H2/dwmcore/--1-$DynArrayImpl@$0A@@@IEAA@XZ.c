/*
 * XREFs of ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000CD84 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180037110 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800398B8 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800455EC (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x180057D5C (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180057E6C (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18008D34C (--1CEffectBrush@@MEAA@XZ.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z @ 0x18008F500 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV3@@Z.c)
 *     ??1?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA@XZ @ 0x180095668 (--1-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEnum@Dw.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x180095690 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1800A705C (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UN.c)
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800BD8EC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800BD98C (--1CLightStack@@QEAA@XZ.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800BE380 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1800BE8B8 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1800E5F5C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18012B5D4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18013319C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?RemoveAllElements@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXXZ @ 0x1801345B0 (-RemoveAllElements@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18013984C (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1ClipPlaneIterator@@QEAA@XZ @ 0x1801399D4 (--1ClipPlaneIterator@@QEAA@XZ.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18014AFB0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18014CFAC (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x180169E50 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180181480 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ??1CCompositionSpotLight@@EEAA@XZ @ 0x18018C624 (--1CCompositionSpotLight@@EEAA@XZ.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18019CFD0 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1801B1608 (--1CDrawListBatchManager@@IEAA@XZ.c)
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801BE2DC (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x1801C8550 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1801C9CEC (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1801CA738 (--1CD2DContext@@UEAA@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1801D764C (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SE.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801D78F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801D7B4C (--R-$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z.c)
 *     ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1801DBD20 (-ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801DCA58 (-SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801E0F90 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CPolygon@@EEAA@XZ @ 0x1801E23CC (--1CPolygon@@EEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801E4DFC (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x1801E687C (--1CPropertySet@@UEAA@XZ.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801ECAC8 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??1CCompositionLight@@MEAA@XZ @ 0x1801EE42C (--1CCompositionLight@@MEAA@XZ.c)
 *     ??1?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ @ 0x1801FB098 (--1-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1801FB3EC (--1CAnimation@@UEAA@XZ.c)
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1802005FC (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?Release@CRenderDataBuilder@@UEAAKXZ @ 0x180200AF0 (-Release@CRenderDataBuilder@@UEAAKXZ.c)
 *     ??1CBaseAnimation@@UEAA@XZ @ 0x180212510 (--1CBaseAnimation@@UEAA@XZ.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180218230 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18021A870 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180220800 (--_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180228C44 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022DCCC (--1CGenericInk@@EEAA@XZ.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18024F074 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18025E4F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18025F1B4 (--1CEffectCompilationService@@EEAA@XZ.c)
 *     ??1CEnergyReporter@@AEAA@XZ @ 0x180260EB0 (--1CEnergyReporter@@AEAA@XZ.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180273D28 (--1CEffectCompilationTask@@QEAA@XZ.c)
 *     ??1CInk@@UEAA@XZ @ 0x18027524C (--1CInk@@UEAA@XZ.c)
 *     ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x180275288 (--1CLegacyAnimationTrigger@@UEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1802832F0 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A1BA0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x1802A75A0 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802C7EE0 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802CE4B0 (--1CHolographicManager@@EEAA@XZ.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802D42F8 (--1CHolographicClient@@MEAA@XZ.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1802DC470 (--1CScanPipeline@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DynArrayImpl<0>::~DynArrayImpl<0>(__int64 a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
    *(_QWORD *)a1 = 0LL;
  }
}
