/*
 * XREFs of ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0
 * Callers:
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x18000DDB0 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18001BD04 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002FE14 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005B330 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18005B3D8 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x18006F0C4 (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800AB100 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1800F1338 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800F9D64 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18014ABE0 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801775C0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180177720 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018CF50 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18018D370 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z @ 0x18018DFF0 (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801AB160 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801ACA34 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801B16DC (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComP.c)
 *     ??1SharedStateLayer@@QEAA@XZ @ 0x1801BF000 (--1SharedStateLayer@@QEAA@XZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1801CF268 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1801DBE04 (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1801DC15C (--1CCpuClipAntialiasSink@@UEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801E34FC (--1CProjectedShadow@@MEAA@XZ.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x1801E7DA8 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801E7FAC (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ??_GCWarpRenderingEffect@@MEAAPEAXI@Z @ 0x1801E7FE0 (--_GCWarpRenderingEffect@@MEAAPEAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180216418 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180238940 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18023AFE8 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18026C6EC (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18027816C (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x1802782C8 (--1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z @ 0x18027AB00 (--_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z.c)
 *     ??_EBamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18027AB40 (--_EBamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ @ 0x18027C204 (--1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x18027D3F0 (--1DataProviderProxy@@UEAA@XZ.c)
 *     ??1?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@UEAA@XZ @ 0x180287EE8 (--1-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Micr.c)
 *     ??_EBamoDataProviderProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180287F70 (--_EBamoDataProviderProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GBamoList_uint_ProxyImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180287FF0 (--_GBamoList_uint_ProxyImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x18028E2B0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x180290704 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180293B4C (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180295158 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 *     ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1802A3560 (-CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAP.c)
 *     ?Split@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@0@Z @ 0x1802CF090 (-Split@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUI_ea_1802CF090.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D9CD8 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
