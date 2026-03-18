/*
 * XREFs of ??0CThreadContext@@AEAA@XZ @ 0x180251704
 * Callers:
 *     ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18000F650 (--_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListEntry@@MEAAPEAXI@Z @ 0x18000F7C0 (--_GCDrawListEntry@@MEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x180012608 (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18001E0B0 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x180023060 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x180039F60 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive4@@@@SAPEAX_K@Z @ 0x1800459A4 (-Alloc@-$CThreadLocalObjectCache@V-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorag.c)
 *     ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180045A90 (-Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV-$unique_ptr@V.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x1800471A4 (-Alloc@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x18004E5B0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058AB0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059890 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x18005FC40 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z @ 0x18008630C (-Free@-$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180097160 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800AC100 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1800AC320 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCCommonRenderingEffect@@MEAAPEAXI@Z @ 0x1800CFD20 (--_GCCommonRenderingEffect@@MEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0874 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800E8820 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x1800FA96C (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18010D994 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18010EE70 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18010F900 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x180126F94 (-Alloc@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180127840 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180135800 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180137AD4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18014C0DC (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18014C1CC (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x180194EFC (-Alloc@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18019D150 (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1801BCFD8 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x1801BD098 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x1801BD4F0 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801CD460 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1801D7E80 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1801D9ECC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAXPEAX@Z @ 0x1801DA0BC (-Free@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z @ 0x1801DACDC (-Free@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@V?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@VCDrawListPrimitive4@@@@SAXPEAX@Z @ 0x1801E1254 (-Free@-$CThreadLocalObjectCache@V-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage.c)
 * Callees:
 *     <none>
 */

CThreadContext *__fastcall CThreadContext::CThreadContext(CThreadContext *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  return this;
}
