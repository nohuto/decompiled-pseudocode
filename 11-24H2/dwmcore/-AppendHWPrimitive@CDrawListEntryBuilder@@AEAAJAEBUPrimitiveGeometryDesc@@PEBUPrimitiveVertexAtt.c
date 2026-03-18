/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180072340 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18001DF30 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x18002465C (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x180072AD8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??Y?$checked_array_iterator@PEAM@stdext@@QEAAAEAV01@_J@Z @ 0x1800B7030 (--Y-$checked_array_iterator@PEAM@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800BC0FC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x1800C6EF0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800C7010 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800CA7E0 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800CAE40 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD910 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CFE30 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0B40 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180101230 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180101250 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DecomposeRectangleEdgeFlags@@YAXW4D2D1_EDGE_FLAGS@@PEAW41@111@Z @ 0x180151B08 (-DecomposeRectangleEdgeFlags@@YAXW4D2D1_EDGE_FLAGS@@PEAW41@111@Z.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x180151C04 (-TryAddEdge@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180151D70 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18016E020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x180176254 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801764AC (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x180177818 (-GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180177F20 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x18017AC18 (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x18017ACA0 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18017B1E4 (-resize@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@.c)
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18017B44C (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@Z @ 0x18017B4E4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@Y.c)
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x18017FAEC (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1801999F0 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D2D1_EDGE_FLAGS@@PEAUResolveEdgeFlagsResult@1@M@Z @ 0x1801A9E40 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801AF150 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801B2190 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?CalcEdgeDirections@Mesh@@SAXPEBUD2D_POINT_2F@@_KPEAUVertexAAOffsetDesc@1@M@Z @ 0x1801B42D0 (-CalcEdgeDirections@Mesh@@SAXPEBUD2D_POINT_2F@@_KPEAUVertexAAOffsetDesc@1@M@Z.c)
 *     ??1?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801BEF78 (--1-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801C3550 (-clear_region@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C5B90 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801C87C0 (--1-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     ??Y?$checked_array_iterator@PEA_N@stdext@@QEAAAEAV01@_J@Z @ 0x1801C8C90 (--Y-$checked_array_iterator@PEA_N@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??1?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801C9110 (--1-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ @ 0x1801CD330 (-IsEmpty@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1801CDAB8 (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801D38E0 (-GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ??$?0$0?0V?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@W4D2D1_EDGE_FLAGS@@$0?0@gsl@@QEAA@AEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801DAC50 (--$-0$0-0V-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_.c)
 *     ??$?0$0?0V?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@_N$0?0@gsl@@QEAA@AEAV?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801DFC3C (--$-0$0-0V-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@.c)
 *     ??_5@YAAEAW4D2D1_EDGE_FLAGS@@AEAW40@W40@@Z @ 0x1801E0514 (--_5@YAAEAW4D2D1_EDGE_FLAGS@@AEAW40@W40@@Z.c)
 *     ?replace@?$expandable_buffer_base@_N$0CI@@detail@@QEAAPEAU?$aligned_storage_for@_N@2@PEAU32@@Z @ 0x1801E6630 (-replace@-$expandable_buffer_base@_N$0CI@@detail@@QEAAPEAU-$aligned_storage_for@_N@2@PEAU32@@Z.c)
 *     ??0?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@QEAA@PEBUD2D_VECTOR_2F@@_J_K@Z @ 0x1801E91FC (--0-$StridedSpan@$$CBUD2D_VECTOR_2F@@@@QEAA@PEBUD2D_VECTOR_2F@@_J_K@Z.c)
 *     ?IncrementTessellatedRectUnClipped@CTelemetryFrames@@SAXI@Z @ 0x1801E9D00 (-IncrementTessellatedRectUnClipped@CTelemetryFrames@@SAXI@Z.c)
 *     ?MakeRectangleEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@W41@000@Z @ 0x1801EC2E4 (-MakeRectangleEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@W41@000@Z.c)
 *     ?data@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAPEA_NXZ @ 0x1801EFAB0 (-data@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ @ 0x1801F1DF0 (-GetRightEyeRenderTargetBitmap@CStereoRenderTargetBitmap@@UEAAPEAVIRenderTargetBitmap@@XZ.c)
 *     ?IncrementTessellatedRectGeneralClip@CTelemetryFrames@@SAXI@Z @ 0x1801F7790 (-IncrementTessellatedRectGeneralClip@CTelemetryFrames@@SAXI@Z.c)
 *     ?IncrementTessellatedRectAxisAlignedRectClip@CTelemetryFrames@@SAXI@Z @ 0x1801FD3B0 (-IncrementTessellatedRectAxisAlignedRectClip@CTelemetryFrames@@SAXI@Z.c)
 *     ??A?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAAEA_N_K@Z @ 0x1801FE4C8 (--A-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??0ResolveEdgeFlagsResult@CEdgeFlagsMap@@QEAA@XZ @ 0x1801FFDAC (--0ResolveEdgeFlagsResult@CEdgeFlagsMap@@QEAA@XZ.c)
 *     ??A?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAAEAW4D2D1_EDGE_FLAGS@@_K@Z @ 0x180202E8C (--A-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ?GetVertexAAOffsetsForAntialiasRectangle@Mesh@@SA?AV?$span@$$CBUVertexAAOffsetDesc@Mesh@@$0?0@gsl@@XZ @ 0x180203C6C (-GetVertexAAOffsetsForAntialiasRectangle@Mesh@@SA-AV-$span@$$CBUVertexAAOffsetDesc@Mesh@@$0-0@gs.c)
 *     ?GetAntialiasMode@CCpuClip@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ @ 0x1802065B0 (-GetAntialiasMode@CCpuClip@@QEBA-AW4D2D1_ANTIALIAS_MODE@@XZ.c)
 *     ??A?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAAEAUVertexAAOffsetDesc@Mesh@@_K@Z @ 0x180223ACC (--A-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vl.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x18022C430 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$uninitialized_move@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x180246C58 (--$uninitialized_move@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@.c)
 *     ??$move_backward@V?$move_iterator@PEA_N@std@@V?$checked_array_iterator@PEA_N@stdext@@@std@@YA?AV?$checked_array_iterator@PEA_N@stdext@@V?$move_iterator@PEA_N@0@0V12@@Z @ 0x180246D24 (--$move_backward@V-$move_iterator@PEA_N@std@@V-$checked_array_iterator@PEA_N@stdext@@@std@@YA-AV.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x180247334 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??F?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEAAAEAV01@XZ @ 0x18024C730 (--F-$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18024E3E0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@PEAUVertexAAOffsetDesc@Mesh@@@std@@YAPEAUVertexAAOffsetDesc@Mesh@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@V30@PEAU12@@Z @ 0x18024F3FC (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@PEAUVertexA.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??C?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEBAPEAW4D2D1_EDGE_FLAGS@@XZ @ 0x1802850E0 (--C-$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@QEBAPEAW4D2D1_EDGE_FLAGS@@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1802855AC (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  __m128 v3; // xmm1
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm13_4
  __m128 v7; // xmm9
  size_t v8; // rsi
  unsigned __int32 v9; // xmm8_4
  CCachedVisualImage **v10; // r9
  float v11; // xmm14_4
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  detail::liberal_expansion_policy *v14; // rcx
  detail::liberal_expansion_policy *v15; // r14
  float v16; // xmm11_4
  float v17; // xmm12_4
  struct CPrimitiveColor *v18; // rbx
  unsigned __int64 v19; // rdi
  bool (__fastcall *v20)(CRectanglesShape *__hidden, unsigned int *); // r8
  unsigned __int8 v21; // r15
  __int64 (__fastcall *v22)(CCachedVisualImage *, __int64, __int64); // rdx
  __int64 v23; // rdi
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  detail::liberal_expansion_policy *v27; // rdx
  bool (__fastcall *v28)(LONG **); // rax
  void (__fastcall *v29)(__int64, __m128 *, _QWORD); // rax
  __m128 v30; // xmm3
  __m128 v31; // xmm3
  __m128 v32; // xmm3
  __m128 v33; // xmm3
  char IsEmpty; // al
  __int64 v35; // rdx
  char v36; // cl
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r14d
  bool (__fastcall *v40)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v41; // rcx
  unsigned __int8 v42; // si
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  struct ID2D1GeometrySink *v45; // rsi
  int (*v46)(CPolygonShape *__hidden, struct ID2D1GeometrySink *); // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  unsigned int v49; // edi
  __int64 v50; // rcx
  _BYTE *v51; // r8
  unsigned __int8 v52; // r11
  _DWORD *v53; // rbx
  char v54; // r10
  detail::liberal_expansion_policy *v55; // rcx
  unsigned __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  _BYTE *v61; // r8
  unsigned __int8 v62; // dl
  unsigned __int64 v63; // rbx
  char v64; // r9
  _BYTE *v65; // r10
  _BYTE *v66; // rcx
  size_t v67; // rax
  _BYTE *v68; // r11
  __int64 v69; // rcx
  unsigned int j; // eax
  _QWORD *v71; // rax
  CRectanglesShape **v72; // rsi
  __int32 *v73; // r14
  __m128 *v74; // r15
  CRectanglesShape *v75; // rcx
  bool (__fastcall *v76)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __int64 v77; // rsi
  __m128 v78; // xmm0
  __m128 v79; // xmm1
  __m128 v80; // xmm0
  __m128 v81; // xmm1
  __m128 v82; // xmm1
  __m128 v83; // xmm1
  __int32 v84; // xmm1_4
  __int32 v85; // xmm0_4
  __int32 v86; // xmm1_4
  int v87; // xmm0_4
  __int64 (__fastcall *v88)(CPolygonShape *); // rax
  int TightBounds; // eax
  __int64 v90; // r8
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm3_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  bool (__fastcall *v97)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  __m128 v98; // xmm9
  __m128 v99; // xmm9
  __m128 v100; // xmm0
  __m128 v101; // xmm9
  bool v102; // cf
  detail::liberal_expansion_policy *v103; // rdx
  __int64 (__fastcall *v104)(CCachedVisualImage *, __int64, __int64); // rdx
  __int64 v105; // rdi
  unsigned __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rax
  detail::liberal_expansion_policy *v109; // rcx
  __int64 v110; // rdx
  int v111; // esi
  __int64 v112; // rax
  int v113; // r10d
  int v114; // eax
  unsigned __int8 v115; // r11
  int v116; // esi
  int v117; // eax
  int v118; // esi
  int v119; // edx
  bool (__fastcall *v120)(CRoundedRectangleShape *__hidden, unsigned int *); // rax
  float v121; // xmm7_4
  float v122; // xmm6_4
  unsigned __int64 v123; // r9
  size_t v124; // rax
  _OWORD *v125; // rbx
  unsigned __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // rdi
  unsigned __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  _OWORD *v132; // r9
  _OWORD *v133; // r13
  struct Mesh::VertexAAOffsetDesc *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rax
  int v137; // edi
  __int64 v138; // r8
  int v139; // eax
  __int64 v140; // rdx
  __int8 v141; // si
  __int64 v142; // rax
  FLOAT v143; // xmm6_4
  FLOAT left; // xmm3_4
  int v145; // edx
  float v146; // xmm4_4
  float v147; // xmm3_4
  bool v148; // si
  int v149; // eax
  struct PrimitiveVertexAttributesDesc *v150; // rdx
  unsigned __int8 v151; // r12
  int v152; // ebx
  bool v153; // di
  struct PrimitiveVertexAttributesDesc *v154; // r14
  unsigned int v155; // edx
  int v156; // xmm4_4
  int v157; // xmm5_4
  int BuiltHWPrimitiveEntry; // eax
  __int64 v160; // rax
  __int64 v161; // rdx
  struct Mesh::VertexAAOffsetDesc *v162; // rax
  struct Mesh::VertexAAOffsetDesc *v163; // rdx
  bool *v164; // rax
  const struct PrimitiveVertexAttributesDesc *v165; // rdx
  unsigned int v166; // edi
  char v167; // r13
  unsigned __int64 v168; // r8
  bool v169; // zf
  char IsRectangles; // al
  CRectanglesShape *v171; // rdi
  __int32 v172; // xmm1_4
  __int32 v173; // xmm0_4
  __int32 v174; // xmm1_4
  __int32 v175; // xmm0_4
  char v176; // si
  void (__fastcall *v177)(CRectanglesShape *, __int128 *, _QWORD); // rax
  __int64 v178; // rdx
  __int64 v179; // r9
  float v180; // xmm5_4
  float top; // xmm2_4
  float right; // xmm3_4
  float bottom; // xmm4_4
  int v184; // eax
  int v185; // esi
  _BYTE *v186; // rsi
  __int64 v187; // rax
  _BYTE *v188; // rsi
  _BYTE *v189; // rsi
  __int64 v190; // rax
  char v191; // al
  __int64 (__fastcall *v192)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  struct D2D_RECT_F *v193; // rcx
  unsigned __int64 v194; // rdi
  __int64 v195; // rcx
  __int64 v196; // rsi
  int v197; // ecx
  struct ID2D1GeometrySink *v198; // rdx
  int Outline; // eax
  unsigned int RectangleEdgeFlags; // eax
  __int64 v201; // rax
  _QWORD *v202; // rdx
  __int64 v203; // rbx
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // r14
  __int64 v207; // rdx
  int v208; // esi
  HANDLE ProcessHeap; // rax
  HANDLE v210; // rax
  HANDLE v211; // rax
  CMeshCacheManager *MeshCacheManager; // rdi
  __int64 v213; // rdx
  const struct CShape *v214; // rax
  __int64 v215; // rdx
  unsigned int v216; // edi
  int v217; // xmm0_4
  int v218; // xmm1_4
  _DWORD *v219; // rax
  unsigned __int64 v220; // r14
  __int64 v221; // rbx
  void *v222; // rsi
  __int64 v223; // rax
  void *v224; // rax
  __m128 v225; // xmm3
  __m128 v226; // xmm3
  __m128 v227; // xmm3
  __m128 v228; // xmm3
  unsigned int v229; // esi
  unsigned int v230; // eax
  LPVOID v231; // rax
  void *v232; // rdi
  _BYTE *v233; // rcx
  int v234; // eax
  unsigned __int64 v235; // r15
  LPVOID v236; // rax
  void *v237; // rsi
  LPVOID v238; // r14
  __int64 v239; // rax
  void *v240; // rax
  char v241; // al
  float v242; // xmm1_4
  float v243; // xmm3_4
  float v244; // xmm4_4
  float v245; // xmm2_4
  float v246; // xmm5_4
  __m128 v247; // xmm0
  __m128 v248; // xmm1
  __m128 v249; // xmm0
  __m128 v250; // xmm1
  __m128 v251; // xmm1
  __m128 v252; // xmm1
  unsigned __int64 v253; // r12
  LPVOID v254; // rax
  void *v255; // rdi
  void *v256; // r14
  size_t v257; // rbx
  void *v258; // rsi
  _BYTE *v259; // rcx
  __int64 v260; // r8
  unsigned int v261; // eax
  bool v262; // al
  unsigned __int64 v263; // r11
  unsigned __int64 v264; // rax
  _OWORD *v265; // r9
  unsigned __int64 v266; // rax
  _OWORD *v267; // r9
  unsigned __int64 v268; // r11
  _OWORD *v269; // rax
  unsigned __int64 v270; // r10
  unsigned __int64 v271; // r9
  size_t i; // rax
  struct _D3DCOLORVALUE *v273; // rdx
  int v274; // eax
  _DWORD *v275; // r13
  _DWORD *v276; // rax
  SIZE_T v277; // rdi
  void *v278; // rdx
  void *v279; // rax
  int v280; // [rsp+28h] [rbp-E0h]
  char v281; // [rsp+48h] [rbp-C0h]
  char v282; // [rsp+49h] [rbp-BFh]
  unsigned __int8 v283; // [rsp+49h] [rbp-BFh]
  char v284; // [rsp+4Ah] [rbp-BEh]
  char v285; // [rsp+4Ah] [rbp-BEh]
  unsigned __int8 v286; // [rsp+4Bh] [rbp-BDh]
  __m128i v287; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v288; // [rsp+68h] [rbp-A0h]
  struct CPrimitiveColor *v289; // [rsp+78h] [rbp-90h]
  unsigned int v290; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v291; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v292; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v293; // [rsp+8Ch] [rbp-7Ch] BYREF
  char *v294; // [rsp+90h] [rbp-78h] BYREF
  __int64 v295; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v296[24]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v297[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _D3DCOLORVALUE *v298; // [rsp+D8h] [rbp-30h]
  CRectanglesShape *v299; // [rsp+E0h] [rbp-28h] BYREF
  char v300; // [rsp+E8h] [rbp-20h]
  __int128 v301; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v302; // [rsp+100h] [rbp-8h]
  char v303; // [rsp+108h] [rbp+0h]
  __int64 v304; // [rsp+110h] [rbp+8h] BYREF
  __int64 v305; // [rsp+118h] [rbp+10h] BYREF
  CDrawListEntryBuilder *v306; // [rsp+120h] [rbp+18h]
  struct PrimitiveVertexAttributesDesc *v307; // [rsp+128h] [rbp+20h]
  void *v308; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v309; // [rsp+138h] [rbp+30h]
  __int128 v310; // [rsp+140h] [rbp+38h] BYREF
  unsigned __int64 v311; // [rsp+150h] [rbp+48h]
  __int128 v312; // [rsp+158h] [rbp+50h] BYREF
  __m256i v313; // [rsp+168h] [rbp+60h]
  __m128 v314; // [rsp+188h] [rbp+80h]
  int v315; // [rsp+198h] [rbp+90h]
  _DWORD v316[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v317; // [rsp+1B0h] [rbp+A8h]
  _DWORD *v318; // [rsp+1B8h] [rbp+B0h]
  __int128 v319; // [rsp+1C0h] [rbp+B8h]
  __int128 v320; // [rsp+1D0h] [rbp+C8h]
  _DWORD v321[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  size_t v322; // [rsp+1E8h] [rbp+E0h]
  float v323; // [rsp+1F0h] [rbp+E8h]
  unsigned __int32 v324; // [rsp+1F4h] [rbp+ECh]
  __int128 v325; // [rsp+1F8h] [rbp+F0h]
  __int64 v326; // [rsp+208h] [rbp+100h]
  float v327; // [rsp+210h] [rbp+108h]
  float v328; // [rsp+214h] [rbp+10Ch]
  int v329; // [rsp+218h] [rbp+110h]
  __int64 v330; // [rsp+21Ch] [rbp+114h]
  __m128i v331; // [rsp+228h] [rbp+120h] BYREF
  __int64 v332; // [rsp+238h] [rbp+130h]
  __m128i v333; // [rsp+248h] [rbp+140h] BYREF
  __int64 v334; // [rsp+258h] [rbp+150h]
  __m128 v335; // [rsp+268h] [rbp+160h] BYREF
  __int64 v336; // [rsp+278h] [rbp+170h]
  __m128i v337; // [rsp+288h] [rbp+180h]
  __m128 v338; // [rsp+298h] [rbp+190h] BYREF
  __m256i v339; // [rsp+2A8h] [rbp+1A0h]
  __m128 v340; // [rsp+2C8h] [rbp+1C0h]
  int v341; // [rsp+2D8h] [rbp+1D0h]
  _BYTE v342[72]; // [rsp+2F0h] [rbp+1E8h] BYREF
  char v343[16]; // [rsp+338h] [rbp+230h] BYREF
  __int128 v344; // [rsp+348h] [rbp+240h] BYREF
  __int128 v345; // [rsp+358h] [rbp+250h] BYREF
  struct D2D_RECT_F v346; // [rsp+368h] [rbp+260h] BYREF
  _QWORD v347[2]; // [rsp+378h] [rbp+270h] BYREF
  void *Src; // [rsp+388h] [rbp+280h]
  detail::liberal_expansion_policy *v349; // [rsp+390h] [rbp+288h]
  CCachedVisualImage **v350; // [rsp+398h] [rbp+290h]
  _BYTE v351[16]; // [rsp+3A0h] [rbp+298h] BYREF
  CCachedVisualImage *v352; // [rsp+3B0h] [rbp+2A8h] BYREF
  struct D2D_RECT_F v353; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct D2D_RECT_F v354; // [rsp+3C8h] [rbp+2C0h] BYREF
  __m128 v355; // [rsp+3D8h] [rbp+2D0h] BYREF
  LPVOID v356; // [rsp+3E8h] [rbp+2E0h] BYREF
  char *v357; // [rsp+3F0h] [rbp+2E8h]
  D2D1_MATRIX_3X2_F *p_matrix; // [rsp+3F8h] [rbp+2F0h]
  _BYTE v359[40]; // [rsp+400h] [rbp+2F8h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+428h] [rbp+320h] BYREF
  struct tagRECT v361; // [rsp+440h] [rbp+338h] BYREF
  struct tagRECT v362; // [rsp+450h] [rbp+348h] BYREF
  __int64 v363; // [rsp+460h] [rbp+358h] BYREF
  float v364; // [rsp+468h] [rbp+360h]
  int v365; // [rsp+46Ch] [rbp+364h]
  LPVOID v366; // [rsp+478h] [rbp+370h] BYREF
  _BYTE *v367; // [rsp+480h] [rbp+378h]
  char *v368; // [rsp+488h] [rbp+380h]
  _BYTE v369[160]; // [rsp+490h] [rbp+388h] BYREF
  char v370; // [rsp+530h] [rbp+428h] BYREF
  __m128i v371; // [rsp+538h] [rbp+430h]
  __m128i v372; // [rsp+548h] [rbp+440h]
  _QWORD v373[3]; // [rsp+558h] [rbp+450h] BYREF
  _BYTE v374[160]; // [rsp+570h] [rbp+468h] BYREF
  char v375; // [rsp+610h] [rbp+508h] BYREF
  LPVOID lpMem; // [rsp+618h] [rbp+510h] BYREF
  _BYTE *v377; // [rsp+620h] [rbp+518h]
  char *v378; // [rsp+628h] [rbp+520h]
  _BYTE v379[1280]; // [rsp+630h] [rbp+528h] BYREF
  char v380; // [rsp+B30h] [rbp+A28h] BYREF
  __m128 v381; // [rsp+B38h] [rbp+A30h] BYREF
  __int64 v382; // [rsp+B48h] [rbp+A40h]
  __m128 v383; // [rsp+B58h] [rbp+A50h] BYREF
  __m256i v384; // [rsp+B68h] [rbp+A60h]
  _BYTE v385[20]; // [rsp+B88h] [rbp+A80h]
  _BYTE v386[4]; // [rsp+BA8h] [rbp+AA0h] BYREF
  char v387[4]; // [rsp+BACh] [rbp+AA4h] BYREF
  char v388[4]; // [rsp+BB0h] [rbp+AA8h] BYREF
  char v389[4]; // [rsp+BB4h] [rbp+AACh] BYREF
  _DWORD v390[8]; // [rsp+BB8h] [rbp+AB0h] BYREF
  struct D2D_POINT_2F v391; // [rsp+BD8h] [rbp+AD0h] BYREF

  v7 = (__m128)_xmm;
  v8 = (size_t)v351;
  v9 = LODWORD(FLOAT_N3_4028235e38);
  v10 = &v352;
  v11 = FLOAT_3_4028235e38;
  v12 = 0LL;
  v306 = this;
  v13 = (unsigned __int64)this;
  v315 = 0;
  v347[1] = 0LL;
  v14 = (detail::liberal_expansion_policy *)v351;
  v347[0] = &CRectanglesShape::`vftable';
  v354 = 0LL;
  Src = v351;
  LOBYTE(v15) = 16;
  v349 = (detail::liberal_expansion_policy *)v351;
  v16 = 0.0;
  v350 = &v352;
  v17 = 0.0;
  v352 = 0LL;
  v18 = a2;
  v19 = 0LL;
  v307 = a3;
  v20 = CRectanglesShape::IsRectangles;
  v289 = a2;
  v311 = 0LL;
  v299 = 0LL;
  v300 = 0;
  v310 = _xmm;
  if ( !*(_BYTE *)(v13 + 4490) || (v71 = *(_QWORD **)(v13 + 16), !*v71) && !v71[2] )
  {
LABEL_2:
    v21 = 0;
    v284 = 0;
    if ( (*((_BYTE *)v18 + 24) & 1) != 0 )
    {
      v12 = *(_QWORD *)v18;
      goto LABEL_17;
    }
    v381 = *(__m128 *)v18;
    if ( v14 != (detail::liberal_expansion_policy *)v8 )
    {
      v383.m128_u64[1] = (__int64)((__int64)v14 - v8) >> 4;
      v14 = (detail::liberal_expansion_policy *)((char *)v14 - 16 * v383.m128_u64[1]);
      v383.m128_u64[0] = v8;
      v349 = v14;
      v384.m256i_i64[0] = 0LL;
    }
    if ( v19 )
    {
      v22 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v19 + 16LL);
      if ( v22 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          (CCachedVisualImage *)v19,
          (__int64)v22,
          (__int64)v20);
      else
        (*(void (__fastcall **)(unsigned __int64, __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *)))(*(_QWORD *)v19 + 16LL))(
          v19,
          v22,
          v20);
      v10 = v350;
      v14 = v349;
      v8 = (size_t)Src;
      v352 = 0LL;
    }
    v13 = (__int64)((__int64)v14 - v8) >> 4;
    v371 = (__m128i)v381;
    if ( !(((char *)v10 - (char *)v14) >> 4) )
    {
      v123 = (__int64)((__int64)v10 - v8) >> 4;
      if ( v13 + 1 < v13 )
        goto LABEL_176;
      v253 = detail::liberal_expansion_policy::expand(v14, v123, v13 + 1);
      v254 = operator new[](saturated_mul(v253, 0x10uLL));
      v255 = Src;
      v381.m128_u64[0] = (unsigned __int64)v254;
      v382 = 0LL;
      v256 = v254;
      v381.m128_u64[1] = v13;
      v334 = 0LL;
      v333 = (__m128i)v381;
      v257 = v349 - (detail::liberal_expansion_policy *)Src;
      v258 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                       &v333,
                       (v349 - (detail::liberal_expansion_policy *)Src) >> 4);
      memmove_0(v258, v255, v257);
      v259 = Src;
      v334 = ((__int64)((__int64)v258 + v257) - v333.m128i_i64[0]) >> 4;
      Src = v256;
      if ( v259 == v351 )
        v259 = 0LL;
      operator delete(v259);
      v8 = (size_t)Src;
      v18 = v289;
      v14 = (detail::liberal_expansion_policy *)((char *)Src + 16 * v13);
      v350 = (CCachedVisualImage **)((char *)Src + 16 * v253);
      v349 = v14;
    }
    v382 = 0LL;
    v23 = (__int64)((__int64)v14 - v8) >> 4;
    v381.m128_u64[1] = 1LL;
    v384.m256i_i64[0] = 0LL;
    v24 = v23 - v13;
    v381.m128_u64[0] = v8 + 16 * v23;
    v3.m128_u64[0] = v381.m128_u64[0];
    v383 = v381;
    if ( !v381.m128_u64[0] )
      goto LABEL_121;
    v25 = v23 - v13;
    if ( v24 > 1 )
      v25 = 1LL;
    v26 = 16 * v25;
    v27 = (detail::liberal_expansion_policy *)((char *)v14 - v26);
    if ( v14 != (detail::liberal_expansion_policy *)((char *)v14 - v26) )
    {
      v263 = v383.m128_u64[1];
      v264 = 1LL;
      v265 = (_OWORD *)(v381.m128_u64[0] + 16);
      do
      {
        v14 = (detail::liberal_expansion_policy *)((char *)v14 - 16);
        if ( !v3.m128_u64[0] )
          goto LABEL_121;
        if ( !v264 )
          goto LABEL_121;
        --v264;
        --v265;
        if ( v264 >= v263 )
          goto LABEL_121;
        *v265 = *(_OWORD *)v14;
      }
      while ( v14 != v27 );
      v14 = v349;
    }
    if ( v24 <= 1 )
    {
LABEL_15:
      v14 = (detail::liberal_expansion_policy *)((char *)v14 + 16);
      v12 = (__int64)v347;
      v349 = v14;
      *(__m128i *)(v8 + 16 * v13) = v371;
      v13 = (unsigned __int64)v306;
LABEL_16:
      v300 = 0;
      goto LABEL_17;
    }
    v382 = 0LL;
    v381.m128_u64[0] = v8;
    v381.m128_u64[1] = v23;
    v384.m256i_i64[0] = 0LL;
    v3.m128_i32[0] = v8;
    if ( v23 && (!v8 || v23 < 0) )
      goto LABEL_121;
    if ( (__int64)(16 * v23 - 16 - 16 * v13) >> 4 > 0 )
    {
      v102 = v23 < (unsigned __int64)((__int64)(16 * v23 - 16 - 16 * v13) >> 4);
    }
    else
    {
      if ( (__int64)(16 * v23 - 16 - 16 * v13) >> 4 >= 0 )
      {
LABEL_131:
        memmove_0(
          (void *)(16 * v23 + v381.m128_u64[0] - (16 * v23 - 16 - 16 * v13)),
          (const void *)(v8 + 16 * v13),
          16 * v23 - 16 - 16 * v13);
        v14 = v349;
        goto LABEL_15;
      }
      v102 = _mm_srli_si128((__m128i)v381, 8).m128i_u64[0] - v23 < -((__int64)(16 * v23 - 16 - 16 * v13) >> 4);
    }
    if ( v102 )
      goto LABEL_121;
    goto LABEL_131;
  }
  v346 = 0LL;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v234 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(**(_QWORD **)a2 + 48LL))(
             *(_QWORD *)a2,
             &v346,
             0LL);
    LODWORD(v19) = v234;
    if ( v234 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v234, 0x3A0u, 0LL);
      goto LABEL_232;
    }
  }
  else
  {
    v346 = *(struct D2D_RECT_F *)a2;
  }
  v72 = *(CRectanglesShape ***)(v13 + 16);
  if ( *(_BYTE *)(v13 + 4489) )
    v73 = (__int32 *)(v13 + 56);
  else
    v73 = 0LL;
  v341 = 0;
  v74 = 0LL;
  if ( !*((_BYTE *)v72 + 108) )
  {
    v75 = *v72;
    v290 = 0;
    v76 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)v75 + 64LL);
    if ( v76 == CRoundedRectangleShape::IsRectangles )
    {
      if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*((_QWORD *)v75 + 2)
                                                                                               + 16LL)) )
        goto LABEL_93;
      v290 = 1;
    }
    else
    {
      if ( v76 == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v75, &v290);
      }
      else if ( v76 == CRegionShape::IsRectangles )
      {
        IsRectangles = CRegionShape::IsRectangles(v75, &v290);
      }
      else
      {
        IsRectangles = ((__int64 (__fastcall *)(CRectanglesShape *, unsigned int *, bool (__fastcall *)(CRectanglesShape *__hidden, unsigned int *)))v76)(
                         v75,
                         &v290,
                         CRectanglesShape::IsRectangles);
      }
      if ( !IsRectangles || v290 != 1 )
      {
LABEL_93:
        if ( (*(unsigned int (__fastcall **)(CRectanglesShape *))(*(_QWORD *)*v72 + 8LL))(*v72) )
          goto LABEL_94;
      }
    }
    v171 = *v72;
    if ( v73 )
    {
      v172 = v73[1];
      v383.m128_i32[0] = *v73;
      v173 = v73[2];
      *(_QWORD *)&v385[12] = 1065353216LL;
      v384.m256i_i32[0] = v173;
      v383.m128_i32[1] = v172;
      v174 = v73[3];
      *(_OWORD *)&v384.m256i_u64[1] = 0LL;
      v383.m128_u64[1] = 0LL;
      v175 = v73[4];
      v384.m256i_i32[1] = v174;
      v3.m128_i32[0] = v73[5];
      *(_DWORD *)v385 = v175;
      *(_QWORD *)&v385[4] = v3.m128_u32[0];
      v384.m256i_i64[3] = 1065353216LL;
      *(_WORD *)&v385[16] = 10248;
      CMILMatrix::Multiply(&v383, (const struct CMILMatrix *)(v72 + 4), (struct CMILMatrix *)&v338);
      v74 = &v338;
    }
    else
    {
      v74 = (__m128 *)(v72 + 4);
    }
    goto LABEL_267;
  }
  if ( !CShapePtr::IsAxisAlignedRectangle(v72 + 2)
    && (*(unsigned int (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v72[2] + 8LL))(v72[2]) )
  {
    goto LABEL_94;
  }
  v171 = v72[2];
  if ( v73 )
  {
    v242 = *(float *)v73;
    v74 = &v338;
    v243 = *((float *)v73 + 2);
    v244 = *((float *)v73 + 3);
    v245 = *((float *)v73 + 1);
    v246 = *((float *)v73 + 4);
    v4 = *((float *)v73 + 5);
    *(_OWORD *)&v384.m256i_u64[1] = 0LL;
    *(_QWORD *)&v385[12] = 0x28083F800000LL;
    v247 = (__m128)v383.m128_u64[0];
    *(_DWORD *)&v385[8] = 0;
    v384.m256i_i64[3] = 1065353216LL;
    v247.m128_f32[0] = v242;
    v248 = *(__m128 *)v384.m256i_i8;
    v248.m128_f32[0] = v243;
    v249 = _mm_shuffle_ps(v247, v247, 225);
    v250 = _mm_shuffle_ps(v248, v248, 225);
    v249.m128_f32[0] = v245;
    v250.m128_f32[0] = v244;
    *(__m128 *)v384.m256i_i8 = _mm_shuffle_ps(v250, v250, 225);
    v341 = 10248;
    v339 = v384;
    v251 = *(__m128 *)v385;
    v383 = _mm_shuffle_ps(v249, v249, 225);
    v251.m128_f32[0] = v246;
    v338 = v383;
    v252 = _mm_shuffle_ps(v251, v251, 225);
    v252.m128_f32[0] = v4;
    v3 = _mm_shuffle_ps(v252, v252, 225);
    *(__m128 *)v385 = v3;
    v340 = v3;
  }
LABEL_267:
  if ( !v171 )
    goto LABEL_94;
  if ( !(*(unsigned int (__fastcall **)(CRectanglesShape *))(*(_QWORD *)v171 + 8LL))(v171) )
  {
    v176 = CRoundedRectangleGeometryData::FillContainsRect(*((_QWORD *)v171 + 2) + 16LL, &v346, v74);
    goto LABEL_270;
  }
  v344 = 0LL;
  v176 = 0;
  v177 = *(void (__fastcall **)(CRectanglesShape *, __int128 *, _QWORD))(*(_QWORD *)v171 + 48LL);
  if ( (char *)v177 == (char *)CRectanglesShape::GetTightBounds )
  {
    CRectanglesShape::GetTightBounds(v171, &v344, 0LL);
  }
  else if ( (char *)v177 == (char *)CRegionShape::GetTightBounds )
  {
    CRegionShape::GetTightBounds(v171, &v344, 0LL);
  }
  else
  {
    v177(v171, &v344, 0LL);
  }
  v3.m128_i32[0] = v344;
  if ( *((float *)&v344 + 2) > *(float *)&v344 && *((float *)&v344 + 3) > *((float *)&v344 + 1) )
  {
    if ( *(float *)&v344 <= -3.4028235e38 )
      LODWORD(v344) = -8388609;
    else
      *(float *)&v344 = *(float *)&v344 + -0.015625;
    if ( *((float *)&v344 + 1) <= -3.4028235e38 )
      DWORD1(v344) = -8388609;
    else
      *((float *)&v344 + 1) = *((float *)&v344 + 1) + -0.015625;
    if ( *((float *)&v344 + 2) >= 3.4028235e38 )
      DWORD2(v344) = 2139095039;
    else
      *((float *)&v344 + 2) = *((float *)&v344 + 2) + 0.015625;
    if ( *((float *)&v344 + 3) >= 3.4028235e38 )
      HIDWORD(v344) = 2139095039;
    else
      *((float *)&v344 + 3) = *((float *)&v344 + 3) + 0.015625;
    v345 = 0LL;
    if ( v74 )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(v74, v178, v20, v179) )
      {
        if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v74) )
        {
          *(float *)&v345 = (float)(v346.left * v74->m128_f32[0]) + v74[3].m128_f32[0];
          v3.m128_f32[0] = *(float *)&v345;
          v180 = *(float *)&v345;
          *((float *)&v345 + 1) = (float)(v346.top * v74[1].m128_f32[1]) + v74[3].m128_f32[1];
          top = *((float *)&v345 + 1);
          v4 = *((float *)&v345 + 1);
          right = (float)(v346.right * v74->m128_f32[0]) + v74[3].m128_f32[0];
          *((float *)&v345 + 2) = right;
          bottom = (float)(v346.bottom * v74[1].m128_f32[1]) + v74[3].m128_f32[1];
          *((float *)&v345 + 3) = bottom;
          if ( v74->m128_f32[0] <= 0.0 || v74[1].m128_f32[1] <= 0.0 )
          {
            if ( *(float *)&v345 > right )
            {
              *(float *)&v345 = right;
              v3.m128_f32[0] = right;
              right = v180;
              *((float *)&v345 + 2) = v180;
            }
            if ( *((float *)&v345 + 1) > bottom )
            {
              *((float *)&v345 + 1) = bottom;
              top = bottom;
              bottom = v4;
              *((float *)&v345 + 3) = v4;
            }
          }
        }
        else
        {
          CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v74, &v346, &v391);
          v337.m128i_i64[0] = 4LL;
          v337.m128i_i64[1] = (__int64)&v391;
          v381 = (__m128)v337;
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
            &v345,
            &v381);
          bottom = *((float *)&v345 + 3);
          right = *((float *)&v345 + 2);
          top = *((float *)&v345 + 1);
          v3.m128_i32[0] = v345;
        }
        goto LABEL_432;
      }
      v3.m128_f32[0] = v346.left + v74[3].m128_f32[0];
      *(float *)&v345 = v3.m128_f32[0];
      top = v346.top + v74[3].m128_f32[1];
      *((float *)&v345 + 1) = top;
      right = v346.right + v74[3].m128_f32[0];
      *((float *)&v345 + 2) = right;
      bottom = v346.bottom + v74[3].m128_f32[1];
    }
    else
    {
      v3.m128_i32[0] = LODWORD(v346.left);
      top = v346.top;
      right = v346.right;
      bottom = v346.bottom;
      *(_QWORD *)&v345 = *(_QWORD *)&v346.left;
      DWORD2(v345) = LODWORD(v346.right);
    }
    *((float *)&v345 + 3) = bottom;
LABEL_432:
    if ( right <= v3.m128_f32[0]
      || bottom <= top
      || v3.m128_f32[0] >= *(float *)&v344
      && top >= *((float *)&v344 + 1)
      && *((float *)&v344 + 2) >= right
      && *((float *)&v344 + 3) >= bottom )
    {
      v176 = 1;
    }
  }
LABEL_270:
  if ( v176 )
  {
    v19 = (unsigned __int64)v352;
    LOBYTE(v15) = 16;
    v10 = v350;
    v14 = v349;
    v8 = (size_t)Src;
    goto LABEL_2;
  }
LABEL_94:
  v77 = *(_QWORD *)(v13 + 16);
  v21 = 1;
  v284 = 0;
  if ( *(_BYTE *)(v77 + 108) )
  {
    if ( !*(_QWORD *)(v77 + 16) )
    {
      v274 = CCpuClip::ConvertContextDependentClipToLocal((CCpuClip *)v77);
      LODWORD(v19) = v274;
      if ( v274 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v274, 0x85u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3B0u, 0LL);
        goto LABEL_232;
      }
    }
    v12 = *(_QWORD *)(v77 + 16);
    v3.m128_i32[0] = _xmm;
    BYTE1(v315) = BYTE1(v315) & 0xC0 | 0x29;
    v295 = v12;
    v312 = _xmm;
    *(_OWORD *)v313.m256i_i8 = _xmm;
    *(_OWORD *)&v313.m256i_u64[2] = _xmm;
    v314 = *(__m128 *)&_xmm.r;
    LOBYTE(v315) = -86;
  }
  else
  {
    v12 = *(_QWORD *)v77;
    *(_QWORD *)&matrix.m11 = *(_QWORD *)(v77 + 32);
    *(_QWORD *)&matrix.m[1][0] = *(_QWORD *)(v77 + 48);
    *(_QWORD *)&matrix.m[2][0] = *(_QWORD *)(v77 + 80);
    v295 = v12;
    D2D1InvertMatrix(&matrix);
    *(_OWORD *)&v384.m256i_u64[1] = 0LL;
    *(_QWORD *)&v385[12] = 0x28083F800000LL;
    v78 = (__m128)v383.m128_u64[0];
    *(_DWORD *)&v385[8] = 0;
    v384.m256i_i64[3] = 1065353216LL;
    v78.m128_f32[0] = matrix.m11;
    v79 = *(__m128 *)v384.m256i_i8;
    v79.m128_f32[0] = matrix.m21;
    v80 = _mm_shuffle_ps(v78, v78, 225);
    v81 = _mm_shuffle_ps(v79, v79, 225);
    v80.m128_f32[0] = matrix.m12;
    v81.m128_f32[0] = matrix.m22;
    *(__m128 *)v384.m256i_i8 = _mm_shuffle_ps(v81, v81, 225);
    v315 = 10248;
    v313 = v384;
    v82 = *(__m128 *)v385;
    v383 = _mm_shuffle_ps(v80, v80, 225);
    v82.m128_f32[0] = matrix.dx;
    v312 = (__int128)v383;
    v83 = _mm_shuffle_ps(v82, v82, 225);
    v83.m128_f32[0] = matrix.dy;
    v3 = _mm_shuffle_ps(v83, v83, 225);
    *(__m128 *)v385 = v3;
    v314 = v3;
  }
  if ( *(_BYTE *)(v13 + 4489) )
  {
    v84 = *(_DWORD *)(v13 + 36);
    v383.m128_i32[0] = *(_DWORD *)(v13 + 32);
    v85 = *(_DWORD *)(v13 + 40);
    *(_QWORD *)&v385[12] = 1065353216LL;
    v384.m256i_i32[0] = v85;
    v383.m128_i32[1] = v84;
    v86 = *(_DWORD *)(v13 + 44);
    *(_OWORD *)&v384.m256i_u64[1] = 0LL;
    v383.m128_u64[1] = 0LL;
    v87 = *(_DWORD *)(v13 + 48);
    v384.m256i_i32[1] = v86;
    v3.m128_i32[0] = *(_DWORD *)(v13 + 52);
    *(_DWORD *)v385 = v87;
    *(_QWORD *)&v385[4] = v3.m128_u32[0];
    v384.m256i_i64[3] = 1065353216LL;
    *(_WORD *)&v385[16] = 10248;
    CMILMatrix::Multiply((CMILMatrix *)&v312, (const struct CMILMatrix *)&v383);
  }
  v88 = *(__int64 (__fastcall **)(CPolygonShape *))(*(_QWORD *)v12 + 48LL);
  if ( (char *)v88 == (char *)CRoundedRectangleShape::GetTightBounds )
  {
    TightBounds = CRoundedRectangleShape::GetTightBounds((CPolygonShape *)v12, &v354, (CMILMatrix *)&v312);
  }
  else if ( (char *)v88 == (char *)CRectanglesShape::GetTightBounds )
  {
    TightBounds = CRectanglesShape::GetTightBounds(v12, &v354, &v312);
  }
  else if ( v88 == CShape::GetTightBounds )
  {
    TightBounds = CShape::GetTightBounds((CPolygonShape *)v12);
  }
  else
  {
    TightBounds = ((__int64 (__fastcall *)(__int64, struct D2D_RECT_F *, __int128 *))v88)(v12, &v354, &v312);
  }
  v19 = (unsigned int)TightBounds;
  if ( TightBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x3B9u, 0LL);
    goto LABEL_232;
  }
  if ( (*((_BYTE *)v18 + 24) & 1) == 0 )
  {
    v91 = *((float *)v18 + 3);
    v92 = *((float *)v18 + 2);
    v93 = *((float *)v18 + 1);
    if ( *(float *)v18 <= -3.4028235e38 )
      v94 = FLOAT_N3_4028235e38;
    else
      v94 = *(float *)v18 + -0.015625;
    if ( v93 <= -3.4028235e38 )
      v95 = FLOAT_N3_4028235e38;
    else
      v95 = v93 - 0.015625;
    if ( v92 >= 3.4028235e38 )
      v3.m128_f32[0] = FLOAT_3_4028235e38;
    else
      v3.m128_f32[0] = v92 + 0.015625;
    if ( v91 >= 3.4028235e38 )
      v96 = FLOAT_3_4028235e38;
    else
      v96 = v91 + 0.015625;
    v4 = v354.right;
    if ( v354.right <= v354.left
      || (v5 = v354.bottom, v354.bottom <= v354.top)
      || v354.left >= v94 && v354.top >= v95 && v3.m128_f32[0] >= v354.right && v96 >= v354.bottom )
    {
      v291 = 0;
      v284 = 1;
      v97 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)v12 + 64LL);
      if ( v97 == CRoundedRectangleShape::IsRectangles )
      {
        if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*(_QWORD *)(v12 + 16)
                                                                                                 + 16LL)) )
        {
LABEL_118:
          v98 = _mm_shuffle_ps((__m128)(unsigned int)v312, (__m128)(unsigned int)v312, 225);
          v98.m128_f32[0] = *((float *)&v312 + 1);
          v99 = _mm_shuffle_ps(v98, v98, 198);
          v99.m128_f32[0] = *(float *)v313.m256i_i32;
          v100 = _mm_unpacklo_ps((__m128)v314.m128_u32[0], (__m128)v314.m128_u32[1]);
          v101 = _mm_shuffle_ps(v99, v99, 39);
          v101.m128_f32[0] = *(float *)&v313.m256i_i32[1];
          v3.m128_i32[0] = _mm_shuffle_ps(v100, v100, 85).m128_u32[0];
          v7 = _mm_shuffle_ps(v101, v101, 57);
          v17 = v3.m128_f32[0];
          v311 = v100.m128_u64[0];
          v16 = v100.m128_f32[0];
          v383 = v7;
          v310 = (__int128)v7;
          goto LABEL_16;
        }
        v291 = 1;
      }
      else
      {
        if ( v97 == CRectanglesShape::IsRectangles )
        {
          v262 = CRectanglesShape::IsRectangles((CRectanglesShape *)v12, &v291);
        }
        else if ( v97 == CRegionShape::IsRectangles )
        {
          v262 = CRegionShape::IsRectangles((CRegionShape *)v12, &v291);
        }
        else
        {
          v262 = v97((CRoundedRectangleShape *)v12, &v291);
        }
        if ( !v262 || v291 != 1 )
          goto LABEL_118;
      }
      if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v312) )
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v347, &v354, v260);
        CShapePtr::~CShapePtr(&v299);
        v300 = 0;
        v12 = (__int64)v347;
        v281 = 0;
        v299 = (CRectanglesShape *)v347;
        goto LABEL_18;
      }
      goto LABEL_118;
    }
    v103 = v349;
    v15 = (detail::liberal_expansion_policy *)Src;
    v381 = *(__m128 *)v18;
    if ( v349 != Src )
    {
      v383.m128_u64[1] = (v349 - (detail::liberal_expansion_policy *)Src) >> 4;
      v103 = (detail::liberal_expansion_policy *)((char *)v349 - 16 * v383.m128_u64[1]);
      v383.m128_u64[0] = (unsigned __int64)Src;
      v349 = v103;
      v384.m256i_i64[0] = 0LL;
    }
    if ( v352 )
    {
      v104 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v352 + 16LL);
      if ( v104 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v352, (__int64)v104, v90);
      else
        (*(void (**)(void))(*(_QWORD *)v352 + 16LL))();
      v103 = v349;
      v15 = (detail::liberal_expansion_policy *)Src;
      v352 = 0LL;
    }
    v8 = (v103 - v15) >> 4;
    v372 = (__m128i)v381;
    if ( !(((char *)v350 - (char *)v103) >> 4) )
    {
      if ( v8 + 1 < v8 )
        goto LABEL_176;
      v289 = (struct CPrimitiveColor *)detail::liberal_expansion_policy::expand(
                                         (detail::liberal_expansion_policy *)(((char *)v350 - (char *)v15) >> 4),
                                         ((char *)v350 - (char *)v15) >> 4,
                                         v8 + 1);
      v231 = operator new[](saturated_mul((unsigned __int64)v289, 0x10uLL));
      v382 = 0LL;
      v232 = v231;
      v381 = (__m128)__PAIR128__(v8, (unsigned __int64)v231);
      v384.m256i_i64[0] = 0LL;
      v383 = (__m128)__PAIR128__(v8, (unsigned __int64)v231);
      std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        &v287,
        Src,
        v349,
        &v383);
      v233 = Src;
      Src = v232;
      if ( v233 == v351 )
        v233 = 0LL;
      operator delete(v233);
      v15 = (detail::liberal_expansion_policy *)Src;
      v103 = (detail::liberal_expansion_policy *)((char *)Src + 16 * v8);
      v350 = (CCachedVisualImage **)((char *)Src + 16 * (_QWORD)v289);
      v349 = v103;
    }
    v381.m128_u64[1] = 1LL;
    v105 = (v103 - v15) >> 4;
    v382 = 0LL;
    v106 = v105 - v8;
    v384.m256i_i64[0] = 0LL;
    v381.m128_u64[0] = (unsigned __int64)v15 + 16 * v105;
    v3.m128_u64[0] = v381.m128_u64[0];
    v383 = v381;
    if ( !v381.m128_u64[0] )
      goto LABEL_121;
    v107 = v105 - v8;
    if ( v106 > 1 )
      v107 = 1LL;
    v108 = 16 * v107;
    v109 = (detail::liberal_expansion_policy *)((char *)v103 - v108);
    if ( v103 != (detail::liberal_expansion_policy *)((char *)v103 - v108) )
    {
      v266 = 1LL;
      v267 = (_OWORD *)(v381.m128_u64[0] + 16);
      do
      {
        v103 = (detail::liberal_expansion_policy *)((char *)v103 - 16);
        v295 = v12;
        if ( !v3.m128_u64[0] )
          goto LABEL_121;
        if ( !v266 )
          goto LABEL_121;
        --v266;
        --v267;
        if ( v266 >= v383.m128_u64[1] )
          goto LABEL_121;
        *v267 = *(_OWORD *)v103;
      }
      while ( v103 != v109 );
      v103 = v349;
    }
    if ( v106 > 1 )
    {
      v382 = 0LL;
      v381.m128_u64[0] = (unsigned __int64)v15;
      v381.m128_u64[1] = v105;
      v384.m256i_i64[0] = 0LL;
      v3.m128_i32[0] = (int)v15;
      if ( v105 && (!v15 || v105 < 0) )
        goto LABEL_121;
      if ( (__int64)(16 * v105 - 16 - 16 * v8) >> 4 > 0 )
      {
        if ( v105 < (unsigned __int64)((__int64)(16 * v105 - 16 - 16 * v8) >> 4) )
          goto LABEL_121;
      }
      else if ( (__int64)(16 * v105 - 16 - 16 * v8) >> 4 < 0
             && _mm_srli_si128((__m128i)v381, 8).m128i_u64[0] - v105 < -((__int64)(16 * v105 - 16 - 16 * v8) >> 4) )
      {
        goto LABEL_121;
      }
      memmove_0(
        (void *)(16 * v105 + v381.m128_u64[0] - (16 * v105 - 16 - 16 * v8)),
        (char *)v15 + 16 * v8,
        16 * v105 - 16 - 16 * v8);
      v103 = v349;
    }
    v349 = (detail::liberal_expansion_policy *)((char *)v103 + 16);
    *((__m128i *)v15 + v8) = v372;
    v305 = 0LL;
    v111 = CShape::TryOptimizedCombinePaths(v347, 0LL, v12, &v312, 1, &v305);
    LODWORD(v19) = v111;
    if ( v111 < 0 )
    {
      v230 = 456;
    }
    else
    {
      v12 = v305;
      if ( v305 )
      {
LABEL_146:
        v300 = 1;
        goto LABEL_17;
      }
      v111 = CShape::D2DCombine(v347, v110, v295, &v312, 1, &v305);
      LODWORD(v19) = v111;
      if ( v111 >= 0 )
      {
        v12 = v305;
        goto LABEL_146;
      }
      v230 = 467;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v230, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v111, 0x3EFu, 0LL);
    goto LABEL_232;
  }
  v304 = 0LL;
  v206 = *(_QWORD *)v18;
  v208 = CShape::TryOptimizedCombinePaths(*(_QWORD *)v18, 0LL, v12, &v312, 1, &v304);
  LODWORD(v19) = v208;
  if ( v208 < 0 )
  {
    v261 = 456;
    goto LABEL_474;
  }
  v12 = v304;
  if ( !v304 )
  {
    v208 = CShape::D2DCombine(v206, v207, v295, &v312, 1, &v304);
    LODWORD(v19) = v208;
    if ( v208 >= 0 )
    {
      v12 = v304;
      goto LABEL_377;
    }
    v261 = 467;
LABEL_474:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v261, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v208, 0x3C5u, 0LL);
    goto LABEL_232;
  }
LABEL_377:
  CShapePtr::~CShapePtr(&v299);
  v300 = 1;
LABEL_17:
  v299 = (CRectanglesShape *)v12;
  v281 = 0;
  if ( !v12 )
  {
LABEL_485:
    v151 = v21;
    goto LABEL_223;
  }
LABEL_18:
  v28 = *(bool (__fastcall **)(LONG **))(*(_QWORD *)v12 + 16LL);
  if ( v28 == CShape::IsEmpty )
  {
    v355 = 0LL;
    v29 = *(void (__fastcall **)(__int64, __m128 *, _QWORD))(*(_QWORD *)v12 + 48LL);
    if ( (char *)v29 == (char *)CRegionShape::GetTightBounds )
    {
      v361 = 0LL;
      if ( !FastRegion::CRegion::GetBoundingRect((LONG **)(v12 + 16), &v361) )
      {
LABEL_122:
        IsEmpty = 1;
        goto LABEL_25;
      }
      v30 = 0LL;
      v30.m128_f32[0] = (float)v361.left;
      v31 = _mm_shuffle_ps(v30, v30, 225);
      v3.m128_f32[0] = (float)v361.right;
      v31.m128_f32[0] = (float)v361.top;
      v32 = _mm_shuffle_ps(v31, v31, 198);
      v32.m128_f32[0] = (float)v361.right;
      v33 = _mm_shuffle_ps(v32, v32, 39);
      v33.m128_f32[0] = (float)v361.bottom;
      v355 = _mm_shuffle_ps(v33, v33, 57);
    }
    else
    {
      v29(v12, &v355, 0LL);
    }
    if ( v355.m128_f32[2] > v355.m128_f32[0] )
    {
      v3.m128_i32[0] = v355.m128_i32[1];
      if ( v355.m128_f32[3] > v355.m128_f32[1] )
      {
        IsEmpty = 0;
        goto LABEL_25;
      }
    }
    goto LABEL_122;
  }
  if ( (char *)v28 == (char *)CRoundedRectangleShape::IsEmpty )
  {
    IsEmpty = CRoundedRectangleShape::IsEmpty((CRoundedRectangleShape *)v12);
  }
  else if ( (char *)v28 == (char *)CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty((CRectanglesShape *)v12);
  }
  else
  {
    IsEmpty = v28((LONG **)v12);
  }
LABEL_25:
  if ( IsEmpty )
    goto LABEL_485;
  v6 = FLOAT_0_000081380211;
  v35 = (__int64)&v301;
  v289 = (struct CPrimitiveColor *)&v301;
  v36 = 0;
  LODWORD(v294) = 0;
  v303 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0;
  if ( (*((_BYTE *)v18 + 24) & 1) != 0 )
  {
    v281 = 0;
    if ( *((_QWORD *)v18 + 1) )
      v35 = *((_QWORD *)v18 + 1);
    v289 = (struct CPrimitiveColor *)v35;
  }
  else
  {
    if ( *(_DWORD *)(v13 + 12) != 1 )
      v39 = *((_DWORD *)v18 + 4);
    v281 = 0;
    if ( v21 )
    {
      v112 = *(_QWORD *)(v13 + 16);
      v35 = 50529027LL;
      v113 = 50529027;
      v281 = 0;
      LODWORD(v294) = 50529027;
      if ( *(_DWORD *)(v112 + 100) == 1 )
        v113 = 0;
      if ( v284 )
      {
        v39 = v113;
        v281 = 0;
        goto LABEL_30;
      }
      v114 = 50331648;
      if ( (float)(*(float *)v18 - v354.left) <= 0.0000011920929 )
        v114 = 0;
      if ( (float)(*((float *)v18 + 1) - v354.top) > 0.0000011920929 )
        v114 |= 3u;
      if ( (float)(v354.right - *((float *)v18 + 2)) > 0.0000011920929 )
        v114 |= 0x300u;
      v115 = v21;
      if ( (float)(v354.bottom - *((float *)v18 + 3)) > 0.0000011920929 )
        v114 |= 0x30000u;
      v116 = v114;
      v117 = ~v114;
      v118 = v117 & v113 | v39 & v116;
      LODWORD(v294) = v117 & 0x3030303;
      v119 = v117 & 0x3030303;
      if ( v12 )
      {
        v292 = 0;
        v120 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)v12 + 64LL);
        if ( v120 == CRoundedRectangleShape::IsRectangles )
        {
          if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*(_QWORD *)(v12 + 16) + 16LL)) )
          {
            v39 = v118;
            v292 = 1;
            goto LABEL_30;
          }
        }
        else
        {
          if ( v120 == CRectanglesShape::IsRectangles )
          {
            v241 = CRectanglesShape::IsRectangles((CRectanglesShape *)v12, &v292);
          }
          else if ( v120 == CRegionShape::IsRectangles )
          {
            v241 = CRegionShape::IsRectangles((CRegionShape *)v12, &v292);
          }
          else
          {
            v241 = ((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD))v120)(v12, &v292, 0LL);
          }
          if ( v241 && v292 == 1 )
          {
            v39 = v118;
            goto LABEL_30;
          }
        }
        v36 = v303;
        v37 = 0LL;
        v119 = (int)v294;
        v38 = 0LL;
        v115 = v21;
      }
      v281 = 0;
      v21 = v115;
      v381 = *(__m128 *)v18;
      if ( (v119 & 0x3000000) != 0 )
        v121 = FLOAT_N3_4028235e38;
      else
        v121 = v381.m128_f32[0];
      if ( (v119 & 3) == 0 )
        v9 = v381.m128_u32[1];
      if ( (v119 & 0x300) != 0 )
        v122 = FLOAT_3_4028235e38;
      else
        v122 = v381.m128_f32[2];
      if ( (v119 & 0x30000) == 0 )
        v11 = v381.m128_f32[3];
      if ( v36 )
      {
        v35 = v302;
        v281 = 0;
      }
      else
      {
        v36 = 1;
        v302 = 0;
        v301 = _xmm;
        v35 = 0LL;
        v303 = 1;
      }
      if ( v36 == 1 )
      {
        v281 = 0;
        if ( (float)(v121 - *(float *)&v301) > 0.0000011920929 )
          v381.m128_f32[0] = v121;
        else
          v381.m128_i32[0] = v301;
        v197 = (float)(v121 - *(float *)&v301) > 0.0000011920929 ? 0x3000000 : 0;
        if ( (float)(*(float *)&v9 - *((float *)&v301 + 1)) <= 0.0000011920929 )
        {
          v381.m128_i32[1] = DWORD1(v301);
        }
        else
        {
          v381.m128_i32[1] = v9;
          v197 |= 3u;
        }
        if ( (float)(*((float *)&v301 + 2) - v122) <= 0.0000011920929 )
        {
          v381.m128_i32[2] = DWORD2(v301);
        }
        else
        {
          v381.m128_f32[2] = v122;
          v197 |= 0x300u;
        }
        v3.m128_i32[0] = HIDWORD(v301);
        if ( (float)(*((float *)&v301 + 3) - v11) <= 0.0000011920929 )
        {
          v381.m128_i32[3] = HIDWORD(v301);
        }
        else
        {
          v381.m128_f32[3] = v11;
          v197 |= 0x30000u;
        }
        v302 = v35 & ~v197 | v39 & v197;
        v301 = (__int128)v381;
      }
      else if ( v36 == 2 )
      {
        DecomposeRectangleEdgeFlags(v39, &v381.m128_u32[3], &v381, &v381.m128_i16[2], &v381.m128_u16[4]);
        v383.m128_u64[0] = __PAIR64__(v9, LODWORD(v121));
        v229 = 0;
        v383.m128_u64[1] = __PAIR64__(v9, LODWORD(v122));
        v384.m256i_i64[0] = __PAIR64__(LODWORD(v11), LODWORD(v122));
        v384.m256i_i64[1] = __PAIR64__(LODWORD(v11), LODWORD(v121));
        do
        {
          LODWORD(v295) = v381.m128_i32[v229];
          if ( v229 >= 4uLL )
          {
            ((void (__fastcall *)(_QWORD, __int64, void *))`gsl::details::get_terminate_handler'::`2'::handler)(
              v229,
              v35,
              &unk_18032D960);
            __debugbreak();
          }
          CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(
            (unsigned int)&v301,
            (unsigned int)&unk_18032D960 + 32 * v229,
            (unsigned int)&v383 + 8 * v229,
            (unsigned int)&v295,
            LODWORD(FLOAT_0_000081380211));
          ++v229;
        }
        while ( v229 < 4 );
      }
      v289 = (struct CPrimitiveColor *)&v301;
    }
  }
LABEL_30:
  LOBYTE(v295) = 0;
  *(_QWORD *)v296 = 1015021568LL;
  v366 = v369;
  v367 = v369;
  v368 = &v370;
  v356 = v359;
  v357 = v359;
  p_matrix = &matrix;
  lpMem = v379;
  v377 = v379;
  v378 = &v380;
  *(_OWORD *)&v296[8] = 0LL;
  memset(v297, 0, sizeof(v297));
  if ( !v12 )
  {
LABEL_33:
    v9 = HIDWORD(v310);
    v4 = *((float *)&v310 + 2);
    v5 = *((float *)&v310 + 1);
    v7.m128_i32[0] = v310;
    goto LABEL_34;
  }
  v293 = 0;
  v40 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden, unsigned int *))(*(_QWORD *)v12 + 64LL);
  if ( v40 == CRoundedRectangleShape::IsRectangles )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(*(_QWORD *)(v12 + 16)
                                                                                             + 16LL)) )
      goto LABEL_33;
    v35 = 1LL;
    v293 = 1;
  }
  else
  {
    if ( v40 == CRectanglesShape::IsRectangles )
    {
      v191 = CRectanglesShape::IsRectangles((CRectanglesShape *)v12, &v293);
    }
    else if ( v40 == CRegionShape::IsRectangles )
    {
      v191 = CRegionShape::IsRectangles((CRegionShape *)v12, &v293);
    }
    else
    {
      v191 = ((__int64 (__fastcall *)(__int64, unsigned int *, __int64, __int64))v40)(v12, &v293, v37, v38);
    }
    if ( !v191 || v293 != 1 )
      goto LABEL_33;
    v35 = 1LL;
  }
  v9 = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  LODWORD(v4) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  LODWORD(v5) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  if ( v7.m128_f32[0] == 1.0 && v5 == 0.0 && v4 == 0.0 && *(float *)&v9 == 1.0 && v16 == 0.0 && v17 == 0.0 )
  {
    v353 = 0LL;
    v192 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(*(_QWORD *)v12 + 48LL);
    if ( (char *)v192 == (char *)CRectanglesShape::GetTightBounds )
    {
      v193 = *(struct D2D_RECT_F **)(v12 + 16);
      if ( *(struct D2D_RECT_F **)(v12 + 24) == v193 )
      {
        v281 = 0;
      }
      else
      {
        v194 = 1LL;
        v353 = *v193;
        v195 = *(_QWORD *)(v12 + 16);
        if ( (unsigned __int64)((*(_QWORD *)(v12 + 24) - v195) >> 4) > 1 )
        {
          v281 = 0;
          v196 = 16LL;
          do
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
              &v353.left,
              (float *)(v195 + v196));
            v195 = *(_QWORD *)(v12 + 16);
            v196 += 16LL;
            ++v194;
          }
          while ( v194 < (*(_QWORD *)(v12 + 24) - v195) >> 4 );
        }
      }
    }
    else if ( (char *)v192 == (char *)CRegionShape::GetTightBounds )
    {
      v362 = 0LL;
      if ( FastRegion::CRegion::GetBoundingRect((LONG **)(v12 + 16), &v362) )
      {
        v225 = 0LL;
        v225.m128_f32[0] = (float)v362.left;
        v226 = _mm_shuffle_ps(v225, v225, 225);
        v226.m128_f32[0] = (float)v362.top;
        v227 = _mm_shuffle_ps(v226, v226, 198);
        v227.m128_f32[0] = (float)v362.right;
        v228 = _mm_shuffle_ps(v227, v227, 39);
        v228.m128_f32[0] = (float)v362.bottom;
        v353 = (struct D2D_RECT_F)_mm_shuffle_ps(v228, v228, 57);
      }
      v281 = 0;
    }
    else
    {
      if ( v192 == CRoundedRectangleShape::GetTightBounds )
        v184 = CRoundedRectangleShape::GetTightBounds((CPolygonShape *)v12, &v353, 0LL);
      else
        v184 = v192((CPolygonShape *)v12, &v353, 0LL);
      v185 = v184;
      LODWORD(v19) = v184;
      if ( v184 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v184, 0x140u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v185, 0x478u, 0LL);
        v186 = lpMem;
        v187 = (v377 - (_BYTE *)lpMem) >> 5;
        if ( v187 )
          v377 -= 32 * v187;
        lpMem = 0LL;
        if ( v186 != v379 && v186 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v186);
        }
        v188 = v356;
        if ( v357 != v356 )
          v357 = (char *)v356;
        v356 = 0LL;
        if ( v188 != v359 && v188 )
        {
          v210 = GetProcessHeap();
          HeapFree(v210, 0, v188);
        }
        v189 = v366;
        v190 = (v367 - (_BYTE *)v366) >> 2;
        if ( v190 )
          v367 -= 4 * v190;
        v366 = 0LL;
        if ( v189 != v369 && v189 )
        {
          v211 = GetProcessHeap();
          HeapFree(v211, 0, v189);
        }
        if ( v303 == -1LL || !v303 || v303 == 1LL )
          goto LABEL_232;
LABEL_314:
        std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(&v301);
        goto LABEL_232;
      }
      v281 = 0;
    }
    left = v353.left;
    BYTE4(v297[0]) = ((unsigned __int8)v294 & 3) == 0;
    v143 = v353.bottom;
    LODWORD(v297[0]) = v39;
    BYTE5(v297[0]) = ((unsigned __int16)v294 & 0x300) == 0;
    *(struct D2D_RECT_F *)&v296[8] = v353;
    BYTE6(v297[0]) = ((unsigned int)v294 & 0x30000) == 0;
    BYTE12(v297[1]) = 1;
    BYTE7(v297[0]) = ((unsigned int)v294 & 0x3000000) == 0;
    v148 = 0;
    if ( (v39 & 0x300) != 0x300 )
      v148 = (v39 & 3) != 3 && (v39 & 0x3000000) != 50331648;
    v141 = (v39 & 0x30000) == 196608 || !v148;
    if ( *(_BYTE *)(v13 + 4491) )
    {
      v149 = (unsigned __int8)v295;
      if ( (float)((float)(v353.right - v353.left) * (float)(v353.bottom - v353.top)) >= (float)CCommonRegistryData::MegaRectSize )
        v149 = 1;
      LODWORD(v295) = v149;
    }
    LOBYTE(v15) = v21;
    goto LABEL_213;
  }
LABEL_34:
  v41 = *(_QWORD *)(v13 + 168);
  v42 = v21;
  v281 = 1;
  v21 = 0;
  LOBYTE(v15) = v42;
  if ( v41 )
  {
    v43 = *(_QWORD *)(v41 + 16);
    v44 = (__int64)(*(_QWORD *)(v41 + 24) - v43) >> 3;
    if ( v44 )
    {
      v383.m128_u64[1] = (__int64)(*(_QWORD *)(v41 + 24) - v43) >> 3;
      v383.m128_u64[0] = v43;
      *(_QWORD *)(v41 + 24) += -8 * v44;
      v384.m256i_i64[0] = 0LL;
    }
    goto LABEL_37;
  }
  v201 = CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc(0LL, v35, v37, v38);
  if ( v201 )
  {
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(v201);
    *v202 = &CPolygonBuilder::`vftable';
    v202[2] = v202 + 5;
    v202[3] = v202 + 5;
    v202[4] = v202 + 45;
    v203 = *(_QWORD *)(v13 + 168);
    *(_QWORD *)(v13 + 168) = v202;
    (*(void (__fastcall **)(_QWORD *))(*v202 + 8LL))(v202);
  }
  else
  {
    v203 = *(_QWORD *)(v13 + 168);
    v38 = 0LL;
    *(_QWORD *)(v13 + 168) = 0LL;
  }
  if ( v203 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v203 + 16LL))(v203);
  if ( !*(_QWORD *)(v13 + 168) )
  {
    LODWORD(v19) = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x493u, 0LL);
    v204 = (v377 - (_BYTE *)lpMem) >> 5;
    if ( v204 )
      v377 -= 32 * v204;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&lpMem);
    if ( v357 != v356 )
      v357 = (char *)v356;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v356);
    v205 = (v367 - (_BYTE *)v366) >> 2;
    if ( v205 )
      v367 -= 4 * v205;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v366);
    if ( v303 == -1LL || !v303 || v303 == 1LL )
      goto LABEL_232;
    goto LABEL_314;
  }
LABEL_37:
  v45 = *(struct ID2D1GeometrySink **)(v13 + 168);
  v46 = *(int (**)(CPolygonShape *__hidden, struct ID2D1GeometrySink *))(*(_QWORD *)v12 + 32LL);
  if ( (char *)v46 == (char *)CRoundedRectangleShape::GetOutline )
  {
    LODWORD(v19) = 0;
    if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(*(_QWORD *)(v12 + 16)
                                                                                               + 16LL)) )
    {
      LODWORD(v19) = CShape::GetOutline((CShape *)v12, v45);
      if ( (v19 & 0x80000000) != 0LL )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xFBu, 0LL);
    }
    else
    {
      CRoundedRectangleShape::AddNonIntersectedD2DGeometry((CRoundedRectangleShape *)v12, v45);
    }
  }
  else
  {
    v198 = *(struct ID2D1GeometrySink **)(v13 + 168);
    if ( v46 == CPolygonShape::GetOutline )
      Outline = CPolygonShape::GetOutline((CPolygonShape *)v12, v198);
    else
      Outline = ((__int64 (__fastcall *)(__int64, struct ID2D1GeometrySink *, __int64, __int64))v46)(
                  v12,
                  v198,
                  v37,
                  v38);
    LODWORD(v19) = Outline;
  }
  if ( (v19 & 0x80000000) != 0LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x49Au, 0LL);
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(&lpMem);
    detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>(&v356);
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(&v366);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v301);
    goto LABEL_232;
  }
  if ( v7.m128_f32[0] != 1.0 || v5 != 0.0 || v4 != 0.0 || *(float *)&v9 != 1.0 || v16 != 0.0 || v17 != 0.0 )
  {
    v47 = *(_QWORD *)(v13 + 168);
    v48 = 0LL;
    v49 = 0;
    v50 = *(_QWORD *)(v47 + 16);
    if ( (*(_QWORD *)(v47 + 24) - v50) >> 3 )
    {
      do
      {
        ++v49;
        v3.m128_f32[0] = (float)((float)(v5 * *(float *)(v50 + 8 * v48))
                               + (float)(*(float *)&v9 * *(float *)(v50 + 8 * v48 + 4)))
                       + v17;
        *(float *)(v50 + 8 * v48) = (float)((float)(v4 * *(float *)(v50 + 8 * v48 + 4))
                                          + (float)(*(float *)(v50 + 8 * v48) * v7.m128_f32[0]))
                                  + v16;
        *(_DWORD *)(v50 + 8 * v48 + 4) = v3.m128_i32[0];
        v50 = *(_QWORD *)(v47 + 16);
        v48 = v49;
      }
      while ( v49 < (unsigned __int64)((*(_QWORD *)(v47 + 24) - v50) >> 3) );
    }
  }
  v51 = v366;
  v52 = 0;
  v53 = v367;
  v54 = (char)v15;
  BYTE12(v297[1]) = 0;
  v55 = *(detail::liberal_expansion_policy **)(v13 + 168);
  v8 = (v367 - (_BYTE *)v366) >> 2;
  v282 = (char)v15;
  v294 = (char *)v366;
  v56 = (unsigned int)((__int64)(*((_QWORD *)v55 + 3) - *((_QWORD *)v55 + 2)) >> 3);
  *(_QWORD *)&v296[8] = v56;
  *(_QWORD *)&v296[16] = *((_QWORD *)v55 + 2);
  v298 = (struct _D3DCOLORVALUE *)v8;
  if ( v56 <= v8 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
      &v366,
      (__int64)(4 * v56) >> 2,
      (v367 - ((_BYTE *)v366 + 4 * v56)) >> 2);
  }
  else
  {
    v19 = v56 - v8;
    v309 = v19;
    if ( (v368 - v367) >> 2 < v19 )
    {
      if ( v8 + v19 < v8 )
        goto LABEL_176;
      v220 = detail::liberal_expansion_policy::expand(v55, (v368 - (_BYTE *)v366) >> 2, v8 + v19);
      v381.m128_u64[0] = (unsigned __int64)operator new[](saturated_mul(v220, 4uLL));
      v221 = v381.m128_u64[0];
      v381.m128_u64[1] = v8;
      v222 = v366;
      v382 = 0LL;
      v332 = 0LL;
      v331 = (__m128i)v381;
      std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
        &v331,
        (v367 - (_BYTE *)v366) >> 2);
      v223 = std::_Uninitialized_move_unchecked<std::move_iterator<Mesh::VertexAAOffsetDesc *>,Mesh::VertexAAOffsetDesc *>(v222);
      v332 = (v223 - v331.m128i_i64[0]) >> 2;
      v224 = (void *)detail::expandable_buffer_base<bool,40>::replace(&v366, v221);
      operator delete(v224);
      v51 = v366;
      v52 = 0;
      v8 = (size_t)v298;
      v19 = v309;
      v54 = v282;
      v294 = (char *)v366;
      v53 = (char *)v366 + 4 * (_QWORD)v298;
      v368 = (char *)v366 + 4 * v220;
      v367 = v53;
    }
    v287.m128i_i64[1] = v19;
    v57 = ((char *)v53 - v51) >> 2;
    v298 = (struct _D3DCOLORVALUE *)v57;
    v58 = v57 - v8;
    v288 = 0LL;
    v381.m128_u64[0] = v57 - v8;
    v287.m128i_i64[0] = (__int64)&v51[4 * v57];
    v3.m128_i32[0] = (_DWORD)v51 + 4 * v57;
    if ( v19 && (!&v51[4 * v57] || (v19 & 0x8000000000000000uLL) != 0LL) )
      goto LABEL_121;
    v288 = v19;
    v59 = v57 - v8;
    if ( v19 < v58 )
      v59 = v19;
    v383 = (__m128)v287;
    v384.m256i_i64[0] = v19;
    LOBYTE(v15) = v54;
    v21 = 0;
    v60 = 4 * v59;
    if ( v53 != &v53[v60 / 0xFFFFFFFFFFFFFFFCuLL] )
    {
      v275 = &v53[v60 / 0xFFFFFFFFFFFFFFFCuLL];
      do
      {
        v21 = v52;
        LOBYTE(v15) = v54;
        --v53;
        stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>::operator--(&v383);
        v276 = (_DWORD *)stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>::operator->(&v383);
        v54 = (char)v15;
        v52 = v21;
        *v276 = *v53;
      }
      while ( v53 != v275 );
      v53 = v367;
      v13 = (unsigned __int64)v306;
      v57 = (__int64)v298;
      v51 = v294;
      v58 = v381.m128_u64[0];
    }
    if ( v58 > v19 )
    {
      v287.m128i_i64[1] = v57;
      v287.m128i_i64[0] = (__int64)v51;
      v288 = 0LL;
      v381 = (__m128)v287;
      v382 = 0LL;
      stdext::checked_array_iterator<float *>::operator+=(&v381, v57);
      v3.m128_i32[0] = v382;
      v383 = v381;
      v384.m256i_i64[0] = v382;
      std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
        &v287,
        &v294[4 * v8],
        &v294[4 * ((_QWORD)v298 - v19)],
        &v383);
      v53 = v367;
    }
    v367 = &v53[v19];
    if ( v19 )
      memset_0(&v294[4 * v8], 0, 4 * v19);
  }
  v61 = v357;
  v62 = v21;
  v19 = (unsigned __int64)v356;
  v63 = v357 - (_BYTE *)v356;
  v64 = (char)v15;
  if ( *(_QWORD *)&v296[8] <= (unsigned __int64)(v357 - (_BYTE *)v356) )
  {
    detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::clear_region(
      &v356,
      *(_QWORD *)&v296[8],
      v357 - ((_BYTE *)v356 + *(_QWORD *)&v296[8]),
      (unsigned __int8)v15);
  }
  else
  {
    v8 = *(_QWORD *)&v296[8] - v63;
    if ( (char *)p_matrix - v357 < *(_QWORD *)&v296[8] - v63 )
    {
      if ( *(_QWORD *)&v296[8] < v63 )
        goto LABEL_176;
      v277 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)((char *)p_matrix - (_BYTE *)v356),
               (char *)p_matrix - (_BYTE *)v356,
               *(unsigned __int64 *)&v296[8]);
      v287.m128i_i64[0] = (__int64)operator new[](v277);
      v287.m128i_i64[1] = v63;
      v288 = 0LL;
      v383 = (__m128)v287;
      v308 = (void *)v287.m128i_i64[0];
      v384.m256i_i64[0] = 0LL;
      std::uninitialized_move<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(
        &v287,
        v356,
        v357,
        &v383);
      v278 = v308;
      v308 = 0LL;
      v279 = (void *)detail::expandable_buffer_base<bool,40>::replace(&v356, v278);
      operator delete(v279);
      v357 = (char *)v356 + v63;
      p_matrix = (D2D1_MATRIX_3X2_F *)((char *)v356 + v277);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v308);
      v61 = v357;
      v62 = v21;
      v64 = (char)v15;
      v19 = (unsigned __int64)v356;
    }
    v287.m128i_i64[1] = v8;
    v65 = &v61[-v19];
    v288 = 0LL;
    v3.m128_i32[0] = 0;
    v66 = &v61[-v19 - v63];
    v381.m128_u64[0] = (unsigned __int64)&v61[-v19];
    v384.m256i_i64[0] = 0LL;
    v287.m128i_i64[0] = (__int64)v61;
    v383 = (__m128)v287;
    if ( v8 && (!v61 || (v8 & 0x8000000000000000uLL) != 0LL) )
      goto LABEL_121;
    v67 = (size_t)&v61[-v19 - v63];
    LOBYTE(v15) = v64;
    if ( v8 < (unsigned __int64)v66 )
      v67 = v8;
    v21 = v62;
    v68 = &v61[-v67];
    if ( v61 != &v61[-v67] )
    {
      v271 = v383.m128_u64[0];
      for ( i = v8; ; i = (size_t)v273 )
      {
        --v61;
        if ( !v271 )
          goto LABEL_121;
        if ( !i )
          goto LABEL_121;
        v298 = (struct _D3DCOLORVALUE *)(i - 1);
        if ( i - 1 >= v383.m128_u64[1] )
          goto LABEL_121;
        v273 = v298;
        *((_BYTE *)&v298->r + v271) = *v61;
        if ( v61 == v68 )
          break;
      }
      v61 = v357;
    }
    if ( (unsigned __int64)v66 > v8 )
    {
      v287.m128i_i64[1] = (__int64)v65;
      v287.m128i_i64[0] = v19;
      v288 = 0LL;
      v383 = (__m128)v287;
      v384.m256i_i64[0] = 0LL;
      stdext::checked_array_iterator<bool *>::operator+=(&v383, v65, v61);
      v3.m128_i32[0] = v384.m256i_i32[0];
      v287 = (__m128i)v383;
      v288 = v384.m256i_i64[0];
      std::move_backward<std::move_iterator<bool *>,stdext::checked_array_iterator<bool *>>(
        &v383,
        v19 + v63,
        v381.m128_u64[0] + v19 - v8,
        &v287);
      v61 = v357;
    }
    v357 = &v61[v8];
    if ( v8 )
      memset_0((void *)(v19 + v63), 0, v8);
  }
  v8 = 0LL;
  v19 = 0LL;
  if ( g_pComposition )
    v19 = *((_QWORD *)g_pComposition + 84);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12) )
    goto LABEL_181;
  v3.m128_i32[0] = _xmm;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211 )
    goto LABEL_177;
LABEL_78:
  v69 = *(_QWORD *)(v12 + 16);
  v330 = 0x28083F800000LL;
  v321[0] = v7.m128_i32[0];
  *(float *)&v321[1] = v5;
  v323 = v4;
  v324 = v9;
  v327 = v16;
  v328 = v17;
  *(_DWORD *)v385 = v8;
  v322 = v8;
  v325 = 0LL;
  v326 = 1065353216LL;
  v329 = v8;
  CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
    (const struct CRoundedRectangleGeometryData *)(v69 + 16),
    (const struct CMILMatrix *)v321,
    (struct CRoundedRectangleGeometryData *)&v383);
  v3.m128_i32[0] = v384.m256i_i32[1];
  if ( !v385[4] )
  {
    for ( j = 1; j < 4; ++j )
    {
      if ( *(float *)v384.m256i_i32 != *(float *)&v384.m256i_i32[2 * j]
        || *(float *)&v384.m256i_i32[1] != *(float *)&v384.m256i_i32[2 * j + 1] )
      {
        goto LABEL_179;
      }
    }
  }
  v146 = v383.m128_f32[2];
  v147 = v383.m128_f32[3];
  if ( v385[4] )
  {
    v146 = v383.m128_f32[2] + v383.m128_f32[0];
    v147 = v383.m128_f32[3] + v383.m128_f32[1];
  }
  if ( (float)((float)(v146 - v383.m128_f32[0]) - (float)(*(float *)v384.m256i_i32 * 2.0)) > 0.0000011920929
    && (float)((float)(v147 - v383.m128_f32[1]) - (float)(*(float *)&v384.m256i_i32[1] * 2.0)) > 0.0000011920929 )
  {
    v363 = *(_QWORD *)&v296[8];
    v365 = 0;
    v364 = *(float *)v384.m256i_i32 / *(float *)&v384.m256i_i32[1];
    std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
      v19,
      &v381,
      &v363);
    v19 = v381.m128_u64[0];
    if ( *(_QWORD *)(v381.m128_u64[0] + 48) == v8 )
    {
      v373[0] = v374;
      LODWORD(v294) = 3;
      v373[1] = v374;
      v373[2] = &v375;
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
        v373,
        *(_QWORD *)&v296[8],
        &v294);
      v383 = *(__m128 *)v296;
      v384.m256i_i64[0] = *(_QWORD *)&v296[16];
      v384.m256i_i64[1] = v373[0];
      v3.m128_i32[0] = DWORD2(v297[1]);
      *(_OWORD *)&v384.m256i_u64[2] = *(_OWORD *)((char *)v297 + 8);
      *(_QWORD *)v385 = *((_QWORD *)&v297[1] + 1);
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(v19 + 48);
      Mesh::VertexAAOffsetsResource::Create(
        (const struct Mesh::MeshDesc *)&v383,
        (struct Mesh::VertexAAOffsetsResource **)(v19 + 48));
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v373);
    }
    v124 = *(_QWORD *)(v19 + 48);
    goto LABEL_180;
  }
LABEL_179:
  while ( 1 )
  {
    v124 = v8;
LABEL_180:
    if ( v124 )
    {
      v136 = v124 + 24;
      goto LABEL_194;
    }
LABEL_181:
    v125 = v377;
    v126 = v21;
    v8 = (size_t)lpMem;
    v13 = (v377 - (_BYTE *)lpMem) >> 5;
    v127 = (unsigned __int8)v15;
    v283 = v21;
    v4 = 0.0;
    v286 = (unsigned __int8)v15;
    if ( *(_QWORD *)&v296[8] <= v13 )
    {
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        (32LL * *(_QWORD *)&v296[8]) >> 5,
        (v377 - ((_BYTE *)lpMem + 32 * *(_QWORD *)&v296[8])) >> 5);
      goto LABEL_193;
    }
    v12 = *(_QWORD *)&v296[8] - v13;
    if ( (v378 - v377) >> 5 >= *(_QWORD *)&v296[8] - v13 )
      goto LABEL_183;
    if ( *(_QWORD *)&v296[8] >= v13 )
      break;
LABEL_176:
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_177:
    if ( v6 > COERCE_FLOAT(v7.m128_i32[0] & v3.m128_i32[0]) && v6 > COERCE_FLOAT(v9 & v3.m128_i32[0]) )
      goto LABEL_78;
  }
  v235 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v378 - (_BYTE *)lpMem) >> 5),
           (v378 - (_BYTE *)lpMem) >> 5,
           *(unsigned __int64 *)&v296[8]);
  v236 = operator new[](saturated_mul(v235, 0x20uLL));
  v237 = lpMem;
  v238 = v236;
  v383.m128_u64[0] = (unsigned __int64)v236;
  v383.m128_u64[1] = v13;
  v384.m256i_i64[0] = 0LL;
  v336 = 0LL;
  v335 = v383;
  std::_Get_unwrapped_n<stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *> &,__int64>(
    &v335,
    (v377 - (_BYTE *)lpMem) >> 5);
  v239 = std::_Uninitialized_move_unchecked<std::move_iterator<Mesh::VertexAAOffsetDesc *>,Mesh::VertexAAOffsetDesc *>(v237);
  v336 = (signed __int64)(v239 - v335.m128_u64[0]) >> 5;
  v240 = (void *)detail::expandable_buffer_base<bool,40>::replace(&lpMem, v238);
  operator delete(v240);
  v8 = (size_t)lpMem;
  v126 = v283;
  v127 = v286;
  v125 = (char *)lpMem + 32 * v13;
  v377 = v125;
  v378 = (char *)lpMem + 32 * v235;
LABEL_183:
  v383.m128_u64[1] = v12;
  v384.m256i_i64[0] = 0LL;
  v128 = (__int64)((__int64)v125 - v8) >> 5;
  v288 = 0LL;
  v129 = v128 - v13;
  v383.m128_u64[0] = v8 + 32 * v128;
  v287 = (__m128i)v383;
  if ( v12 && (!(v8 + 32 * ((__int64)((__int64)v125 - v8) >> 5)) || v12 < 0) )
LABEL_121:
    _invalid_parameter_noinfo_noreturn();
  v130 = ((__int64)((__int64)v125 - v8) >> 5) - v13;
  LOBYTE(v15) = v127;
  if ( v12 < v129 )
    v130 = v12;
  v21 = v126;
  v131 = 32 * v130;
  v132 = &v125[v131 / 0xFFFFFFFFFFFFFFF0uLL];
  if ( v125 != &v125[v131 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v126 = v287.m128i_u64[1];
    v268 = v383.m128_u64[0];
    v269 = (_OWORD *)(v383.m128_u64[0] + 32 * v12);
    v270 = v12;
    do
    {
      v125 -= 2;
      if ( !v268 )
        goto LABEL_121;
      if ( !v270 )
        goto LABEL_121;
      --v270;
      v269 -= 2;
      if ( v270 >= v126 )
        goto LABEL_121;
      *v269 = *v125;
      v269[1] = v125[1];
    }
    while ( v125 != v132 );
    v125 = v377;
  }
  if ( v129 > v12 )
  {
    v384.m256i_i64[0] = 0LL;
    v383.m128_u64[0] = v8;
    v383.m128_u64[1] = v128;
    v288 = 0LL;
    v287 = (__m128i)v383;
    stdext::checked_array_iterator<bool *>::operator+=(&v287, v128, v127);
    v383 = (__m128)v287;
    v384.m256i_i64[0] = v288;
    std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
      &v287,
      v8 + 32 * v13,
      v8 + 32 * (v128 - v12),
      &v383);
    v125 = v377;
  }
  v133 = (_OWORD *)(v8 + 32 * v13);
  v377 = &v125[2 * v12];
  if ( v12 )
  {
    *v133 = 0LL;
    v133[1] = 0LL;
    qmemcpy(v133 + 2, v133, 8 * ((unsigned __int64)(32 * v12 - 25) >> 3));
  }
LABEL_193:
  v134 = (struct Mesh::VertexAAOffsetDesc *)detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                                              &lpMem,
                                              v126);
  Mesh::CalcEdgeDirections(
    *(const struct D2D_POINT_2F **)&v296[16],
    *(unsigned __int64 *)&v296[8],
    v134,
    *(float *)v296);
  v136 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(&lpMem, v135);
  v13 = (unsigned __int64)v306;
LABEL_194:
  *((_QWORD *)&v297[0] + 1) = v136;
  if ( !(_BYTE)v15 || CCpuClip::GetAntialiasMode(*(CCpuClip **)(v13 + 16)) == D2D1_ANTIALIAS_MODE_ALIASED )
    v137 = 0;
  else
    v137 = 3;
  CEdgeFlagsMap::ResolveEdgeFlagsResult::ResolveEdgeFlagsResult((CEdgeFlagsMap::ResolveEdgeFlagsResult *)&v383);
  gsl::span<enum D2D1_EDGE_FLAGS,-1>::span<enum D2D1_EDGE_FLAGS,-1>(&v381, &v366);
  v383 = v381;
  gsl::span<bool,-1>::span<bool,-1>(&v381, &v356);
  *(__m128 *)v384.m256i_i8 = v381;
  v139 = StridedSpan<D2D_VECTOR_2F const>::StridedSpan<D2D_VECTOR_2F const>(
           v343,
           *((_QWORD *)&v297[0] + 1),
           v138,
           *(_QWORD *)&v296[8]);
  CEdgeFlagsMap::ResolveEdgeFlags((_DWORD)v289, v139, *(_DWORD *)&v296[16], v137, (__int64)&v383, *(_DWORD *)v296);
  v141 = v384.m256i_i8[17];
  if ( (_BYTE)v15 && v384.m256i_i8[16] )
    v21 = 1;
  *(_QWORD *)&v297[0] = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                          &v366,
                          v140);
  v142 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
           &v356,
           *(_QWORD *)&v297[0]);
  v143 = *(float *)&v296[20];
  left = *(float *)&v296[8];
  *(_QWORD *)&v297[1] = v142;
  LODWORD(v297[0]) = v145;
LABEL_213:
  v150 = v307;
  if ( v307 )
  {
    v289 = (struct CPrimitiveColor *)*((_QWORD *)v307 + 2);
    v298 = (struct _D3DCOLORVALUE *)v307;
  }
  else
  {
    v289 = 0LL;
    v298 = 0LL;
  }
  v151 = (unsigned __int8)v15;
  v152 = *(_DWORD *)(v13 + 24) & 0x800;
  v285 = 0;
  v153 = v152 != 0;
  if ( !v21 || !CStereoRenderTargetBitmap::GetRightEyeRenderTargetBitmap(*(CStereoRenderTargetBitmap **)(v13 + 16)) )
    goto LABEL_216;
  if ( !BYTE12(v297[1]) )
  {
    v164 = (bool *)detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                     &v356,
                     v150);
    LODWORD(v19) = CDrawListEntryBuilder::AppendCpuClipAntialiasEntry(
                     (CDrawListEntryBuilder *)v13,
                     (const struct Mesh::MeshDesc *)v296,
                     v165,
                     v153,
                     v164);
    if ( (v19 & 0x80000000) == 0LL )
    {
      v166 = 0;
      if ( *(_QWORD *)&v296[8] )
      {
        v150 = 0LL;
        v167 = 0;
        do
        {
          if ( *(_BYTE *)detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::operator[](
                           &v356,
                           v150) )
          {
            v167 = 1;
            *(_DWORD *)detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::operator[](&v366) = 3;
            v168 = *(_QWORD *)&v296[8];
          }
          v150 = (struct PrimitiveVertexAttributesDesc *)++v166;
        }
        while ( v166 < v168 );
        v285 = v167;
        v169 = v167 == 0;
        v13 = (unsigned __int64)v306;
        if ( !v169 )
          v141 = 1;
      }
      goto LABEL_216;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x533u, 0LL);
    goto LABEL_231;
  }
  *(FLOAT *)v390 = left;
  v390[1] = v156;
  v390[2] = v157;
  v390[3] = v156;
  v390[4] = v157;
  *(FLOAT *)&v390[5] = v143;
  *(FLOAT *)&v390[6] = left;
  *(FLOAT *)&v390[7] = v143;
  DecomposeRectangleEdgeFlags(LODWORD(v297[0]), v389, v386, v387, v388);
  Mesh::GetVertexAAOffsetsForAntialiasRectangle(v342);
  v317 = 4LL;
  v320 = 0LL;
  BYTE12(v320) = 0;
  v318 = v390;
  v316[1] = 0;
  v319 = (unsigned __int64)v386;
  v316[0] = *(_DWORD *)v296;
  *((_QWORD *)&v319 + 1) = CStereoRenderTargetBitmap::GetRightEyeRenderTargetBitmap((CStereoRenderTargetBitmap *)v342);
  *(_QWORD *)&v320 = (char *)v297 + 4;
  DWORD2(v320) = DWORD2(v297[1]);
  BYTE13(v320) = BYTE13(v297[1]);
  LODWORD(v19) = CDrawListEntryBuilder::AppendCpuClipAntialiasEntry(
                   (CDrawListEntryBuilder *)v13,
                   (const struct Mesh::MeshDesc *)v316,
                   v307,
                   v153,
                   (bool *)v297 + 4);
  if ( (v19 & 0x80000000) != 0LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x51Bu, 0LL);
    goto LABEL_231;
  }
  RectangleEdgeFlags = MakeRectangleEdgeFlags(
                         BYTE7(v297[0]) != 0 ? 3 : 0,
                         BYTE4(v297[0]) != 0 ? 3 : 0,
                         BYTE5(v297[0]) != 0 ? 3 : 0,
                         BYTE6(v297[0]) != 0 ? 3 : 0);
  if ( RectangleEdgeFlags )
  {
    operator|=(v297, RectangleEdgeFlags);
    v285 = 1;
    v141 = 1;
  }
LABEL_216:
  if ( !BYTE12(v297[1]) )
  {
    v160 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
             &lpMem,
             v150);
    v161 = *((_QWORD *)&v297[0] + 1);
    if ( *((_QWORD *)&v297[0] + 1) != v160 )
    {
      MeshCacheManager = GetMeshCacheManager();
      v214 = (const struct CShape *)detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                                      &v299,
                                      v213);
      if ( CMeshCacheManager::TryGetMeshAAOffsets(
             MeshCacheManager,
             (const struct Mesh::MeshDesc *)v296,
             v214,
             (const struct D2D1::Matrix3x2F *)&v310,
             0) )
      {
        v161 = *((_QWORD *)&v297[0] + 1);
      }
      else
      {
        detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
          &lpMem,
          *(_QWORD *)&v296[8]);
        v216 = 0;
        if ( *(_QWORD *)&v296[8] )
        {
          v215 = 0LL;
          do
          {
            v217 = *(_DWORD *)(32 * v215 + *((_QWORD *)&v297[0] + 1));
            v218 = *(_DWORD *)(32 * v215 + *((_QWORD *)&v297[0] + 1) + 4);
            v219 = (_DWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::operator[](&lpMem);
            v215 = ++v216;
            *v219 = v217;
            v219[1] = v218;
          }
          while ( (unsigned __int64)v216 < *(_QWORD *)&v296[8] );
        }
        v161 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                 &lpMem,
                 v215);
        *((_QWORD *)&v297[0] + 1) = v161;
      }
    }
    v162 = (struct Mesh::VertexAAOffsetDesc *)detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                                                &lpMem,
                                                v161);
    if ( v163 == v162 )
      Mesh::CalcVertexAAOffsets((const struct Mesh::MeshDesc *)v296, v162, 0);
  }
  v154 = v307;
  if ( !(_BYTE)v295 )
  {
    BYTE13(v297[1]) = 1;
    goto LABEL_219;
  }
  LOBYTE(v38) = 1;
  LOBYTE(v280) = 0;
  LODWORD(v19) = CDrawListEntryBuilder::AppendReconstructableEntry(v13, &v296[8], LODWORD(v297[0]), v38, v280, v307, 2);
  if ( (v19 & 0x80000000) != 0LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x56Eu, 0LL);
LABEL_231:
    detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(&lpMem);
    detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>(&v356);
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(&v366);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v301);
    goto LABEL_232;
  }
  BYTE13(v297[1]) = 0;
LABEL_219:
  if ( v141 )
  {
    if ( !v285 || v152 )
    {
      DWORD2(v297[1]) = 1;
      *(_BYTE *)(v13 + 4492) = 1;
    }
    else
    {
      DWORD2(v297[1]) = 3;
      *(_BYTE *)(v13 + 4492) = 1;
    }
  }
  else
  {
    DWORD2(v297[1]) = 0;
  }
  CDrawListEntryBuilder::AppendHWGeometry((CDrawListEntryBuilder *)v13, (const struct Mesh::MeshDesc *)v296, v154);
  if ( *(_QWORD *)(v13 + 4464) >= 0xC8uLL )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)v13,
                              v155,
                              v289,
                              v298);
    LODWORD(v19) = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BuiltHWPrimitiveEntry, 0x593u, 0LL);
      goto LABEL_231;
    }
  }
  detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::~vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>(&lpMem);
  detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>(&v356);
  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(&v366);
  CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v301);
LABEL_223:
  if ( v21 && wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(*(_QWORD **)(v13 + 16)) )
    *(_BYTE *)(v13 + 4488) = 1;
  if ( !v151 )
  {
    CTelemetryFrames::IncrementTessellatedRectUnClipped((unsigned int)v14);
    goto LABEL_226;
  }
  if ( v281 )
  {
    CTelemetryFrames::IncrementTessellatedRectGeneralClip((unsigned int)v14);
    LODWORD(v19) = 0;
  }
  else
  {
    CTelemetryFrames::IncrementTessellatedRectAxisAlignedRectClip((unsigned int)v14);
LABEL_226:
    LODWORD(v19) = 0;
  }
LABEL_232:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v347);
  CShapePtr::~CShapePtr(&v299);
  return (unsigned int)v19;
}
