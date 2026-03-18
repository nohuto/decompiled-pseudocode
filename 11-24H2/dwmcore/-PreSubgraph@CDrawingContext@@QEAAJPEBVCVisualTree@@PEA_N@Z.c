/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800831A0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000AA04 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18001BF70 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Grow@?$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18001D090 (-Grow@-$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18001DA30 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E7E0 (-CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$TMil3DRect@MV-$TMilRect_.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?IsOfType@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800310E0 (-IsOfType@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180033368 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CDrawingContext@@AEBAJPEAVCVisual@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800368F0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CDrawingContext@@AEBAJPEAVCVisual@@AEB.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370F0 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800374C0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     McTemplateU0_EventWriteTransfer @ 0x1800400F4 (McTemplateU0_EventWriteTransfer.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004FEF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180079B90 (--1NodeEffects@CDrawingContext@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18009E4E0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009FA70 (-GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800A00E0 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x1800B0A10 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2A40 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B4A00 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x1800D5FB0 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x1800F5D00 (-GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F6564 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800F7180 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800F8AE0 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x180167BB0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1801684F0 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180168558 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801685A4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     _lambda_88375b7c038d402b80e7daa8931735f4_::operator() @ 0x1801693CC (_lambda_88375b7c038d402b80e7daa8931735f4_--operator().c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18017BC10 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ @ 0x18019CA00 (-HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18019CB20 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z @ 0x18019CC60 (-IsVisualInAncestorList@CBackdropVisualImage@@QEBA_NPEBVCVisual@@AEBVCVisualTreePath@@@Z.c)
 *     ?TopOrDefault@?$CWatermarkStack@_N$0EA@$01$09@@QEBA_N_N@Z @ 0x18019CF80 (-TopOrDefault@-$CWatermarkStack@_N$0EA@$01$09@@QEBA_N_N@Z.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18019D270 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ??0?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18019D290 (--0-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUni.c)
 *     ?HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ @ 0x18019D470 (-HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1801A02B0 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ??0CMILMatrix@@QEAA@XZ @ 0x1801A9E20 (--0CMILMatrix@@QEAA@XZ.c)
 *     ?HasEffects@NodeEffects@CDrawingContext@@QEAA_NXZ @ 0x1801AA210 (-HasEffects@NodeEffects@CDrawingContext@@QEAA_NXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801AAF70 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801B2690 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ @ 0x1801B34A0 (-IsBackdropWalk@CDrawingContext@@AEBA_NXZ.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B3A70 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?HasCpuClip@CCpuClippingData@@QEBA_NXZ @ 0x1801B4C00 (-HasCpuClip@CCpuClippingData@@QEBA_NXZ.c)
 *     ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1801BB8F0 (-IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?DoesIntersect@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801C6D84 (-DoesIntersect@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801C7D10 (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7FF0 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1801C8FD0 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?GetD2DAntialiasMode@CDrawingContext@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ @ 0x1801CBE90 (-GetD2DAntialiasMode@CDrawingContext@@QEBA-AW4D2D1_ANTIALIAS_MODE@@XZ.c)
 *     ?UseCpuClippingInScope@CScopedClipStack@@QEBA_NXZ @ 0x1801CDE80 (-UseCpuClippingInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?MarkCompositorRendered@CProcessAttribution@@QEAAXXZ @ 0x1801D6DC0 (-MarkCompositorRendered@CProcessAttribution@@QEAAXXZ.c)
 *     ?HasValidBounds@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1801E1C3C (-HasValidBounds@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?Top@CLayerStack@@QEAAPEAVCLayer@@XZ @ 0x1801E2284 (-Top@CLayerStack@@QEAAPEAVCLayer@@XZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1801E35E8 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ??0StackBackfaceVisibilityEntry@CDrawingContext@@QEAA@PEBVCVisual@@_N@Z @ 0x1801E61C4 (--0StackBackfaceVisibilityEntry@CDrawingContext@@QEAA@PEBVCVisual@@_N@Z.c)
 *     ?Grow@?$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801E8BE0 (-Grow@-$CWatermarkStack@USavedRenderOptions@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801E9218 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?GetTransformToLayerSpace@CTreeEffectLayer@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801EA0C4 (-GetTransformToLayerSpace@CTreeEffectLayer@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EABC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetScopeMode@CCpuClippingData@@QEBA?AW4CpuClippingScopeMode@@XZ @ 0x1801EC25C (-GetScopeMode@CCpuClippingData@@QEBA-AW4CpuClippingScopeMode@@XZ.c)
 *     ?CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ @ 0x1801EC410 (-CanIgnoreAncestorCpuClips@CCpuClippingData@@QEBA_NXZ.c)
 *     ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801EF728 (-NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ.c)
 *     ?data@?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAPEA_NXZ @ 0x1801EFAB0 (-data@-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?Transform3DBounds@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV2@@Z @ 0x1801F205C (-Transform3DBounds@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBJ@Z @ 0x1801F2D88 (--0DbgString@DwmDbg@@QEAA@AEBJ@Z.c)
 *     ?IncrementWindowBackdropBrushCacheMisses@CTelemetryFrames@@SAXI@Z @ 0x1801F6A3C (-IncrementWindowBackdropBrushCacheMisses@CTelemetryFrames@@SAXI@Z.c)
 *     ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ @ 0x1801FC73C (-GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180200474 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetInputBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802047EC (-GetInputBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1802075E8 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ??1DbgString@DwmDbg@@QEAA@XZ @ 0x18020A914 (--1DbgString@DwmDbg@@QEAA@XZ.c)
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180216F50 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ?IsScreenReadBack@CComposition@@QEBA_NXZ @ 0x1802176F8 (-IsScreenReadBack@CComposition@@QEBA_NXZ.c)
 *     ?GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z @ 0x18021889C (-GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z.c)
 *     ?GetBounds@CWindowBackgroundTreatment@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18021E87C (-GetBounds@CWindowBackgroundTreatment@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?SetCacheInvalidationRequired@CWindowBackgroundTreatment@@QEAAX_N@Z @ 0x180224104 (-SetCacheInvalidationRequired@CWindowBackgroundTreatment@@QEAAX_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180230700 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18024D0BC (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18024D368 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18024D9C4 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18024F888 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?SubgraphHasBackdropInput@CVisual@@QEBA_NXZ @ 0x18024FE8C (-SubgraphHasBackdropInput@CVisual@@QEBA_NXZ.c)
 *     ?SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ @ 0x18024FEA0 (-SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ.c)
 *     ?GetBounds@CVisualTree@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180250230 (-GetBounds@CVisualTree@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1802505BC (-GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028491C (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CLayerVisual **this, const struct CVisualTree *a2, bool *a3)
{
  void *(__fastcall *v3)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rsi
  CDrawingContext *v4; // r13
  struct CVisual *v5; // rax
  CLayerVisual *v6; // r12
  _DWORD *v7; // rdx
  bool v8; // zf
  char v9; // r14
  size_t v10; // r15
  __int64 v11; // rax
  __int64 k; // rdx
  CDrawingContext *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // r14
  struct CVisualTree *v16; // r12
  CProcessAttribution *v17; // r13
  __int64 v18; // rax
  struct CProcessAttribution *(__fastcall *v19)(CWindowNode *__hidden); // rax
  __int64 v20; // rdi
  CProcessAttribution *v21; // rdi
  bool *v22; // rbx
  unsigned int v23; // r13d
  int v24; // ebx
  int v25; // eax
  void *v26; // rcx
  __int64 v27; // rax
  float *v28; // rdx
  __int64 v29; // r9
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm9_4
  float v33; // xmm10_4
  int v34; // ecx
  float v35; // xmm0_4
  __int64 v36; // rax
  int v37; // eax
  __m128 v38; // xmm2
  float v39; // xmm5_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  __int64 v42; // rax
  int v43; // eax
  __m128 v44; // xmm0
  float v45; // xmm1_4
  float v46; // xmm6_4
  float v47; // xmm8_4
  float v48; // xmm6_4
  float v49; // xmm7_4
  float v50; // xmm0_4
  float v51; // xmm6_4
  unsigned int v52; // eax
  __int64 v53; // rax
  void *(__fastcall *v54)(CWindowOcclusionInfo *__hidden, unsigned int); // rdi
  int **v55; // rbx
  void *(__fastcall *v56)(CSurfaceDrawListBrush *__hidden, unsigned int); // r13
  __int64 v57; // r15
  unsigned int v58; // ebx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned int v61; // eax
  unsigned int v62; // ebx
  __int64 v63; // rdx
  const struct CVisualTreePath *CurrentVisualTreePath; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rbx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // edx
  __int64 v73; // rdi
  struct _LIST_ENTRY *v74; // rbx
  struct _LIST_ENTRY *v75; // r11
  _QWORD *v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rax
  _BYTE *v81; // rcx
  unsigned int m; // r8d
  _QWORD ***v83; // rcx
  _QWORD **v84; // rcx
  _QWORD *v85; // rcx
  __int64 (*v86)(void); // rax
  _QWORD *v87; // rbx
  __int64 TargetResource; // rax
  __int64 v89; // rbx
  struct _LIST_ENTRY *v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned int v93; // ebx
  __int64 v94; // rdx
  unsigned int v95; // ebx
  HANDLE ProcessHeap; // rax
  void *v97; // rax
  void *v98; // rdi
  unsigned __int64 v99; // rax
  unsigned int v100; // edi
  HANDLE v101; // rax
  void *v102; // rax
  void *v103; // rsi
  __int64 v104; // rax
  _BYTE *v105; // rcx
  unsigned int i; // r8d
  CProjectedShadowReceiver ****v107; // rax
  CProjectedShadowReceiver ***v108; // rax
  CProjectedShadowReceiver **v109; // rdi
  CProjectedShadowReceiver **v110; // rax
  CProjectedShadowReceiver *v111; // r15
  CProjectedShadowScene **v112; // r14
  CProjectedShadowScene **v113; // r13
  CProjectedShadowScene *v114; // rbx
  __int64 ***v115; // r12
  __int64 **j; // rbx
  int v117; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v119; // r10
  int v120; // ebx
  unsigned int v121; // ecx
  CVisual *v122; // rcx
  const void *v123; // rdi
  const char *v124; // rbx
  const char **v125; // rax
  DwmDbg::DbgString *v126; // rdi
  const struct CVisualTreePath *v127; // rbx
  CDrawingContext *v128; // rcx
  bool IsBackdropWalk; // al
  const char *v130; // rdx
  DwmDbg::DbgString *v131; // rax
  unsigned int v132; // ebx
  __int64 v133; // rdx
  unsigned int v134; // ebx
  unsigned int v135; // r14d
  unsigned int *v136; // r15
  unsigned int v137; // r12d
  unsigned int i10; // edi
  __int64 v139; // rax
  __int64 v140; // rax
  _BYTE *v141; // rbx
  int v142; // eax
  int v143; // r14d
  int v144; // eax
  struct _LIST_ENTRY *v145; // rax
  struct _LIST_ENTRY *v146; // r10
  struct _LIST_ENTRY *n; // rcx
  void *v148; // rax
  void *v149; // r15
  void *v150; // r15
  HANDLE v151; // rax
  void *v152; // rbx
  HANDLE v153; // rax
  CGeometry *v154; // r14
  struct CMILMatrix *v155; // r14
  struct CTreeData *v156; // rbx
  __int64 v157; // r8
  __int64 v158; // r9
  CCpuClippingData *CpuClippingData; // rbx
  enum D2D1_ANTIALIAS_MODE D2DAntialiasMode; // eax
  __int64 v161; // rax
  int v162; // edx
  int v163; // eax
  int ScopeMode; // r14d
  CCpuClippingData *v165; // rcx
  bool CanIgnoreAncestorCpuClips; // bl
  CLayerVisual *v167; // r12
  __int64 v168; // rax
  char v169; // r12
  CVisual *v170; // rcx
  CVisual *v171; // rcx
  struct CVisual *v172; // rbx
  int v173; // r8d
  int v174; // eax
  int v175; // eax
  char v176; // dl
  char v177; // cl
  __int64 (__fastcall *v178)(CVisual *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *__hidden)); // rax
  void (__fastcall *v179)(CRectanglesShape *, __int64, CPolygonShape *(__fastcall *)(CPolygonShape *, char)); // rax
  int ShapeData; // eax
  CRectanglesShape *v181; // rbx
  int v182; // r14d
  __int64 (__fastcall *v183)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  struct D2D_RECT_F *v184; // rcx
  unsigned __int64 v185; // r15
  __int64 v186; // rcx
  int v187; // eax
  int v188; // eax
  int *v189; // r8
  unsigned int v190; // edx
  _BYTE *v191; // rcx
  unsigned int i6; // eax
  __int64 v193; // rcx
  int *v194; // rcx
  __int64 ***v195; // rcx
  __int64 **i7; // rax
  __int64 v197; // r8
  int v198; // eax
  __int64 v199; // r8
  __m128 v200; // xmm5
  float v201; // xmm8_4
  float v202; // xmm4_4
  float v203; // xmm7_4
  __m128 v204; // xmm6
  __m128 v205; // xmm3
  float v206; // xmm2_4
  float v207; // xmm1_4
  float v208; // xmm5_4
  float v209; // xmm2_4
  float v210; // xmm0_4
  float v211; // xmm6_4
  float v212; // xmm3_4
  bool v213; // al
  int v214; // r8d
  __m128 *v215; // rcx
  int v216; // eax
  int v217; // eax
  unsigned int v218; // eax
  int TightBounds; // eax
  CRectanglesShape *v220; // rbx
  void (__fastcall *v221)(CRectanglesShape *, __int64); // rax
  float v222; // xmm5_4
  float v223; // xmm3_4
  float v224; // xmm4_4
  const struct CMILMatrix *TopByReference; // rax
  __int64 v226; // rdx
  __int64 InputBounds; // rax
  float v228; // xmm4_4
  float v229; // xmm5_4
  float v230; // xmm6_4
  float v231; // xmm7_4
  float v232; // xmm2_4
  float v233; // xmm3_4
  float v234; // xmm0_4
  __int64 v235; // rcx
  __int64 v236; // rax
  CDrawingContext *v237; // r12
  unsigned int v238; // ecx
  unsigned int v239; // eax
  __int64 v240; // rcx
  __int64 v241; // rax
  __int64 v242; // rcx
  __int64 v243; // rdx
  unsigned int v244; // ecx
  unsigned int v245; // eax
  int v246; // eax
  _BYTE *v247; // rdx
  char v248; // cl
  float v249; // xmm1_4
  bool v250; // r14
  bool v251; // r14
  unsigned int v252; // eax
  __int64 v253; // rcx
  unsigned int v254; // eax
  int v255; // r12d
  unsigned __int64 v256; // r14
  unsigned int v257; // ebx
  int v258; // eax
  int v259; // eax
  int v260; // eax
  float v261; // xmm0_4
  float v262; // xmm1_4
  float v263; // xmm2_4
  int v264; // eax
  unsigned int v265; // eax
  char v266; // al
  float v267; // xmm0_4
  float v268; // xmm9_4
  float v269; // xmm11_4
  float v270; // xmm8_4
  float v271; // xmm10_4
  float v272; // xmm12_4
  float v273; // xmm3_4
  float v274; // xmm5_4
  float v275; // xmm7_4
  float v276; // xmm4_4
  float v277; // xmm0_4
  float v278; // xmm6_4
  float v279; // xmm9_4
  float v280; // xmm0_4
  float v281; // xmm1_4
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  const struct CMILMatrix *v283; // rax
  __int64 v284; // rdx
  __int64 v285; // r8
  __int64 Bounds; // rax
  __int64 v287; // r9
  struct Microsoft::BamoImpl::BamoPrincipalImpl *v288; // rax
  bool v289; // r14
  bool v290; // r15
  const struct RenderTargetInfo *v291; // rax
  unsigned int v292; // ecx
  int BitmapForEffectInput; // eax
  const struct CMILMatrix *v294; // rax
  int v295; // eax
  int v296; // eax
  __int64 (__fastcall *v297)(__int64, __int64); // rax
  char v298; // al
  CTreeEffectLayer *v299; // r8
  struct CVisualTree *FlatteningVisualTree; // rax
  __int64 v301; // rax
  __int64 v302; // rcx
  int v303; // eax
  unsigned int v304; // ebx
  __int64 v305; // rdx
  __int64 v306; // r9
  char v307; // al
  int v308; // eax
  unsigned int v309; // ebx
  __int64 v310; // rdx
  __int64 v311; // r9
  size_t v312; // r8
  CDrawingContext *v313; // r15
  void *v314; // r15
  unsigned int v315; // ecx
  unsigned int v316; // eax
  unsigned int v317; // r15d
  HANDLE v318; // rax
  void *v319; // rax
  void *v320; // rbx
  unsigned int v321; // r14d
  unsigned int v322; // r12d
  void *v323; // rax
  void *v324; // r14
  HANDLE v325; // rax
  void *v326; // rax
  void *v327; // r15
  int v328; // eax
  __m128 v329; // xmm9
  __m128 v330; // xmm7
  __m128 v331; // xmm8
  __m128 v332; // xmm5
  __m128 v333; // xmm6
  __m128 v334; // xmm4
  __m128 v335; // xmm2
  int v336; // eax
  size_t v337; // r8
  CDrawingContext *v338; // r14
  size_t v339; // r8
  size_t v340; // r8
  CDrawingContext *v341; // r14
  __int64 v342; // rdi
  __int64 v343; // rax
  CSurfaceDrawListBrush *v344; // rcx
  void *(__fastcall *v345)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  __int64 v346; // r8
  __int64 *v347; // rbx
  __int64 v348; // r12
  CSurfaceDrawListBrush *v349; // rcx
  void *(__fastcall *v350)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int); // rax
  __int64 v351; // r12
  __int64 v352; // rcx
  unsigned __int64 v353; // rcx
  __int64 *v354; // rax
  __int64 *v355; // rdx
  unsigned __int64 v356; // r15
  void (__fastcall *v357)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64); // rax
  __int64 v358; // rdi
  _QWORD *v359; // rbx
  __int64 v360; // r14
  __int64 *v361; // rax
  __int64 v362; // r12
  __int64 v363; // r8
  struct CVisualTree *v364; // r9
  __int64 *v365; // rax
  __int64 v366; // rdx
  unsigned __int64 v367; // r15
  void (__fastcall *v368)(CWindowOcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64); // rax
  __int64 v369; // rdi
  __int64 *v370; // rbx
  __int64 v371; // r14
  __int64 *i2; // rax
  __int64 v373; // r12
  int v374; // eax
  __int64 v375; // rdi
  __int64 v376; // rcx
  float v377; // xmm0_4
  float v378; // xmm1_4
  _DWORD *v379; // r8
  float v380; // xmm6_4
  float v381; // xmm0_4
  int v382; // eax
  float v383; // xmm1_4
  _DWORD *v384; // r8
  unsigned int v385; // edx
  _BYTE *v386; // rcx
  unsigned int i4; // eax
  __int64 v388; // rcx
  _QWORD *v389; // rax
  _DWORD *v390; // r8
  bool (__fastcall *v391)(__int64, int); // rax
  bool v392; // al
  float v393; // xmm1_4
  CSparseStorage::AllocatedStorage *v394; // rcx
  __int64 v395; // r8
  _BYTE *v396; // rcx
  unsigned int ii; // eax
  __int64 v398; // rcx
  _QWORD ***v399; // rcx
  _QWORD **v400; // rcx
  _QWORD *jj; // rax
  __int64 v402; // rax
  __int64 v403; // r15
  __int64 v404; // rcx
  __int64 v405; // r8
  unsigned __int64 v406; // rcx
  __int64 *v407; // rbx
  __int64 v408; // rdx
  bool v409; // cc
  __int64 v410; // rax
  void *(__fastcall ***v411)(CWindowOcclusionInfo *__hidden, unsigned int); // rcx
  void *(__fastcall *v412)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  __int64 v413; // rax
  __int64 v414; // rdx
  int *v415; // r8
  unsigned int v416; // edx
  _BYTE *v417; // rcx
  unsigned int kk; // eax
  __int64 v419; // rcx
  int *v420; // rcx
  _QWORD *v421; // rcx
  _QWORD *mm; // rax
  int *v423; // r8
  unsigned int v424; // edx
  _BYTE *v425; // rcx
  unsigned int i8; // eax
  __int64 v427; // rcx
  _QWORD ***v428; // rcx
  _QWORD **v429; // rcx
  _QWORD *i9; // rax
  int v431; // eax
  int *v432; // r8
  unsigned int v433; // edx
  _BYTE *v434; // rcx
  unsigned int nn; // eax
  __int64 v436; // rcx
  int *v437; // rcx
  __int64 ***v438; // rcx
  __int64 **i1; // rax
  float v440; // edx
  float *v441; // rcx
  CDrawingContext *v442; // rcx
  unsigned int v443; // edx
  _BYTE *v444; // rcx
  unsigned int i3; // eax
  __int64 v446; // rcx
  float **v447; // rbx
  float *v448; // rbx
  __int64 (__fastcall *v449)(); // rax
  __int64 v450; // rdx
  bool v451; // cc
  unsigned int v452; // edx
  _BYTE *v453; // rcx
  unsigned int i5; // eax
  __int64 v455; // rcx
  __int64 *v456; // rcx
  __int64 v457; // rcx
  __int64 (__fastcall *v458)(); // rax
  struct CSparseStorage::DataInfo *Slot; // rax
  unsigned int v460; // r8d
  __int64 v461; // r8
  __int64 v462; // r9
  int v463; // eax
  unsigned int v464; // eax
  void *(__fastcall ***v465)(CSurfaceDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v466)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  __int64 v467; // r15
  unsigned int v468; // ebx
  __int64 v469; // rax
  unsigned int v470; // eax
  unsigned __int64 v471; // rax
  unsigned int v472; // ebx
  __int64 v473; // rdx
  int v474; // edi
  void *v475; // rax
  void *v476; // rsi
  bool v477; // al
  char v478; // al
  int v479; // eax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v481; // r10
  int v482; // eax
  int v483; // r12d
  int v484; // edi
  int v485; // r13d
  __int64 v486; // rcx
  __int64 v487; // rax
  __int128 v488; // xmm0
  char *v489; // r14
  __int64 v490; // rax
  __int64 v491; // rcx
  unsigned int v492; // ecx
  unsigned int v493; // eax
  __int64 v494; // xmm1_8
  __int64 v495; // rcx
  __int64 v496; // rax
  unsigned int v497; // eax
  unsigned int v498; // r14d
  unsigned int v499; // ebx
  unsigned int v500; // r15d
  void *v501; // rax
  void *v502; // r12
  __int64 v503; // rcx
  void (__fastcall *v504)(__int64, _DWORD *); // rax
  int v505; // eax
  int v506; // r15d
  int v507; // eax
  int v508; // ecx
  _DWORD *v509; // rax
  size_t v510; // r8
  __int64 v511; // r14
  bool v512; // cf
  int v513; // eax
  bool v514; // [rsp+50h] [rbp-B0h] BYREF
  bool v515[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v516; // [rsp+54h] [rbp-ACh] BYREF
  int v517; // [rsp+58h] [rbp-A8h]
  struct CVisualTree *v518; // [rsp+60h] [rbp-A0h]
  CDrawingContext *v519; // [rsp+68h] [rbp-98h]
  CLayerVisual *v520; // [rsp+70h] [rbp-90h]
  bool *v521; // [rsp+78h] [rbp-88h]
  bool v522; // [rsp+80h] [rbp-80h] BYREF
  CRectanglesShape *v523[2]; // [rsp+90h] [rbp-70h] BYREF
  char v524; // [rsp+A0h] [rbp-60h]
  CCpuClippingData *v525; // [rsp+A8h] [rbp-58h]
  unsigned int v526; // [rsp+B0h] [rbp-50h]
  float v527; // [rsp+B4h] [rbp-4Ch]
  __m128 v528; // [rsp+B8h] [rbp-48h] BYREF
  __m256i v529; // [rsp+C8h] [rbp-38h]
  _BYTE v530[24]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v531; // [rsp+100h] [rbp+0h]
  __int128 v532; // [rsp+110h] [rbp+10h]
  __int128 v533; // [rsp+120h] [rbp+20h]
  __int64 v534; // [rsp+130h] [rbp+30h]
  __int64 v535; // [rsp+138h] [rbp+38h]
  __int64 v536; // [rsp+140h] [rbp+40h]
  _DWORD v537[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v538; // [rsp+150h] [rbp+50h]
  __int64 v539; // [rsp+158h] [rbp+58h]
  void *(__fastcall *v540)(CSurfaceDrawListBrush *__hidden, unsigned int); // [rsp+160h] [rbp+60h] BYREF
  __int128 v541; // [rsp+168h] [rbp+68h]
  CLayerVisual *v542; // [rsp+178h] [rbp+78h]
  CRectanglesShape *v543; // [rsp+180h] [rbp+80h] BYREF
  char v544; // [rsp+188h] [rbp+88h]
  __int64 v545; // [rsp+190h] [rbp+90h]
  _BYTE v546[20]; // [rsp+198h] [rbp+98h] BYREF
  int v547; // [rsp+1ACh] [rbp+ACh]
  _DWORD v548[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v549[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __m128 *v550; // [rsp+1C0h] [rbp+C0h] BYREF
  CProcessAttribution *v551; // [rsp+1C8h] [rbp+C8h]
  struct CVisual *v552; // [rsp+1D0h] [rbp+D0h]
  __int64 v553[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  CProcessAttribution *v554; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v555; // [rsp+1F0h] [rbp+F0h] BYREF
  char v556[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v557; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v558[48]; // [rsp+208h] [rbp+108h] BYREF
  char v559[8]; // [rsp+238h] [rbp+138h] BYREF
  char v560[8]; // [rsp+240h] [rbp+140h] BYREF
  char *v561; // [rsp+248h] [rbp+148h] BYREF
  char *v562; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v563[80]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v564; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v565; // [rsp+2E0h] [rbp+1E0h]
  __int128 v566; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v567; // [rsp+2F8h] [rbp+1F8h]
  struct D2D_RECT_F v568; // [rsp+300h] [rbp+200h] BYREF
  struct D2D_RECT_F v569; // [rsp+310h] [rbp+210h] BYREF
  struct tagRECT v570; // [rsp+320h] [rbp+220h] BYREF
  __int128 v571; // [rsp+330h] [rbp+230h] BYREF
  __int64 v572; // [rsp+340h] [rbp+240h]
  __int128 v573; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v574[24]; // [rsp+358h] [rbp+258h] BYREF
  char v575[16]; // [rsp+370h] [rbp+270h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+468h] [rbp+368h]

  v3 = 0LL;
  v518 = a2;
  v521 = a3;
  v519 = (CDrawingContext *)this;
  v565 = 0LL;
  v572 = 0LL;
  v4 = (CDrawingContext *)this;
  v517 = 0;
  v516 = 0;
  v564 = 0LL;
  v571 = 0LL;
  v573 = 0LL;
  v5 = this[403];
  v6 = this[402];
  v535 = 0x2A993F800000LL;
  v552 = v5;
  *(_OWORD *)v523 = 0LL;
  v524 = 0;
  v525 = 0LL;
  v526 = 0;
  v527 = 1.0;
  *(_QWORD *)&v530[16] = 0LL;
  v536 = 0LL;
  memset(v537, 0, 6);
  v531 = 0LL;
  v532 = 0LL;
  v533 = 0LL;
  v534 = 0LL;
  v7 = (_DWORD *)*((_QWORD *)v6 + 29);
  *(_OWORD *)v553 = 0LL;
  v520 = v6;
  v568 = 0LL;
  v8 = (*v7 & 0x40000) == 0;
  v550 = &v528;
  if ( !v8 )
  {
    v104 = (unsigned int)v7[1];
    v105 = v7 + 2;
    for ( i = 0; i < (unsigned int)v104; ++v105 )
    {
      if ( *v105 == 14 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v104 )
      v107 = 0LL;
    else
      v107 = (CProjectedShadowReceiver ****)((char *)&v7[2 * i + 3] + v104 - (((_BYTE)v104 + 15) & 7) + 3);
    v108 = *v107;
    v109 = *v108;
    v110 = v108[1];
    v545 = (__int64)v110;
    while ( v109 != v110 )
    {
      v111 = *v109;
      v112 = (CProjectedShadowScene **)*((_QWORD *)*v109 + 10);
      v113 = (CProjectedShadowScene **)*((_QWORD *)*v109 + 11);
      while ( v112 != v113 )
      {
        v114 = *v112;
        if ( !CCommonRegistryData::DisableProjectedShadows
          && !CProjectedShadowScene::IsEmptyProjection(*v112)
          && !CProjectedShadowReceiver::IsEmptyMaskContent(v111) )
        {
          v115 = (__int64 ***)*((_QWORD *)v114 + 9);
          for ( j = *v115; j != (__int64 **)v115; j = (__int64 **)*j )
          {
            if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)j[2]) )
            {
              v4 = v519;
              v9 = 1;
              v6 = v520;
              goto LABEL_3;
            }
          }
        }
        ++v112;
      }
      v110 = (CProjectedShadowReceiver **)v545;
      ++v109;
    }
    v4 = v519;
    v6 = v520;
  }
  v9 = 0;
LABEL_3:
  v10 = *((unsigned int *)v4 + 798);
  v11 = *((unsigned int *)v4 + 799);
  k = 64LL;
  if ( (_DWORD)v10 == (_DWORD)v11 )
  {
    v92 = 2 * v11;
    if ( v92 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v92 <= 0x40 )
        LODWORD(v92) = 64;
      v95 = v92;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v92 <= 1 )
      {
        v93 = -2147024809;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v97 = HeapAlloc(ProcessHeap, 0, v95);
        v98 = v97;
        if ( v97 )
        {
          memcpy_0(v97, *((const void **)v4 + 398), v10);
          v150 = (void *)*((_QWORD *)v4 + 398);
          if ( v150 )
          {
            v151 = GetProcessHeap();
            HeapFree(v151, 0, v150);
          }
          v13 = v519;
          *((_QWORD *)v519 + 398) = v98;
          *((_DWORD *)v13 + 799) = v95;
          goto LABEL_5;
        }
        v93 = -2147024882;
      }
      v94 = 104LL;
    }
    else
    {
      v93 = -2147024362;
      v94 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v94,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v93);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v93);
    v13 = v519;
    goto LABEL_8;
  }
  v13 = v519;
LABEL_5:
  *(_BYTE *)((unsigned int)(*((_DWORD *)v13 + 798))++ + *((_QWORD *)v13 + 398)) = v9;
  v14 = *((_DWORD *)v13 + 801);
  if ( v14 <= *((_DWORD *)v13 + 798) )
    v14 = *((_DWORD *)v13 + 798);
  *((_DWORD *)v13 + 801) = v14;
LABEL_8:
  if ( *((_QWORD *)v13 + 25) )
  {
    v73 = *((_QWORD *)v13 + 996);
    v74 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v73 + 8) - 8LL);
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, __int64))v74->Flink[11].Blink)(v74, k) )
    {
      v75 = (struct _LIST_ENTRY *)((char *)v6 + 328);
LABEL_110:
      if ( v75 )
      {
        for ( k = (__int64)v75[9].Flink; (struct _LIST_ENTRY *)k != v75[9].Blink; k += 8LL )
        {
          v76 = *(_QWORD **)v73;
          v77 = *(_QWORD *)(*(_QWORD *)k + 2072LL);
          if ( *(_QWORD *)(*(_QWORD *)k + 2080LL) - v77 == *(_QWORD *)(v73 + 8) - *(_QWORD *)v73 )
          {
            v78 = v77 - (_QWORD)v76;
            while ( (_QWORD *)((char *)v76 + v78) != *(_QWORD **)(*(_QWORD *)k + 2080LL) )
            {
              if ( *(_QWORD *)((char *)v76 + v78) != *v76 || *(_QWORD *)((char *)v76 + v78 + 8) != v76[1] )
                goto LABEL_1158;
              v76 += 2;
            }
            *(_QWORD *)(*(_QWORD *)k + 2232LL) = v75[15].Blink[1].Blink[55].Blink;
            v79 = *(_QWORD *)k;
            goto LABEL_120;
          }
LABEL_1158:
          ;
        }
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v6);
      v119 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        while ( 1 )
        {
          TreeDataListHead = TreeDataListHead->Flink;
          if ( TreeDataListHead == v119 )
            break;
          v75 = TreeDataListHead - 22;
          if ( TreeDataListHead[2].Flink == v74 )
            goto LABEL_110;
        }
      }
    }
    v79 = 0LL;
LABEL_120:
    if ( v79 == *((_QWORD *)v13 + 25) )
      *((_BYTE *)v13 + 193) = 1;
  }
  v15 = (__int64)v520;
  v16 = v518;
  if ( (*((_BYTE *)v520 + 106) & 1) != 0 || (*((_DWORD *)v520 + 24) & 0x100) == 0 )
    goto LABEL_79;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v518 + 184LL))(v518, k) )
    goto LABEL_12;
  if ( v520 == *((CLayerVisual **)v518 + 9) )
    goto LABEL_12;
  k = *((_QWORD *)v520 + 29);
  if ( (*(_DWORD *)k & 0x2000000) == 0 )
    goto LABEL_12;
  v80 = *(unsigned int *)(k + 4);
  v81 = (_BYTE *)(k + 8);
  for ( m = 0; m < (unsigned int)v80; ++v81 )
  {
    if ( *v81 == 7 )
      break;
    ++m;
  }
  if ( m >= (unsigned int)v80 )
  {
    v83 = 0LL;
  }
  else
  {
    k = v80 + 15 + k - (((_BYTE)v80 + 15) & 7);
    v83 = (_QWORD ***)(k + 8LL * m);
  }
  v84 = *v83;
  if ( !v84 )
    goto LABEL_12;
  v85 = *v84;
  v86 = *(__int64 (**)(void))(*v85 + 184LL);
  if ( (char *)v86 != (char *)CVisualReferenceController::GetVisualNoRef )
  {
    TargetResource = v86();
    goto LABEL_134;
  }
  v87 = v85 + 10;
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v85 + 10) )
  {
    TargetResource = CWeakReference<CVisual>::GetTargetResource(*v87);
LABEL_134:
    v89 = TargetResource;
    goto LABEL_135;
  }
  v89 = 0LL;
LABEL_135:
  if ( v89 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v518 + 184LL))(v518) )
    {
      v90 = (struct _LIST_ENTRY *)((char *)v520 + 328);
LABEL_138:
      if ( v90 && !BYTE4(v90->Blink) )
      {
        v91 = v89;
        while ( v89 )
        {
          if ( v89 == *((_QWORD *)v518 + 9) )
            goto LABEL_12;
          if ( v91 )
          {
            v91 = *(_QWORD *)(v91 + 88);
            if ( v91 )
            {
              if ( v89 == v91 )
                break;
              v91 = *(_QWORD *)(v91 + 88);
              if ( v89 == v91 )
                break;
            }
          }
          v89 = *(_QWORD *)(v89 + 88);
        }
        goto LABEL_79;
      }
    }
    else
    {
      v145 = CVisual::GetTreeDataListHead(v520);
      v146 = v145;
      if ( v145 )
      {
        for ( n = v145->Flink; n != v146; n = n->Flink )
        {
          v90 = n - 22;
          if ( (struct CVisualTree *)n[2].Flink == v518 )
            goto LABEL_138;
        }
      }
    }
  }
LABEL_12:
  if ( *((_BYTE *)v13 + 193) )
  {
LABEL_79:
    v58 = *((_DWORD *)v13 + 798);
    if ( v58 )
      *((_DWORD *)v13 + 798) = --v58;
    v59 = *((unsigned int *)v13 + 799);
    if ( v58 != (_DWORD)v59 )
      goto LABEL_82;
    v99 = 2 * v59;
    if ( v99 > 0xFFFFFFFF )
    {
      v62 = -2147024362;
      v63 = 98LL;
    }
    else
    {
      if ( (unsigned int)v99 <= 0x40 )
        LODWORD(v99) = 64;
      v100 = v99;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v99 <= 1 )
      {
        v62 = -2147024809;
      }
      else
      {
        v101 = GetProcessHeap();
        v102 = HeapAlloc(v101, 0, v100);
        v103 = v102;
        if ( v102 )
        {
          memcpy_0(v102, *((const void **)v13 + 398), v58);
          v152 = (void *)*((_QWORD *)v13 + 398);
          if ( v152 )
          {
            v153 = GetProcessHeap();
            HeapFree(v153, 0, v152);
          }
          *((_QWORD *)v13 + 398) = v103;
          *((_DWORD *)v13 + 799) = v100;
LABEL_82:
          v23 = v517;
          *(_BYTE *)(*((unsigned int *)v13 + 798) + *((_QWORD *)v13 + 398)) = 0;
          v60 = (unsigned int)(*((_DWORD *)v13 + 798) + 1);
          *((_DWORD *)v13 + 798) = v60;
          v61 = *((_DWORD *)v13 + 801);
          if ( v61 <= (unsigned int)v60 )
            v61 = v60;
          *((_DWORD *)v13 + 801) = v61;
          goto LABEL_88;
        }
        v62 = -2147024882;
      }
      v63 = 104LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v63,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v62);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v62);
    goto LABEL_87;
  }
  if ( !(unsigned int)((__int64)(*((_QWORD *)v520 + 35) - *((_QWORD *)v520 + 34)) >> 4)
    && !(unsigned int)((__int64)(*((_QWORD *)v520 + 38) - *((_QWORD *)v520 + 37)) >> 4) )
  {
LABEL_15:
    v17 = *(CProcessAttribution **)(*((_QWORD *)v13 + 82) + 8LL * (unsigned int)(*((_DWORD *)v13 + 170) - 1));
    v18 = *(_QWORD *)v15;
    v551 = v17;
    v19 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(v18 + 160);
    if ( v19 == CResource::GetProcessAttributionNoRef )
    {
      v20 = *(_QWORD *)(v15 + 56);
      if ( !v20 )
        goto LABEL_20;
      v21 = *(CProcessAttribution **)(v20 + 64);
    }
    else if ( v19 == CWindowNode::GetProcessAttributionNoRef )
    {
      v21 = *(CProcessAttribution **)(v15 + 824);
    }
    else
    {
      v21 = v19((CWindowNode *)v15);
    }
    if ( !v21 || v21 == v17 )
    {
LABEL_20:
      v22 = v521;
      *v521 = 1;
      if ( (*(_BYTE *)(v15 + 105) & 0xC) != 0 )
      {
        CVisual::GetHeatMapProperties(v15, &v566);
        v512 = (*(_BYTE *)(v15 + 105) & 4) != 0;
        *(_OWORD *)&v546[4] = v566;
        *(_DWORD *)v546 = 2 - v512;
        v547 = v567;
        v513 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push((int)g_pComposition + 6272);
        v517 = v513;
        v23 = v513;
        v516 = v513;
        if ( v513 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v513, 0x15D3u, 0LL);
          goto LABEL_89;
        }
      }
      else
      {
        v23 = v517;
      }
      v24 = HIBYTE(*(_DWORD *)(v15 + 96)) & 0x7F;
      if ( !v24 )
      {
LABEL_23:
        v25 = *((_DWORD *)v13 + 74);
        v541 = 0LL;
        if ( v25 )
          v26 = (void *)(*((_QWORD *)v13 + 36) + 68LL * (unsigned int)(v25 - 1));
        else
          v26 = &CMILMatrix::Identity;
        v27 = *((_QWORD *)v13 + 993);
        v28 = (float *)(v27 + 80);
        if ( v15 != *(_QWORD *)(v27 + 72) )
          v28 = (float *)(v15 + 152);
        CMILMatrix::Transform3DBoundsHelper<1>((__int64)v26, v28, (float *)&v564);
        v30 = *((float *)&v564 + 2);
        LODWORD(v31) = v564;
        v32 = *((float *)&v564 + 3);
        v33 = *((float *)&v564 + 1);
        if ( *((float *)&v564 + 2) > *(float *)&v564 && *((float *)&v564 + 3) > *((float *)&v564 + 1) )
        {
          v34 = *(_DWORD *)(v15 + 96);
          if ( (v34 & 0x200) != 0 )
          {
            v35 = FLOAT_4_0;
          }
          else if ( (v34 & 0x800) != 0 )
          {
            v35 = FLOAT_0_5;
          }
          else
          {
            v35 = 0.0;
          }
          if ( (v34 & 0x1000) != 0 )
            v35 = v35 + 0.5;
          if ( v35 != 0.0 )
          {
            v31 = *(float *)&v564 - v35;
            v33 = *((float *)&v564 + 1) - v35;
            v30 = *((float *)&v564 + 2) + v35;
            v32 = *((float *)&v564 + 3) + v35;
            *(float *)&v564 = *(float *)&v564 - v35;
            *((float *)&v564 + 1) = *((float *)&v564 + 1) - v35;
            *((float *)&v564 + 2) = *((float *)&v564 + 2) + v35;
            *((float *)&v564 + 3) = *((float *)&v564 + 3) + v35;
            *(float *)&v565 = *(float *)&v565 + 0.0;
            *((float *)&v565 + 1) = *((float *)&v565 + 1) + 0.0;
          }
        }
        v36 = *((_QWORD *)v13 + 94);
        if ( v36 == *((_QWORD *)v13 + 93) )
        {
          v38.m128_i32[0] = _xmm;
          LODWORD(v39) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
          LODWORD(v40) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
          LODWORD(v41) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
        }
        else
        {
          if ( *(_QWORD *)(v36 - 184) )
          {
            v37 = *((_DWORD *)v13 + 780);
            if ( v37 )
              v38 = *(__m128 *)(*((_QWORD *)v13 + 389) + 16LL * (unsigned int)(v37 - 1));
            else
              v38 = (__m128)_xmm;
            LODWORD(v39) = _mm_shuffle_ps(v38, v38, 255).m128_u32[0];
            LODWORD(v40) = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
            LODWORD(v41) = _mm_shuffle_ps(v38, v38, 85).m128_u32[0];
          }
          else
          {
            v503 = *(_QWORD *)(v36 - 192);
            v504 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v503 + 88LL);
            if ( (char *)v504 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
              IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v503, v549);
            else
              v504(v503, v549);
            v32 = *((float *)&v564 + 3);
            v30 = *((float *)&v564 + 2);
            v38.m128_i32[0] = 0;
            v33 = *((float *)&v564 + 1);
            v41 = 0.0;
            LODWORD(v31) = v564;
            v40 = (float)v549[0];
            v39 = (float)v549[1];
          }
          v42 = *((_QWORD *)v13 + 94);
          if ( v42 != *((_QWORD *)v13 + 93) && *(_QWORD *)(v42 - 168) )
          {
            v43 = *((_DWORD *)v13 + 786);
            if ( v43 )
              v44 = *(__m128 *)(*((_QWORD *)v13 + 392) + 16LL * (unsigned int)(v43 - 1));
            else
              v44 = (__m128)_xmm;
            if ( v44.m128_f32[0] > v38.m128_f32[0] )
              v38.m128_i32[0] = v44.m128_i32[0];
            v45 = v41;
            v46 = _mm_shuffle_ps(v44, v44, 85).m128_f32[0];
            if ( v46 > v41 )
            {
              v41 = v46;
              v45 = v46;
            }
            v47 = v45;
            v48 = _mm_shuffle_ps(v44, v44, 170).m128_f32[0];
            v49 = v40;
            if ( v40 > v48 )
            {
              v40 = v48;
              v49 = v48;
            }
            v50 = _mm_shuffle_ps(v44, v44, 255).m128_f32[0];
            v51 = v39;
            if ( v39 > v50 )
            {
              v39 = v50;
              v51 = v50;
              v47 = v45;
            }
            if ( v49 <= v38.m128_f32[0] || v51 <= v47 )
            {
              v39 = 0.0;
              v40 = 0.0;
              v41 = 0.0;
              v38.m128_i32[0] = 0;
            }
          }
        }
        if ( v38.m128_f32[0] > v31 )
        {
          LODWORD(v564) = v38.m128_i32[0];
          v31 = v38.m128_f32[0];
        }
        if ( v41 > v33 )
        {
          *((float *)&v564 + 1) = v41;
          v33 = v41;
        }
        if ( v30 > v40 )
        {
          *((float *)&v564 + 2) = v40;
          v30 = v40;
        }
        if ( v32 > v39 )
        {
          *((float *)&v564 + 3) = v39;
          v32 = v39;
        }
        v52 = *((float *)&v565 + 1) <= *(float *)&v565;
        if ( v30 <= v31 )
          ++v52;
        if ( v32 <= v33 )
          ++v52;
        if ( v52 > 1 )
        {
          v32 = 0.0;
          v30 = 0.0;
          v33 = 0.0;
          v564 = 0uLL;
          v31 = 0.0;
          v565 = 0LL;
        }
        v553[0] = __PAIR64__(LODWORD(v33), LODWORD(v31));
        v553[1] = __PAIR64__(LODWORD(v32), LODWORD(v30));
        if ( v30 > v31 && v32 > v33 )
        {
          v53 = *((_QWORD *)v13 + 995);
          v54 = CWindowOcclusionInfo::`vector deleting destructor';
          *(_QWORD *)&v566 = v53;
          if ( !v53 )
            goto LABEL_801;
          v55 = (int **)*(unsigned int *)(v53 + 1536);
          v56 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))v15;
          LODWORD(v539) = *(_DWORD *)(v53 + 1536);
          while ( 1 )
          {
            v542 = (CLayerVisual *)v56;
            if ( !v56 )
            {
              v363 = 0LL;
              goto LABEL_796;
            }
            if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v16 + 184LL))(v16) )
              break;
            v395 = *((_QWORD *)v56 + 29);
            if ( *(int *)v395 < 0 )
            {
              k = *(unsigned int *)(v395 + 4);
              v396 = (_BYTE *)(v395 + 8);
              for ( ii = 0; ii < (unsigned int)k; ++v396 )
              {
                if ( *v396 == 1 )
                  break;
                ++ii;
              }
              v398 = *(unsigned int *)(v395 + 4);
              if ( ii >= (unsigned int)v398 )
              {
                v399 = 0LL;
              }
              else
              {
                k = v398 + 15;
                v399 = (_QWORD ***)(v395 + k + 8LL * ii - (k & 7));
              }
              v400 = *v399;
              if ( v400 )
              {
                for ( jj = *v400; jj != v400; jj = (_QWORD *)*jj )
                {
                  v57 = (__int64)(jj - 44);
                  v540 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))(jj - 44);
                  if ( (struct CVisualTree *)jj[4] == v16 )
                    goto LABEL_76;
                }
              }
            }
LABEL_77:
            if ( v56 == *((void *(__fastcall **)(CSurfaceDrawListBrush *__hidden, unsigned int))v16 + 9) )
              v56 = 0LL;
            else
              v56 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))*((_QWORD *)v56 + 11);
          }
          v57 = (__int64)v56 + 328;
          v540 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))((char *)v56 + 328);
LABEL_76:
          if ( !v57 )
            goto LABEL_77;
          v354 = *(__int64 **)(v57 + 176);
          v29 = 0LL;
          v355 = *(__int64 **)(v57 + 184);
          v538 = 0LL;
          while ( v354 != v355 )
          {
            if ( *(_DWORD *)(*v354 + 32) == (_DWORD)v55 )
            {
              v29 = *v354;
              v538 = *v354;
              break;
            }
            ++v354;
          }
          k = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 248) + 24LL) + 888LL);
          *(_QWORD *)v546 = k;
          if ( *(_QWORD *)(v57 + 216) == k )
          {
LABEL_776:
            if ( !v29 )
              goto LABEL_77;
            v356 = 0LL;
            if ( g_pComposition )
              v356 = *((_QWORD *)g_pComposition + 111);
            if ( *(_QWORD *)(v29 + 16) != v356 )
            {
              v357 = *(void (__fastcall **)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))(*(_QWORD *)v29 + 16LL);
              if ( v357 == COcclusionInfo::UpdateZFromValidParent )
              {
                v358 = *(_QWORD *)(v29 + 8);
                while ( 1 )
                {
                  v358 = v358 == *((_QWORD *)v16 + 9) ? 0LL : *(_QWORD *)(v358 + 88);
                  if ( !v358 )
                    break;
                  v359 = 0LL;
                  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v16 + 184LL))(
                         v16,
                         k) )
                  {
                    v359 = (_QWORD *)(v358 + 328);
                  }
                  else
                  {
                    v415 = *(int **)(v358 + 232);
                    if ( *v415 < 0 )
                    {
                      v416 = v415[1];
                      v417 = v415 + 2;
                      for ( kk = 0; kk < v416; ++v417 )
                      {
                        if ( *v417 == 1 )
                          break;
                        ++kk;
                      }
                      v419 = (unsigned int)v415[1];
                      v420 = kk >= (unsigned int)v419
                           ? 0LL
                           : (int *)((char *)v415 + 8LL * kk - (((_BYTE)v419 + 15) & 7) + v419 + 15);
                      v421 = *(_QWORD **)v420;
                      if ( v421 )
                      {
                        for ( mm = (_QWORD *)*v421; mm != v421; mm = (_QWORD *)*mm )
                        {
                          if ( (struct CVisualTree *)mm[4] == v16 )
                          {
                            v359 = mm - 44;
                            break;
                          }
                        }
                      }
                    }
                  }
                  v29 = v538;
                  v360 = 0LL;
                  v361 = (__int64 *)v359[22];
                  k = *(unsigned int *)(v538 + 32);
                  while ( v361 != (__int64 *)v359[23] )
                  {
                    if ( *(_DWORD *)(*v361 + 32) == (_DWORD)k )
                    {
                      v360 = *v361;
                      break;
                    }
                    ++v361;
                  }
                  v362 = *(_QWORD *)(*(_QWORD *)(v359[31] + 24LL) + 888LL);
                  if ( v359[27] != v362 )
                  {
                    v359[27] = v362;
                    v402 = v359[22];
                    if ( (unsigned __int64)((v359[23] - v402) >> 3) > 1 )
                    {
                      while ( v402 != v359[23] )
                      {
                        if ( *(_QWORD *)v402 == v360
                          || (k = *(_QWORD *)(*(_QWORD *)v402 + 16LL)) == 0
                          || (unsigned __int64)(v362 - k) < 0xA )
                        {
                          v402 += 8LL;
                        }
                        else
                        {
                          v555 = v402;
                          v402 = *(_QWORD *)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                              v359 + 22,
                                              v559,
                                              &v555);
                        }
                      }
                      v29 = v538;
                    }
                  }
                  if ( v360 && *(_QWORD *)(v360 + 16) == v356 )
                  {
                    *(_DWORD *)(v29 + 36) = *(_DWORD *)(v360 + 40);
                    *(_DWORD *)(v29 + 40) = *(_DWORD *)(v360 + 40);
                    *(_QWORD *)(v29 + 16) = v356;
                    break;
                  }
                  v16 = v518;
                }
              }
              else
              {
                v357((COcclusionInfo *)v29, v16, v356);
                v29 = v538;
              }
            }
            v363 = *(unsigned int *)(v29 + 36);
LABEL_796:
            if ( v30 <= v31
              || v32 <= v33
              || (_DWORD)v363
              && (*(float *)v546 = v31,
                  *(float *)&v546[4] = v33,
                  *(float *)&v546[8] = v30,
                  *(float *)&v546[12] = v32,
                  (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v566 + 616, v546)) )
            {
              v13 = v519;
              v264 = *((_DWORD *)v519 + 798);
              if ( v264 )
                *((_DWORD *)v519 + 798) = --v264;
              if ( v264 == *((_DWORD *)v13 + 799) )
              {
                v336 = CWatermarkStack<bool,64,2,10>::Grow((__int64)v13 + 3184, k, v363, v29, (const void **)v13 + 398);
                if ( v336 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)(unsigned int)v336);
                  v23 = v517;
                  v15 = (__int64)v520;
                  v16 = v518;
                  goto LABEL_88;
                }
              }
              v23 = v517;
              v15 = (__int64)v520;
              *(_BYTE *)(*((unsigned int *)v13 + 798) + *((_QWORD *)v13 + 398)) = 0;
              v60 = (unsigned int)(*((_DWORD *)v13 + 798) + 1);
              *((_DWORD *)v13 + 798) = v60;
              v265 = *((_DWORD *)v13 + 801);
              if ( v265 <= (unsigned int)v60 )
                v265 = v60;
              *((_DWORD *)v13 + 801) = v265;
              goto LABEL_474;
            }
            v15 = (__int64)v520;
            v13 = v519;
LABEL_801:
            v54 = (void *(__fastcall *)(CWindowOcclusionInfo *__hidden, unsigned int))*((_QWORD *)v13 + 995);
            *(_QWORD *)v546 = v54;
            if ( !v54 )
              goto LABEL_835;
            v15 = *((unsigned int *)v54 + 384);
            v55 = (int **)v520;
            v364 = v518;
            LODWORD(v538) = *((_DWORD *)v54 + 384);
            while ( 1 )
            {
              v542 = (CLayerVisual *)v55;
              if ( !v55 )
              {
                v374 = 0;
                goto LABEL_833;
              }
              if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v364 + 184LL))(v364) )
              {
                v364 = v518;
                v56 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))(v55 + 41);
                v540 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))(v55 + 41);
LABEL_806:
                if ( v56 )
                {
                  v365 = (__int64 *)*((_QWORD *)v56 + 22);
                  v348 = 0LL;
                  v539 = 0LL;
                  while ( v365 != *((__int64 **)v56 + 23) )
                  {
                    if ( *(_DWORD *)(*v365 + 32) == (_DWORD)v15 )
                    {
                      v348 = *v365;
                      v539 = *v365;
                      break;
                    }
                    ++v365;
                  }
                  v366 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v56 + 31) + 24LL) + 888LL);
                  *(_QWORD *)&v566 = v366;
                  if ( *((_QWORD *)v56 + 27) != v366 )
                  {
                    *((_QWORD *)v56 + 27) = v366;
                    v403 = *((_QWORD *)v56 + 22);
                    if ( (unsigned __int64)((*((_QWORD *)v56 + 23) - v403) >> 3) > 1 )
                    {
                      while ( v403 != *((_QWORD *)v56 + 23) )
                      {
                        if ( *(_QWORD *)v403 == v348
                          || (v404 = *(_QWORD *)(*(_QWORD *)v403 + 16LL)) == 0
                          || (unsigned __int64)(v366 - v404) < 0xA )
                        {
                          v403 += 8LL;
                        }
                        else
                        {
                          v405 = *((_QWORD *)v56 + 22);
                          v57 = (v403 - v405) >> 3;
                          v406 = (*((_QWORD *)v56 + 23) - v405) >> 3;
                          v545 = v57;
                          if ( v57 + 1 > v406 )
                            goto LABEL_762;
                          v15 = v405 + 8 * v406;
                          if ( v57 + 1 != v406 )
                          {
                            if ( !v57 || v405 && v57 >= 0 && v406 >= v57 )
                            {
                              v407 = (__int64 *)(v405 + 8 * (v57 + 1));
                              v408 = (v15 - (__int64)v407) >> 3;
                              v409 = v408 <= 0;
                              if ( v408 < 0 )
                              {
                                if ( v57 < (unsigned __int64)-v408 )
                                  goto LABEL_992;
                                v409 = v408 <= 0;
                              }
                              if ( v409 || v406 - v57 >= v408 )
                              {
                                v54 = (void *(__fastcall *)(CWindowOcclusionInfo *__hidden, unsigned int))(8 * v57 - 8 * (v57 + 1));
                                while ( 1 )
                                {
                                  while ( 1 )
                                  {
                                    if ( v407 == (__int64 *)v15 )
                                      goto LABEL_1033;
                                    v410 = *v407;
                                    *v407 = 0LL;
                                    v411 = *(void *(__fastcall ****)(CWindowOcclusionInfo *__hidden, unsigned int))((char *)v407 + (_QWORD)v54);
                                    *(__int64 *)((char *)v407 + (_QWORD)v54) = v410;
                                    if ( v411 )
                                      break;
LABEL_909:
                                    ++v407;
                                  }
                                  v412 = **v411;
                                  if ( v412 == CWindowOcclusionInfo::`vector deleting destructor' )
                                  {
                                    operator delete(v411, 0x38uLL);
                                    goto LABEL_909;
                                  }
                                  if ( v412 == CSurfaceDrawListBrush::`vector deleting destructor' )
                                  {
                                    CSurfaceDrawListBrush::`vector deleting destructor'(
                                      (CSurfaceDrawListBrush *)v411,
                                      1u);
                                    ++v407;
                                  }
                                  else
                                  {
                                    if ( v412 != CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                                    {
                                      ((void (__fastcall *)(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int), __int64, __int64, struct CVisualTree *))v412)(
                                        v411,
                                        1LL,
                                        v405,
                                        v364);
                                      goto LABEL_909;
                                    }
                                    CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
                                      (CMultiPrimitiveDrawListBrush *)v411,
                                      1u);
                                    ++v407;
                                  }
                                }
                              }
                            }
LABEL_992:
                            _invalid_parameter_noinfo_noreturn();
                          }
LABEL_1033:
                          v55 = (int **)(v15 - 8);
                          do
                          {
                            v465 = (void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))*v55;
                            if ( *v55 )
                            {
                              v466 = **v465;
                              if ( v466 == CWindowOcclusionInfo::`vector deleting destructor' )
                              {
                                operator delete(v465, 0x38uLL);
                              }
                              else if ( v466 == CSurfaceDrawListBrush::`vector deleting destructor' )
                              {
                                CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v465, 1u);
                              }
                              else if ( v466 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                              {
                                CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
                                  (CMultiPrimitiveDrawListBrush *)v465,
                                  1u);
                              }
                              else
                              {
                                ((void (__fastcall *)(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int), __int64, __int64, struct CVisualTree *))v466)(
                                  v465,
                                  1LL,
                                  v405,
                                  v364);
                              }
                            }
                            ++v55;
                          }
                          while ( v55 != (int **)v15 );
                          v467 = v545;
                          v3 = 0LL;
                          v56 = v540;
                          v348 = v539;
                          *((_QWORD *)v540 + 23) -= 8LL;
                          v366 = v566;
                          v403 = *((_QWORD *)v56 + 22) + 8 * v467;
                        }
                      }
                      v55 = (int **)v542;
                      v15 = (unsigned int)v538;
                      v364 = v518;
                    }
                  }
                  if ( v348 )
                  {
                    v367 = 0LL;
                    if ( g_pComposition )
                      v367 = *((_QWORD *)g_pComposition + 111);
                    if ( *(_QWORD *)(v348 + 16) != v367 )
                    {
                      v368 = *(void (__fastcall **)(CWindowOcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))(*(_QWORD *)v348 + 16LL);
                      if ( v368 == COcclusionInfo::UpdateZFromValidParent )
                      {
                        v369 = *(_QWORD *)(v348 + 8);
                        while ( 1 )
                        {
                          v369 = v369 == *((_QWORD *)v364 + 9) ? 0LL : *(_QWORD *)(v369 + 88);
                          if ( !v369 )
                            break;
                          v370 = 0LL;
                          if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v364 + 184LL))(v364) )
                          {
                            v370 = (__int64 *)(v369 + 328);
                          }
                          else
                          {
                            v432 = *(int **)(v369 + 232);
                            if ( *v432 < 0 )
                            {
                              v433 = v432[1];
                              v434 = v432 + 2;
                              for ( nn = 0; nn < v433; ++v434 )
                              {
                                if ( *v434 == 1 )
                                  break;
                                ++nn;
                              }
                              v436 = (unsigned int)v432[1];
                              v437 = nn >= (unsigned int)v436
                                   ? 0LL
                                   : (int *)((char *)v432 + 8LL * nn - (((_BYTE)v436 + 15) & 7) + v436 + 15);
                              v438 = *(__int64 ****)v437;
                              if ( v438 )
                              {
                                for ( i1 = *v438; i1 != (__int64 **)v438; i1 = (__int64 **)*i1 )
                                {
                                  if ( i1[4] == (__int64 *)v518 )
                                  {
                                    v370 = (__int64 *)(i1 - 44);
                                    break;
                                  }
                                }
                              }
                            }
                          }
                          v371 = 0LL;
                          for ( i2 = (__int64 *)v370[22]; i2 != (__int64 *)v370[23]; ++i2 )
                          {
                            if ( *(_DWORD *)(*i2 + 32) == *(_DWORD *)(v348 + 32) )
                            {
                              v371 = *i2;
                              break;
                            }
                          }
                          v373 = *(_QWORD *)(*(_QWORD *)(v370[31] + 24) + 888LL);
                          if ( v370[27] != v373 )
                          {
                            v370[27] = v373;
                            v413 = v370[22];
                            if ( (unsigned __int64)((v370[23] - v413) >> 3) > 1 )
                            {
                              while ( v413 != v370[23] )
                              {
                                if ( *(_QWORD *)v413 == v371
                                  || (v414 = *(_QWORD *)(*(_QWORD *)v413 + 16LL)) == 0
                                  || (unsigned __int64)(v373 - v414) < 0xA )
                                {
                                  v413 += 8LL;
                                }
                                else
                                {
                                  v557 = v413;
                                  v413 = *(_QWORD *)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                                                      v370 + 22,
                                                      v560,
                                                      &v557);
                                }
                              }
                            }
                          }
                          if ( v371 && *(_QWORD *)(v371 + 16) == v367 )
                          {
                            v348 = v539;
                            *(_DWORD *)(v539 + 36) = *(_DWORD *)(v371 + 40);
                            *(_DWORD *)(v348 + 40) = *(_DWORD *)(v371 + 40);
                            *(_QWORD *)(v348 + 16) = v367;
                            break;
                          }
                          v364 = v518;
                          v348 = v539;
                        }
                        LODWORD(v15) = v538;
                      }
                      else if ( v368 == CWindowOcclusionInfo::UpdateZFromValidParent )
                      {
                        COcclusionInfo::UpdateZFromValidParent((COcclusionInfo *)v348, v364, v367);
                        v431 = *(_DWORD *)(v348 + 36);
                        *(_DWORD *)(v348 + 48) = v431;
                        *(_DWORD *)(v348 + 52) = v431;
                      }
                      else
                      {
                        v368((CWindowOcclusionInfo *)v348, v364, v367);
                      }
                    }
                    v374 = *(_DWORD *)(v348 + 40);
LABEL_833:
                    v13 = v519;
                    v375 = *(_QWORD *)v546;
                    *((_DWORD *)v519 + 1994) = v374;
                    if ( v374 >= *(_DWORD *)(v375 + 1560) )
                    {
                      v16 = v518;
                      v460 = v15;
                      v15 = (__int64)v520;
                      if ( (int)CVisual::GetSubtreeZ(v520, v518, v460) < *(_DWORD *)(v375 + 1560) )
                      {
                        v23 = v517;
                        v22 = v521;
                      }
                      else
                      {
                        v463 = *((_DWORD *)v13 + 798);
                        if ( v463 )
                          *((_DWORD *)v13 + 798) = --v463;
                        if ( v463 == *((_DWORD *)v13 + 799)
                          && (v482 = CWatermarkStack<bool,64,2,10>::Grow(
                                       (__int64)v13 + 3184,
                                       k,
                                       v461,
                                       v462,
                                       (const void **)v13 + 398),
                              v482 < 0) )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x83,
                            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                            (const char *)(unsigned int)v482);
                          v22 = v521;
                          v23 = v517;
                          *v521 = 0;
                        }
                        else
                        {
                          v23 = v517;
                          *(_BYTE *)(*((unsigned int *)v13 + 798) + *((_QWORD *)v13 + 398)) = 0;
                          v60 = (unsigned int)(*((_DWORD *)v13 + 798) + 1);
                          *((_DWORD *)v13 + 798) = v60;
                          v464 = *((_DWORD *)v13 + 801);
                          if ( v464 <= (unsigned int)v60 )
                            v464 = v60;
                          *((_DWORD *)v13 + 801) = v464;
                          v22 = v521;
                          *v521 = 0;
                        }
                      }
                      goto LABEL_89;
                    }
                    v15 = (__int64)v520;
LABEL_835:
                    v16 = v518;
                    v523[0] = (CRectanglesShape *)v15;
                    if ( v15 == *((_QWORD *)v518 + 9) )
                    {
                      v279 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                      v378 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                    }
                    else
                    {
                      v376 = *(_QWORD *)(v15 + 224);
                      if ( (*(_DWORD *)(v376 + 4) & 0x8000000) != 0 )
                      {
                        v440 = *(float *)(v376 + 12);
                        v441 = (float *)(v376 + 12);
                        if ( (LODWORD(v440) & 0x7F000000) != 0x5000000 )
                        {
                          do
                          {
                            v441 = (float *)((char *)v441 + (LODWORD(v440) & 0xFFFFFF) + 4);
                            v440 = *v441;
                          }
                          while ( (*(_DWORD *)v441 & 0x7F000000) != 0x5000000 );
                        }
                        v377 = v441[1];
                        v279 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                      }
                      else
                      {
                        v279 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                        v377 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                      }
                      v378 = fminf(v279, fmaxf(v377, 0.0));
                    }
                    v527 = v378;
                    v379 = *(_DWORD **)(v15 + 232);
                    v380 = v279;
                    if ( (*v379 & 0x800000) != 0 )
                    {
                      v443 = v379[1];
                      v444 = v379 + 2;
                      for ( i3 = 0; i3 < v443; ++v444 )
                      {
                        if ( *v444 == 9 )
                          break;
                        ++i3;
                      }
                      v446 = (unsigned int)v379[1];
                      if ( i3 >= (unsigned int)v446 )
                        v447 = 0LL;
                      else
                        v447 = (float **)((char *)v379 + v446 + 8LL * i3 - (((_BYTE)v446 + 15) & 7) + 15);
                      v448 = *v447;
                      v449 = *(__int64 (__fastcall **)())(*(_QWORD *)v448 + 64LL);
                      if ( v449 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
                        || ((char *)v449 != (char *)CMatrixTransform3D::IsOfType
                          ? (v478 = ((__int64 (__fastcall *)(float *, __int64))v449)(v448, 58LL))
                          : (v478 = CMatrixTransform3D::IsOfType((__int64)v448, 58)),
                            v478) )
                      {
                        v380 = v448[20];
                      }
                    }
                    v381 = fminf(v279, fmaxf(v380, 0.0)) * v527;
                    v527 = v381;
                    v382 = *((_DWORD *)v13 + 792);
                    if ( v382 )
                      v383 = *(float *)(*((_QWORD *)v13 + 395) + 4LL * (unsigned int)(v382 - 1));
                    else
                      v383 = v279;
                    v527 = v383 * v381;
                    v384 = *(_DWORD **)(v15 + 232);
                    if ( (*v384 & 0x4000000) != 0 )
                    {
                      v385 = v384[1];
                      v386 = v384 + 2;
                      for ( i4 = 0; i4 < v385; ++v386 )
                      {
                        if ( *v386 == 6 )
                          break;
                        ++i4;
                      }
                      v388 = (unsigned int)v384[1];
                      if ( i4 >= (unsigned int)v388 )
                        v389 = 0LL;
                      else
                        v389 = (_QWORD *)((char *)v384 + 8LL * i4 - (((_BYTE)v388 + 15) & 7) + v388 + 15);
                      if ( *v389 )
                        BYTE1(v537[0]) = 1;
                    }
                    v390 = *(_DWORD **)(v15 + 232);
                    if ( (*v390 & 0x800000) != 0 )
                    {
                      v452 = v390[1];
                      v453 = v390 + 2;
                      for ( i5 = 0; i5 < v452; ++v453 )
                      {
                        if ( *v453 == 9 )
                          break;
                        ++i5;
                      }
                      v455 = (unsigned int)v390[1];
                      if ( i5 >= (unsigned int)v455 )
                        v456 = 0LL;
                      else
                        v456 = (__int64 *)((char *)v390 + 8LL * i5 - (((_BYTE)v455 + 15) & 7) + v455 + 15);
                      v457 = *v456;
                      v458 = *(__int64 (__fastcall **)())(*(_QWORD *)v457 + 64LL);
                      if ( v458 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
                      {
                        if ( !CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v457, 61) )
                          goto LABEL_850;
                      }
                      else if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v458)(v457, 61LL) )
                      {
                        goto LABEL_850;
                      }
                      BYTE2(v537[0]) = 1;
                    }
LABEL_850:
                    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 224) + 4LL) & 0x4000000) != 0 )
                    {
                      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)v13 + 4) + 8LL) + 24LL))(
                        *((_QWORD *)v13 + 4) + 8LL,
                        v575);
                      ColorSpace = CVisual::GetColorSpace((CVisual *)v15);
                      if ( ColorSpace != *(_DWORD *)(v481 + 8) )
                        LOBYTE(v537[1]) = 1;
                    }
                    v391 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v15 + 64LL);
                    if ( (char *)v391 == (char *)CSpriteVisual::IsOfType )
                    {
                      if ( CVisual::IsOfType(v15, 93) )
                      {
LABEL_853:
                        if ( *(_QWORD *)(v15 + 688) || *(_QWORD *)(v15 + 680) )
                        {
                          v392 = 1;
                          if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled((CLayerVisual *)v15) )
                          {
                            if ( v15 == *(_QWORD *)(*((_QWORD *)v13 + 993) + 72LL) )
                            {
                              v442 = (CDrawingContext *)*((_QWORD *)v13 + 26);
                              if ( v442 )
                              {
                                if ( CDrawingContext::GetCurrentVisual(v442) == (struct CVisual *)v15 )
                                  v392 = 0;
                              }
                            }
                          }
                        }
                        else
                        {
                          v392 = 0;
                        }
                        HIBYTE(v537[0]) = v392;
                      }
                    }
                    else
                    {
                      if ( v391 == CVisual::IsOfType )
                      {
                        v477 = CVisual::IsOfType(v15, 93);
                      }
                      else if ( v391 == CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
                      {
                        v477 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(v15, 93);
                      }
                      else
                      {
                        v477 = v391(v15, 93);
                      }
                      if ( v477 )
                        goto LABEL_853;
                    }
                    v393 = v527;
                    if ( v279 > v527 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v527 - v279) & _xmm) >= 0.0000011920929 )
                    {
                      if ( (*(_DWORD *)(v15 + 96) & 0x20000) == 0 && *((_DWORD *)v13 + 62) != 4
                        || *((_DWORD *)v13 + 63) == 1
                        || *(_DWORD *)(v15 + 112) == 1 )
                      {
                        BYTE1(v537[1]) = 1;
                      }
                      else
                      {
                        if ( EventEnabled(
                               Microsoft_Windows_Dwm_Core_Provider_Context,
                               &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
                        {
                          v8 = (unsigned int)CPtrArray<CVisual>::GetCount(v15 + 80) == 0;
                          v479 = HIDWORD(v536);
                          if ( !v8 )
                          {
                            v479 = HIDWORD(v536) | 0x20;
                            HIDWORD(v536) |= 0x20u;
                          }
                          if ( (*(_DWORD *)(v15 + 96) & 0x20000) != 0 )
                            HIDWORD(v536) = v479 | 0x40;
                        }
                        v393 = v527;
                      }
                    }
                    v394 = *(CSparseStorage::AllocatedStorage **)(v15 + 224);
                    if ( (*((_DWORD *)v394 + 1) & 0x2000000) != 0 )
                    {
                      Slot = CSparseStorage::AllocatedStorage::FindSlot(v394, 7);
                      v60 = *((unsigned int *)Slot + 1);
                      v526 = *((_DWORD *)Slot + 1);
                    }
                    else
                    {
                      v60 = v526;
                    }
                    if ( BYTE2(v537[0]) || *(_WORD *)((char *)v537 + 3) || (_DWORD)v60 )
                    {
                      LODWORD(v536) = 3;
                      if ( HIBYTE(v537[0]) )
                        LODWORD(v536) = 4;
                    }
                    if ( COERCE_FLOAT(LODWORD(v393) & _xmm) < 0.0000011920929 )
                    {
LABEL_87:
                      v23 = v517;
LABEL_88:
                      v22 = v521;
                      *v521 = 0;
                      goto LABEL_89;
                    }
                    v154 = *(CGeometry **)(v15 + 248);
                    if ( !v154 )
                    {
LABEL_257:
                      v155 = (struct CMILMatrix *)&v530[20];
                      if ( !v523[1] )
                        v155 = 0LL;
                      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v518 + 184LL))(v518) )
                      {
                        v156 = (CLayerVisual *)((char *)v520 + 328);
LABEL_261:
                        if ( v156 )
                        {
                          v514 = 0;
                          CVisual::EnsureWorldTransform(v520, v518, v156);
                          CTreeData::GetWorldTransform(v156, (struct CMILMatrix *)&v528, &v514, v155);
                          if ( !v514 )
                            goto LABEL_263;
                          v15 = (__int64)v520;
                          goto LABEL_296;
                        }
                      }
                      else
                      {
                        v189 = (int *)*((_QWORD *)v520 + 29);
                        if ( *v189 < 0 )
                        {
                          v190 = v189[1];
                          v191 = v189 + 2;
                          for ( i6 = 0; i6 < v190; ++v191 )
                          {
                            if ( *v191 == 1 )
                              break;
                            ++i6;
                          }
                          v193 = (unsigned int)v189[1];
                          v194 = i6 >= (unsigned int)v193
                               ? 0LL
                               : (int *)((char *)v189 + v193 + 8LL * i6 - (((_BYTE)v193 + 15) & 7) + 15);
                          v195 = *(__int64 ****)v194;
                          if ( v195 )
                          {
                            for ( i7 = *v195; i7 != (__int64 **)v195; i7 = (__int64 **)*i7 )
                            {
                              v156 = (struct CTreeData *)(i7 - 44);
                              if ( i7[4] == (__int64 *)v518 )
                                goto LABEL_261;
                            }
                          }
                        }
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
LABEL_263:
                      v15 = (__int64)v520;
                      if ( v520 != *((CLayerVisual **)v13 + 994) )
                      {
                        if ( !*((_BYTE *)v13 + 8064) )
                          CDrawingContext::GetWorldTransform(v13, (struct CMILMatrix *)&v528);
LABEL_266:
                        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v523[1])
                          && !*((_BYTE *)v13 + 8064) )
                        {
                          CMILMatrix::Multiply((CMILMatrix *)&v530[20], (CDrawingContext *)((char *)v13 + 96));
                        }
                        v16 = v518;
                        CpuClippingData = CVisual::GetCpuClippingData((CVisual *)v15, v518);
                        D2DAntialiasMode = CDrawingContext::GetD2DAntialiasMode(v13);
                        v161 = detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::data(
                                 &v523[1],
                                 (unsigned int)D2DAntialiasMode);
                        v163 = CCpuClippingData::Update(
                                 CpuClippingData,
                                 v16,
                                 v15,
                                 (char *)v13 + 744,
                                 v161,
                                 &v530[20],
                                 *((_QWORD *)v13 + 27),
                                 v162,
                                 v536);
                        v516 = v163;
                        v23 = v163;
                        if ( v163 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v163, 0x166Au, 0LL);
                          v22 = v521;
                          goto LABEL_89;
                        }
                        if ( CCpuClippingData::HasCpuClip(CpuClippingData) )
                        {
                          LOBYTE(v537[0]) = 1;
                          v525 = CpuClippingData;
                        }
                        ScopeMode = CCpuClippingData::GetScopeMode();
                        CanIgnoreAncestorCpuClips = CCpuClippingData::CanIgnoreAncestorCpuClips(v165);
                        if ( CanIgnoreAncestorCpuClips )
                        {
                          v167 = v520;
                        }
                        else
                        {
                          if ( ScopeMode <= 2
                            || wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v523[1]) )
                          {
                            v167 = v520;
                          }
                          else
                          {
                            TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v13 + 288));
                            v167 = v520;
                            InputBounds = CVisual::GetInputBounds(v520, v226, TopByReference);
                            if ( (unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(v13, InputBounds) )
                            {
                              CanIgnoreAncestorCpuClips = 1;
                              goto LABEL_381;
                            }
                          }
                          CanIgnoreAncestorCpuClips = 0;
                        }
                        if ( ScopeMode == 2 || CanIgnoreAncestorCpuClips )
                        {
LABEL_381:
                          TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(&v566);
                          v213 = wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v523[1]);
                          v215 = &v528;
                          if ( v213 )
                            v215 = (__m128 *)&v530[20];
                          LOBYTE(v214) = 1;
                          v216 = CDrawingContext::PushClippingScope(
                                   (_DWORD)v13,
                                   (_DWORD)v167,
                                   v214,
                                   CanIgnoreAncestorCpuClips,
                                   (__int64)v215,
                                   (__int64)&v566);
                          v516 = v216;
                          v23 = v216;
                          if ( v216 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v216, 0x1691u, 0LL);
                          }
                          else
                          {
                            v217 = CDrawingContext::PushGpuClipRectInternal(
                                     (_DWORD)v13,
                                     (_DWORD)v167,
                                     (unsigned int)&v566,
                                     0,
                                     1);
                            v516 = v217;
                            v23 = v217;
                            if ( v217 >= 0 )
                              goto LABEL_276;
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v217, 0x1697u, 0LL);
                          }
                          goto LABEL_255;
                        }
LABEL_276:
                        if ( !CDrawingContext::NodeEffects::HasEffects((CDrawingContext::NodeEffects *)v523)
                          || CComposition::IsTextureMemoryHeatMapEnabled(g_pComposition) )
                        {
                          goto LABEL_277;
                        }
                        CDrawingContext::CalcNodeWorldSpaceInputBounds((__int64)v13, (__int64)v167, (__int64)&v571);
                        v187 = CDrawingContext::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                 (__int64)v13,
                                 (__int64)v167,
                                 (__int64)&v564,
                                 (__int64)&v571,
                                 (__int64)&v573,
                                 &v568);
                        v516 = v187;
                        v23 = v187;
                        if ( v187 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v187, 0x16ACu, 0LL);
                          goto LABEL_255;
                        }
                        v514 = 0;
                        v188 = CDrawingContext::PushEffects(
                                 v13,
                                 (CDrawingContext::NodeEffects *)v523,
                                 (__int64)&v568,
                                 (__int64)v553,
                                 (enum DXGI_COLOR_SPACE_TYPE)&v514);
                        v516 = v188;
                        v23 = v188;
                        if ( v188 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v188, 0x16B3u, 0LL);
                          goto LABEL_255;
                        }
                        if ( v514 )
                        {
                          v15 = (__int64)v520;
                          v16 = v518;
                          goto LABEL_88;
                        }
LABEL_277:
                        if ( ScopeMode == 4 )
                        {
                          if ( !CScopedClipStack::UseCpuClippingInScope((CDrawingContext *)((char *)v13 + 744)) )
                            goto LABEL_279;
                          TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(&v568);
                          v15 = (__int64)v520;
                          v295 = CDrawingContext::PushClippingScope(
                                   (_DWORD)v13,
                                   (_DWORD)v520,
                                   0,
                                   0,
                                   0LL,
                                   (__int64)&v568);
                          v516 = v295;
                          v23 = v295;
                          if ( v295 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v295, 0x16C9u, 0LL);
                            goto LABEL_515;
                          }
                          v296 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v13, v15, (unsigned int)&v568, 0, 1);
                          v516 = v296;
                          v23 = v296;
                          if ( v296 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v296, 0x16CFu, 0LL);
                            goto LABEL_515;
                          }
                          goto LABEL_280;
                        }
                        if ( ScopeMode != 3 )
                        {
LABEL_279:
                          v15 = (__int64)v520;
                          goto LABEL_280;
                        }
                        TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(&v568);
                        v15 = (__int64)v520;
                        LOBYTE(v173) = 1;
                        v174 = CDrawingContext::PushClippingScope(
                                 (_DWORD)v13,
                                 (_DWORD)v520,
                                 v173,
                                 0,
                                 (__int64)&v528,
                                 (__int64)&v568);
                        v516 = v174;
                        v23 = v174;
                        if ( v174 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v174, 0x16D9u, 0LL);
                          goto LABEL_515;
                        }
                        v175 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v13, v15, (unsigned int)&v568, 0, 1);
                        v516 = v175;
                        v23 = v175;
                        if ( v175 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v175, 0x16DFu, 0LL);
                          goto LABEL_515;
                        }
LABEL_280:
                        v168 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((char *)v13 + 3280);
                        v514 = 0;
                        v169 = *(_BYTE *)(v168 + 8);
                        if ( CVisual::HasNonDefaultEffectInternal((CVisual *)v15)
                          || CVisual::IsSimple3DRootOrHasEffects(v170, v552) )
                        {
                          v307 = lambda_88375b7c038d402b80e7daa8931735f4_::operator()(&v550, &v514);
                          CDrawingContext::StackBackfaceVisibilityEntry::StackBackfaceVisibilityEntry(
                            (CDrawingContext::StackBackfaceVisibilityEntry *)&v568,
                            (const struct CVisual *)v15,
                            v307);
                          v308 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                   (char *)v13 + 3280,
                                   &v568);
                          v516 = v308;
                          v23 = v308;
                          if ( v308 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v308, 0x16ECu, 0LL);
                            goto LABEL_515;
                          }
                        }
                        if ( CVisual::HasNonDefaultWindowBackgroundTreatmentInternal((CVisual *)v15) )
                        {
                          WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v171);
                          if ( CWindowBackgroundTreatment::HasValidBounds(WindowBackgroundTreatmentInternal) )
                          {
                            TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(&v568);
                            CDrawingContext::GetClipBoundsWorld(v13, &v568);
                            TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>(v574);
                            v283 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v13 + 288));
                            Bounds = CWindowBackgroundTreatment::GetBounds(
                                       WindowBackgroundTreatmentInternal,
                                       v284,
                                       v285,
                                       v283);
                            CMILMatrix::Transform3DBounds(v287, Bounds, v574);
                            v288 = Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)v574);
                            if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesIntersect(
                                                    &v568,
                                                    v288) )
                            {
                              v289 = 0;
                              v522 = 0;
                              v290 = 1;
                              if ( CWindowBackgroundTreatment::GetBackdropBrushNoRef(
                                     WindowBackgroundTreatmentInternal,
                                     &v522) )
                              {
                                v289 = v522;
                              }
                              v291 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v519 + 3) + 16LL))((char *)v519 + 24);
                              if ( !CWindowBackgroundTreatment::HasValidRenderingRealization(
                                      WindowBackgroundTreatmentInternal,
                                      v291) )
                              {
                                v13 = v519;
                                BitmapForEffectInput = CWindowBackgroundTreatment::GenerateBitmapForEffectInput(
                                                         WindowBackgroundTreatmentInternal,
                                                         v519);
                                v516 = BitmapForEffectInput;
                                v23 = BitmapForEffectInput;
                                if ( BitmapForEffectInput >= 0 )
                                {
                                  CWindowBackgroundTreatment::SetCacheInvalidationRequired(
                                    WindowBackgroundTreatmentInternal,
                                    1);
                                  v290 = !v289;
                                  goto LABEL_502;
                                }
                                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapForEffectInput, 0x1715u, 0LL);
LABEL_255:
                                v15 = (__int64)v520;
                                goto LABEL_289;
                              }
LABEL_502:
                              if ( v289 && !v290 )
                                CTelemetryFrames::IncrementWindowBackdropBrushCacheMisses(v292);
                              v13 = v519;
                              v294 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v519 + 288));
                              CWindowBackgroundTreatment::SetWorldTransform(
                                WindowBackgroundTreatmentInternal,
                                v294,
                                3LL);
                              v15 = (__int64)v520;
                            }
                          }
                        }
                        v172 = v552;
                        if ( CVisual::IsPreserve3DRoot((CVisual *)v15, v552) )
                        {
                          if ( !CVisual::HasBspPolygonList((CVisual *)v15) )
                            goto LABEL_289;
                          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                            McTemplateU0_EventWriteTransfer(
                              (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                              (__int64)&EVTDESC_P3D_RENDERING_Start,
                              v197);
                          v198 = CDrawingContext::DrawBspPolygonList(v13, (struct CVisual *)v15, v172);
                          v516 = v198;
                          v23 = v198;
                          if ( v198 >= 0 )
                          {
                            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                              McTemplateU0_EventWriteTransfer(
                                (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                                (__int64)&EVTDESC_P3D_RENDERING_Stop,
                                v199);
                            CProcessAttribution::MarkCompositorRendered(v551);
                            v22 = v521;
                            v16 = v518;
                            *v521 = 0;
                            goto LABEL_89;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v198, 0x177Au, 0LL);
                          goto LABEL_515;
                        }
                        v515[0] = 0;
                        if ( !*((_DWORD *)v13 + 64)
                          || v169 == (unsigned __int8)lambda_88375b7c038d402b80e7daa8931735f4_::operator()(&v550, &v514) )
                        {
                          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 256LL))(v15) )
                          {
                            v178 = *(__int64 (__fastcall **)(CVisual *, struct CDrawingContext *, struct CD3DDevice *(__fastcall *)(CD2DResource *__hidden)))(*(_QWORD *)v15 + 248LL);
                            if ( (char *)v178 == (char *)CSpriteVisual::RenderContent )
                            {
                              CSpriteVisual::RenderContent((CSpriteVisual *)v15, v13, v515);
                            }
                            else
                            {
                              if ( v178 == CVisual::RenderContent )
                              {
                                CVisual::RenderContent(
                                  (CVisual *)v15,
                                  v13,
                                  (struct CD3DDevice *(__fastcall *)(CD2DResource *__hidden))v515);
                                CProcessAttribution::MarkCompositorRendered(v551);
                                goto LABEL_287;
                              }
                              if ( (char *)v178 == (char *)CWindowNode::RenderContent )
                              {
                                CWindowNode::RenderContent((CWindowNode *)v15, v13, v515);
                                CProcessAttribution::MarkCompositorRendered(v551);
                                goto LABEL_287;
                              }
                              v178((CVisual *)v15, v13, (struct CD3DDevice *(__fastcall *)(CD2DResource *__hidden))v515);
                            }
                            CProcessAttribution::MarkCompositorRendered(v551);
                            goto LABEL_287;
                          }
                          if ( !CVisual::HasProtectedContent((CVisual *)v15) )
                            goto LABEL_287;
                          CDrawingContext::NotifyFrameContainsProtectedContent(v13);
                          if ( !CComposition::IsScreenReadBack(g_pComposition) )
                            goto LABEL_287;
                        }
                        else if ( !CVisual::HasNonDefaultEffectInternal((CVisual *)v15)
                               && !(*(__int64 (**)(void))(*(_QWORD *)v15 + 224LL))()
                               || !(unsigned __int8)lambda_88375b7c038d402b80e7daa8931735f4_::operator()(&v550, &v514)
                               || *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((char *)v13 + 3280)
                                           + 8) == v169 )
                        {
LABEL_287:
                          if ( HIBYTE(v537[0]) )
                          {
                            v297 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL);
                            v298 = v297 == CLayerVisual::IsOfType ? CLayerVisual::IsOfType(v15, 93LL) : v297(v15, 93LL);
                            if ( v298 && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled((CLayerVisual *)v15) )
                            {
                              CLayerStack::Top((CDrawingContext *)((char *)v13 + 360));
                              CMILMatrix::CMILMatrix((CMILMatrix *)v563);
                              CTreeEffectLayer::GetTransformToLayerSpace(v299, (struct CMILMatrix *)v563);
                              FlatteningVisualTree = CLayerVisual::GetFlatteningVisualTree((CLayerVisual *)v15);
                              v301 = CVisualTree::GetBounds(FlatteningVisualTree);
                              v303 = CDrawingContext::DrawSubVisualTree(v13, v302, v301, v563);
                              v516 = v303;
                              v23 = v303;
                              if ( v303 >= 0 )
                              {
                                v16 = v518;
                                v515[0] = 1;
                                goto LABEL_88;
                              }
                              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v303, 0x176Au, 0LL);
LABEL_515:
                              v22 = v521;
                              v16 = v518;
                              goto LABEL_89;
                            }
                          }
                          if ( !v515[0] )
                            goto LABEL_289;
LABEL_474:
                          v16 = v518;
                          goto LABEL_88;
                        }
                        v515[0] = 1;
                        goto LABEL_287;
                      }
LABEL_296:
                      if ( *((_BYTE *)v13 + 8064) )
                        goto LABEL_427;
                      v176 = v530[16];
                      if ( (char)(v530[16] << 6) >> 6 == 1 )
                      {
                        v177 = v530[17];
                        goto LABEL_349;
                      }
                      if ( (char)(v530[16] << 6) >> 6 < 0 )
                        goto LABEL_380;
                      v177 = v530[17];
                      if ( (char)(16 * v530[17]) >> 6 == 1 )
                        goto LABEL_306;
                      if ( (char)(16 * v530[17]) >> 6 < 0 )
                        goto LABEL_301;
                      if ( (char)(4 * v530[17]) >> 6 != 1 )
                      {
                        if ( (char)(4 * v530[17]) >> 6 >= 0 )
                        {
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                              (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm) * 61440.0)
                                                            + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm) * 61440.0))
                                                    + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                            - v279) & _xmm) < 0.000081380211 )
                          {
                            v177 = v530[17] | 0x30;
                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                        * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
                              goto LABEL_651;
                          }
                          else
                          {
                            v177 = v530[17] & 0xCF | 0x10;
                          }
                        }
                        else
                        {
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
                            goto LABEL_599;
LABEL_651:
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[4] - 0.0) & _xmm) < 0.000081380211
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[5] - 0.0) & _xmm) < 0.000081380211 )
                          {
                            v177 |= 0xCu;
                            v530[17] = v177;
LABEL_301:
                            if ( (char)(16 * v530[16]) >> 6 == 1 )
                              goto LABEL_306;
                            if ( (char)(16 * v530[16]) >> 6 < 0 )
                              goto LABEL_303;
                            if ( (char)(4 * v177) >> 6 != 1 )
                            {
                              if ( (char)(4 * v177) >> 6 >= 0 )
                              {
                                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                    (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm)
                                                                          * 61440.0)
                                                                  + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm)
                                                                          * 61440.0))
                                                          + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                  - v279) & _xmm) < 0.000081380211 )
                                {
                                  v177 |= 0x30u;
                                  v530[17] = v177;
                                  goto LABEL_624;
                                }
                                v177 = v177 & 0xCF | 0x10;
                                v530[17] = v177;
                              }
                              else
                              {
LABEL_624:
                                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
                                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[2] - 0.0) & _xmm) < 0.000081380211 )
                                {
                                  v176 = v530[16] | 0xC;
LABEL_303:
                                  if ( (char)(4 * v176) >> 6 == 1 )
                                    goto LABEL_306;
                                  if ( (char)(4 * v176) >> 6 < 0 )
                                  {
LABEL_305:
                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[6] - v279) & _xmm) < 0.000081380211
                                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v530 - 0.0) & _xmm) < 0.000081380211
                                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v530[4] - 0.0) & _xmm) < 0.000081380211
                                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v530[8] - 0.0) & _xmm) < 0.000081380211 )
                                    {
                                      v530[16] = v176 | 3;
LABEL_380:
                                      v528 = *((__m128 *)v13 + 6);
                                      v529 = *(__m256i *)((char *)v13 + 112);
                                      *(_OWORD *)v530 = *((_OWORD *)v13 + 9);
                                      *(_DWORD *)&v530[16] = *((_DWORD *)v13 + 40);
LABEL_427:
                                      v235 = *((unsigned int *)v13 + 68);
                                      v236 = *((unsigned int *)v13 + 69);
                                      *(_QWORD *)&v566 = 5LL;
                                      *((_QWORD *)&v566 + 1) = v15;
                                      if ( (_DWORD)v235 != (_DWORD)v236 )
                                      {
LABEL_428:
                                        v237 = v519;
                                        *(_OWORD *)(*((_QWORD *)v13 + 33) + 16LL * *((unsigned int *)v13 + 68)) = v566;
                                        v238 = *((_DWORD *)v13 + 68) + 1;
                                        *((_DWORD *)v13 + 68) = v238;
                                        v239 = *((_DWORD *)v13 + 71);
                                        if ( v239 <= v238 )
                                          v239 = v238;
                                        *((_DWORD *)v13 + 71) = v239;
                                        v240 = *((unsigned int *)v237 + 74);
                                        v241 = *((unsigned int *)v237 + 75);
                                        if ( (_DWORD)v240 != (_DWORD)v241 )
                                        {
LABEL_431:
                                          v242 = *((_QWORD *)v237 + 36);
                                          v243 = 68LL * *((unsigned int *)v237 + 74);
                                          *(__m128 *)(v243 + v242) = v528;
                                          *(__m256i *)(v243 + v242 + 16) = v529;
                                          *(_OWORD *)(v243 + v242 + 48) = *(_OWORD *)v530;
                                          *(_DWORD *)(v243 + v242 + 64) = *(_DWORD *)&v530[16];
                                          v244 = *((_DWORD *)v237 + 74) + 1;
                                          *((_DWORD *)v237 + 74) = v244;
                                          v245 = *((_DWORD *)v237 + 77);
                                          if ( v245 <= v244 )
                                            v245 = v244;
                                          *((_DWORD *)v237 + 77) = v245;
                                          v246 = *((_DWORD *)v237 + 74);
                                          if ( v246 )
                                            v247 = (_BYTE *)(*((_QWORD *)v237 + 36) + 68LL * (unsigned int)(v246 - 1));
                                          else
                                            v247 = &CMILMatrix::Identity;
                                          v248 = v247[65];
                                          if ( (v248 & 0x20) == 0 && 4 * (v248 & 0xF0) != 0 )
                                            goto LABEL_560;
                                          if ( (v248 & 0x20) != 0 )
                                          {
                                            v250 = 1;
                                            goto LABEL_438;
                                          }
                                          LODWORD(v249) = COERCE_UNSIGNED_INT(
                                                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v247 + 7) & _xmm)
                                                                                  * 61440.0)
                                                                          + (float)(COERCE_FLOAT(*((_DWORD *)v247 + 3) & _xmm)
                                                                                  * 61440.0))
                                                                  + COERCE_FLOAT(*((_DWORD *)v247 + 15) & _xmm))
                                                          - v279) & _xmm;
                                          v250 = v249 < 0.000081380211;
                                          v247[65] = v248 & 0xCF | (32 * (v249 < 0.000081380211) + 16);
                                          if ( v249 >= 0.000081380211 )
LABEL_560:
                                            v250 = 0;
LABEL_438:
                                          v251 = !v250;
                                          if ( *((_DWORD *)v237 + 80) == *((_DWORD *)v237 + 81) )
                                          {
                                            v328 = CWatermarkStack<bool,64,2,10>::Grow(
                                                     (__int64)v237 + 312,
                                                     (__int64)v247,
                                                     v157,
                                                     v158,
                                                     (const void **)v237 + 39);
                                            v517 = v328;
                                            if ( v328 < 0 )
                                            {
                                              v23 = v328;
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x83,
                                                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                                (const char *)(unsigned int)v328);
                                              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xD56u, 0LL);
                                              goto LABEL_447;
                                            }
                                          }
                                          v13 = v519;
                                          *(_BYTE *)((unsigned int)(*((_DWORD *)v237 + 80))++ + *((_QWORD *)v237 + 39)) = v251;
                                          v252 = *((_DWORD *)v237 + 83);
                                          if ( v252 <= *((_DWORD *)v237 + 80) )
                                            v252 = *((_DWORD *)v237 + 80);
                                          *((_DWORD *)v237 + 83) = v252;
                                          v253 = *((unsigned int *)v13 + 86);
                                          v254 = *((_DWORD *)v13 + 87);
                                          v255 = *((_DWORD *)v13 + 74);
                                          if ( (_DWORD)v253 == v254 )
                                          {
                                            v256 = 2LL * v254;
                                            if ( v256 > 0xFFFFFFFF )
                                            {
                                              v257 = -2147024362;
                                              v517 = -2147024362;
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x62,
                                                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                                (const char *)0x80070216LL);
LABEL_444:
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x83,
                                                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                                (const char *)v257);
                                              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v257, 0xD5Cu, 0LL);
                                              v258 = *((_DWORD *)v13 + 80);
                                              v237 = v519;
                                              if ( v258 )
                                              {
                                                v517 = v257;
                                                *((_DWORD *)v519 + 80) = v258 - 1;
                                              }
                                              v23 = v517;
LABEL_447:
                                              v259 = *((_DWORD *)v237 + 74);
                                              if ( v259 )
                                                *((_DWORD *)v237 + 74) = v259 - 1;
LABEL_449:
                                              v13 = v519;
                                              v260 = *((_DWORD *)v519 + 68);
                                              if ( v260 )
                                                *((_DWORD *)v519 + 68) = v260 - 1;
LABEL_524:
                                              v516 = v23;
                                              if ( (v23 & 0x80000000) != 0 )
                                              {
                                                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x164Du, 0LL);
                                                goto LABEL_255;
                                              }
LABEL_525:
                                              v15 = (__int64)v520;
                                              goto LABEL_266;
                                            }
                                            if ( (unsigned int)v256 <= 0x40 )
                                              v256 = 64LL;
                                            v317 = 4 * v253;
                                            if ( (unsigned __int64)(4 * v253) > 0xFFFFFFFF )
                                            {
                                              v257 = -2147024362;
                                              v517 = -2147024362;
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x65,
                                                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                                (const char *)0x80070216LL);
                                              v13 = v519;
                                              goto LABEL_444;
                                            }
                                            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v256 <= 4 )
                                            {
                                              v257 = -2147024809;
                                              goto LABEL_575;
                                            }
                                            v318 = GetProcessHeap();
                                            v319 = HeapAlloc(v318, 0, 4 * v256);
                                            v320 = v319;
                                            if ( !v319 )
                                            {
                                              v257 = -2147024882;
LABEL_575:
                                              v517 = v257;
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x68,
                                                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                                (const char *)v257);
                                              v13 = v519;
                                              goto LABEL_444;
                                            }
                                            v312 = v317;
                                            v313 = v519;
                                            memcpy_0(v319, *((const void **)v519 + 42), v312);
                                            v314 = (void *)*((_QWORD *)v313 + 42);
                                            if ( v314 )
                                            {
                                              v325 = GetProcessHeap();
                                              HeapFree(v325, 0, v314);
                                            }
                                            v13 = v519;
                                            *((_QWORD *)v519 + 42) = v320;
                                            *((_DWORD *)v13 + 87) = v256;
                                          }
                                          *(_DWORD *)(*((_QWORD *)v13 + 42) + 4LL * *((unsigned int *)v13 + 86)) = v255;
                                          v315 = *((_DWORD *)v13 + 86) + 1;
                                          *((_DWORD *)v13 + 86) = v315;
                                          v316 = *((_DWORD *)v13 + 89);
                                          if ( v316 <= v315 )
                                            v316 = v315;
                                          *((_DWORD *)v13 + 89) = v316;
                                          goto LABEL_525;
                                        }
                                        v309 = 2 * v241;
                                        if ( (unsigned __int64)(2 * v241) > 0xFFFFFFFF )
                                        {
                                          v310 = 98LL;
                                          goto LABEL_546;
                                        }
                                        if ( v309 <= 8 )
                                          v309 = 8;
                                        v322 = 68 * v240;
                                        if ( (unsigned __int64)(68 * v240) > 0xFFFFFFFF )
                                        {
                                          v310 = 101LL;
LABEL_546:
                                          v311 = 2147942934LL;
                                          v23 = -2147024362;
                                        }
                                        else
                                        {
                                          if ( 0xFFFFFFFFFFFFFFFFuLL / v309 <= 0x44 )
                                          {
                                            v23 = -2147024809;
                                          }
                                          else
                                          {
                                            v323 = MIDL_user_allocate(68LL * v309);
                                            v324 = v323;
                                            if ( v323 )
                                            {
                                              v339 = v322;
                                              v237 = v519;
                                              memcpy_0(v323, *((const void **)v519 + 36), v339);
                                              operator delete(*((void **)v237 + 36));
                                              *((_QWORD *)v237 + 36) = v324;
                                              *((_DWORD *)v237 + 75) = v309;
                                              goto LABEL_431;
                                            }
                                            v23 = -2147024882;
                                          }
                                          v311 = v23;
                                          v310 = 104LL;
                                        }
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)v310,
                                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                          (const char *)v311);
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)0x83,
                                          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                          (const char *)v23);
                                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x36u, 0LL);
                                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xD52u, 0LL);
                                        goto LABEL_449;
                                      }
                                      v304 = 2 * v236;
                                      if ( (unsigned __int64)(2 * v236) > 0xFFFFFFFF )
                                      {
                                        v305 = 98LL;
                                        goto LABEL_522;
                                      }
                                      if ( v304 <= 0x40 )
                                        v304 = 64;
                                      v321 = 16 * v235;
                                      if ( (unsigned __int64)(16 * v235) <= 0xFFFFFFFF )
                                      {
                                        if ( 0xFFFFFFFFFFFFFFFFuLL / v304 <= 0x10 )
                                        {
                                          v23 = -2147024809;
                                        }
                                        else
                                        {
                                          v326 = MIDL_user_allocate(16LL * v304);
                                          v327 = v326;
                                          if ( v326 )
                                          {
                                            v337 = v321;
                                            v338 = v519;
                                            memcpy_0(v326, *((const void **)v519 + 33), v337);
                                            operator delete(*((void **)v338 + 33));
                                            *((_QWORD *)v338 + 33) = v327;
                                            v13 = v338;
                                            *((_DWORD *)v338 + 69) = v304;
                                            goto LABEL_428;
                                          }
                                          v13 = v519;
                                          v23 = -2147024882;
                                        }
                                        v306 = v23;
                                        v305 = 104LL;
                                      }
                                      else
                                      {
                                        v305 = 101LL;
LABEL_522:
                                        v306 = 2147942934LL;
                                        v23 = -2147024362;
                                      }
                                      wil::details::in1diag3::Return_Hr(
                                        retaddr,
                                        (void *)v305,
                                        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                        (const char *)v306);
                                      wil::details::in1diag3::Return_Hr(
                                        retaddr,
                                        (void *)0x83,
                                        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                                        (const char *)v23);
                                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xD4Du, 0LL);
                                      goto LABEL_524;
                                    }
LABEL_306:
                                    v176 = v176 & 0xFC | 1;
                                    v530[16] = v176;
LABEL_349:
                                    if ( (char)(*((_BYTE *)v13 + 160) << 6) >> 6 != 1 )
                                    {
                                      if ( (char)(*((_BYTE *)v13 + 160) << 6) >> 6 < 0 )
                                        goto LABEL_427;
                                      if ( (unsigned __int8)CMILMatrix::IsTranslate<1>((char *)v13 + 96)
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 36) - 0.0) & _xmm) < 0.000081380211
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 37) - 0.0) & _xmm) < 0.000081380211
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 38) - 0.0) & _xmm) < 0.000081380211 )
                                      {
                                        *((_BYTE *)v13 + 160) |= 3u;
                                        goto LABEL_427;
                                      }
                                      *((_BYTE *)v13 + 160) = *((_BYTE *)v13 + 160) & 0xFC | 1;
                                      v177 = v530[17];
                                      v176 = v530[16];
                                    }
                                    v157 = *((unsigned __int8 *)v13 + 161);
                                    if ( (v157 & 8) == 0 && 16 * (v157 & 0xFC) != 0 )
                                      goto LABEL_361;
                                    if ( (v157 & 8) != 0 )
                                      goto LABEL_356;
                                    if ( (char)(4 * v157) >> 6 != 1 )
                                    {
                                      if ( (char)(4 * v157) >> 6 >= 0 )
                                      {
                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v13 + 31) & _xmm)
                                                                                  * 61440.0)
                                                                          + (float)(COERCE_FLOAT(*((_DWORD *)v13 + 27) & _xmm)
                                                                                  * 61440.0))
                                                                  + COERCE_FLOAT(*((_DWORD *)v13 + 39) & _xmm))
                                                          - v279) & _xmm) < 0.000081380211 )
                                        {
                                          LOBYTE(v157) = v157 | 0x30;
                                          *((_BYTE *)v13 + 161) = v157;
                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                              (float)(COERCE_FLOAT(*((_DWORD *)v13 + 35) & _xmm)
                                                                    * 61440.0)
                                                            - 0.0) & _xmm) < 0.000081380211 )
                                            goto LABEL_659;
                                        }
                                        else
                                        {
                                          LOBYTE(v157) = v157 & 0xCF | 0x10;
                                          *((_BYTE *)v13 + 161) = v157;
                                        }
                                      }
                                      else
                                      {
                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)(COERCE_FLOAT(*((_DWORD *)v13 + 35) & _xmm) * 61440.0)
                                                          - 0.0) & _xmm) >= 0.000081380211 )
                                          goto LABEL_612;
LABEL_659:
                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 32) - 0.0) & _xmm) < 0.000081380211
                                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 33) - 0.0) & _xmm) < 0.000081380211 )
                                        {
                                          v157 = *((unsigned __int8 *)v13 + 161);
                                          LOBYTE(v157) = v157 | 0xC;
                                          *((_BYTE *)v13 + 161) = v157;
                                          v177 = v530[17];
                                          v176 = v530[16];
LABEL_356:
                                          if ( (char)(16 * *((_BYTE *)v13 + 160)) >> 6 == 1 )
                                            goto LABEL_361;
                                          if ( (char)(16 * *((_BYTE *)v13 + 160)) >> 6 < 0 )
                                            goto LABEL_358;
                                          if ( (char)(4 * v157) >> 6 != 1 )
                                          {
                                            if ( (char)(4 * v157) >> 6 >= 0 )
                                            {
                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v13 + 31) & _xmm)
                                                                                        * 61440.0)
                                                                                + (float)(COERCE_FLOAT(*((_DWORD *)v13 + 27) & _xmm)
                                                                                        * 61440.0))
                                                                        + COERCE_FLOAT(*((_DWORD *)v13 + 39) & _xmm))
                                                                - v279) & _xmm) < 0.000081380211 )
                                              {
                                                LOBYTE(v157) = v157 | 0x30;
                                                *((_BYTE *)v13 + 161) = v157;
                                                goto LABEL_634;
                                              }
                                              LOBYTE(v157) = v157 & 0xCF | 0x10;
                                              *((_BYTE *)v13 + 161) = v157;
                                            }
                                            else
                                            {
LABEL_634:
                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 26) - 0.0) & _xmm) < 0.000081380211
                                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 30) - 0.0) & _xmm) < 0.000081380211 )
                                              {
                                                *((_BYTE *)v13 + 160) |= 0xCu;
                                                v177 = v530[17];
                                                v176 = v530[16];
LABEL_358:
                                                if ( (char)(4 * *((_BYTE *)v13 + 160)) >> 6 == 1 )
                                                  goto LABEL_361;
                                                if ( (char)(4 * *((_BYTE *)v13 + 160)) >> 6 < 0 )
                                                  goto LABEL_360;
                                                if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((char *)v13 + 96)
                                                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 24) - v279) & _xmm) < 0.000081380211
                                                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 29) - v279) & _xmm) < 0.000081380211 )
                                                {
                                                  *((_BYTE *)v13 + 160) |= 0x30u;
                                                  v177 = v530[17];
                                                  v176 = v530[16];
LABEL_360:
                                                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 34) - v279) & _xmm) >= 0.000081380211 )
                                                  {
LABEL_361:
                                                    if ( (char)(16 * v177) >> 6 == 1 )
                                                      goto LABEL_409;
                                                    if ( (char)(16 * v177) >> 6 < 0 )
                                                      goto LABEL_363;
                                                    if ( (char)(4 * v177) >> 6 != 1 )
                                                    {
                                                      if ( (char)(4 * v177) >> 6 >= 0 )
                                                      {
                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                            (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm)
                                                                                                  * 61440.0)
                                                                                          + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm)
                                                                                                  * 61440.0))
                                                                                  + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                          - v279) & _xmm) < 0.000081380211 )
                                                        {
                                                          v177 |= 0x30u;
                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                              (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                                    * 61440.0)
                                                                            - 0.0) & _xmm) < 0.000081380211 )
                                                            goto LABEL_679;
                                                        }
                                                        else
                                                        {
                                                          v177 = v177 & 0xCF | 0x10;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                            (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                                  * 61440.0)
                                                                          - 0.0) & _xmm) >= 0.000081380211 )
                                                          goto LABEL_630;
LABEL_679:
                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[4] - 0.0) & _xmm) < 0.000081380211
                                                          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[5] - 0.0) & _xmm) < 0.000081380211 )
                                                        {
                                                          v177 |= 0xCu;
                                                          v530[17] = v177;
LABEL_363:
                                                          if ( (char)(16 * v176) >> 6 == 1 )
                                                            goto LABEL_409;
                                                          if ( (char)(16 * v176) >> 6 < 0 )
                                                            goto LABEL_365;
                                                          if ( (char)(4 * v177) >> 6 == 1 )
                                                            goto LABEL_648;
                                                          if ( (char)(4 * v177) >> 6 >= 0 )
                                                          {
                                                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm) * 61440.0)
                                                                                              + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm) * 61440.0))
                                                                                      + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                              - v279) & _xmm) < 0.000081380211 )
                                                            {
                                                              v177 |= 0x30u;
                                                              v530[17] = v177;
                                                              goto LABEL_647;
                                                            }
                                                            v177 = v177 & 0xCF | 0x10;
                                                            v176 = v176 & 0xF3 | 4;
                                                            v530[17] = v177;
                                                            v530[16] = v176;
                                                            goto LABEL_409;
                                                          }
LABEL_647:
                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[2] - 0.0) & _xmm) >= 0.000081380211
                                                            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[2] - 0.0) & _xmm) >= 0.000081380211 )
                                                          {
LABEL_648:
                                                            v176 = v176 & 0xF3 | 4;
                                                            v530[16] = v176;
                                                            goto LABEL_409;
                                                          }
                                                          v176 |= 0xCu;
                                                          v530[16] = v176;
LABEL_365:
                                                          if ( (char)(4 * v176) >> 6 != 1 )
                                                          {
                                                            if ( (char)(4 * v176) >> 6 < 0 )
                                                              goto LABEL_367;
                                                            if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v528)
                                                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[0] - v279) & _xmm) < 0.000081380211
                                                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[1] - v279) & _xmm) < 0.000081380211 )
                                                            {
                                                              v177 = v530[17];
                                                              v176 = v530[16] | 0x30;
                                                              v530[16] |= 0x30u;
LABEL_367:
                                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[6] - v279) & _xmm) < 0.000081380211 )
                                                              {
                                                                v200 = *((__m128 *)v13 + 6);
                                                                v201 = *(float *)v530;
                                                                v202 = *(float *)&v530[4];
                                                                v203 = *(float *)&v530[8];
                                                                v528 = v200;
                                                                v204 = *((__m128 *)v13 + 7);
                                                                *(__m128 *)v529.m256i_i8 = v204;
                                                                v205 = *((__m128 *)v13 + 8);
                                                                *(__m128 *)&v529.m256i_u64[2] = v205;
                                                                *(_OWORD *)v530 = *((_OWORD *)v13 + 9);
                                                                *(_DWORD *)&v530[16] = *((_DWORD *)v13 + 40);
                                                                if ( COERCE_FLOAT(LODWORD(v201) & _xmm) < 0.000081380211
                                                                  && COERCE_FLOAT(LODWORD(v202) & _xmm) < 0.000081380211
                                                                  && COERCE_FLOAT(LODWORD(v203) & _xmm) < 0.000081380211 )
                                                                {
                                                                  goto LABEL_427;
                                                                }
                                                                *(float *)v530 = *(float *)v530
                                                                               + (float)((float)((float)(v202 * v204.m128_f32[0])
                                                                                               + (float)(v200.m128_f32[0] * v201))
                                                                                       + (float)(v205.m128_f32[0] * v203));
                                                                v206 = (float)(v202
                                                                             * _mm_shuffle_ps(v204, v204, 85).m128_f32[0])
                                                                     + (float)(_mm_shuffle_ps(v200, v200, 85).m128_f32[0]
                                                                             * v201);
                                                                v207 = _mm_shuffle_ps(v200, v200, 170).m128_f32[0]
                                                                     * v201;
                                                                LODWORD(v208) = _mm_shuffle_ps(v200, v200, 255).m128_u32[0];
                                                                *(float *)&v530[4] = *(float *)&v530[4]
                                                                                   + (float)(v206
                                                                                           + (float)(_mm_shuffle_ps(v205, v205, 85).m128_f32[0] * v203));
                                                                v209 = v202
                                                                     * _mm_shuffle_ps(v204, v204, 170).m128_f32[0];
                                                                v210 = _mm_shuffle_ps(v205, v205, 170).m128_f32[0];
                                                                LODWORD(v211) = _mm_shuffle_ps(v204, v204, 255).m128_u32[0];
                                                                LODWORD(v212) = _mm_shuffle_ps(v205, v205, 255).m128_u32[0];
                                                                *(float *)&v530[8] = *(float *)&v530[8]
                                                                                   + (float)((float)(v209 + v207)
                                                                                           + (float)(v210 * v203));
                                                                if ( (char)(4 * v530[17]) >> 6 != 1 )
                                                                {
                                                                  if ( (char)(4 * v530[17]) >> 6 < 0 )
                                                                  {
                                                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                        (float)(COERCE_FLOAT(LODWORD(v212) & _xmm)
                                                                                              * 61440.0)
                                                                                      - 0.0) & _xmm) >= 0.000081380211 )
                                                                      goto LABEL_372;
LABEL_539:
                                                                    v530[16] &= 0xFCu;
                                                                    goto LABEL_427;
                                                                  }
                                                                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                      (float)((float)((float)(COERCE_FLOAT(LODWORD(v211) & _xmm) * 61440.0) + (float)(COERCE_FLOAT(LODWORD(v208) & _xmm) * 61440.0))
                                                                                            + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                                    - v279) & _xmm) < 0.000081380211 )
                                                                  {
                                                                    v530[17] |= 0x30u;
                                                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                        (float)(COERCE_FLOAT(LODWORD(v212) & _xmm)
                                                                                              * 61440.0)
                                                                                      - 0.0) & _xmm) < 0.000081380211 )
                                                                      goto LABEL_539;
                                                                  }
                                                                }
LABEL_372:
                                                                *(float *)&v530[12] = *(float *)&v530[12]
                                                                                    + (float)((float)((float)(v202 * v211) + (float)(v208 * v201))
                                                                                            + (float)(v212 * v203));
LABEL_373:
                                                                *(_DWORD *)&v530[16] = 0;
                                                                goto LABEL_427;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v177 = v530[17];
                                                              v176 = v530[16] & 0xCF | 0x10;
                                                              v530[16] = v176;
                                                            }
                                                          }
LABEL_409:
                                                          v157 = *((unsigned __int8 *)v13 + 161);
                                                          if ( (v157 & 8) == 0 && 16 * (v157 & 0xFC) != 0 )
                                                            goto LABEL_489;
                                                          if ( (v157 & 8) != 0 )
                                                            goto LABEL_411;
                                                          if ( (char)(4 * v157) >> 6 != 1 )
                                                          {
                                                            if ( (char)(4 * v157) >> 6 >= 0 )
                                                            {
                                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                  (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v13 + 31) & _xmm) * 61440.0)
                                                                                                + (float)(COERCE_FLOAT(*((_DWORD *)v13 + 27) & _xmm) * 61440.0))
                                                                                        + COERCE_FLOAT(*((_DWORD *)v13 + 39) & _xmm))
                                                                                - v279) & _xmm) < 0.000081380211 )
                                                              {
                                                                LOBYTE(v157) = v157 | 0x30;
                                                                *((_BYTE *)v13 + 161) = v157;
                                                                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                    (float)(COERCE_FLOAT(*((_DWORD *)v13 + 35) & _xmm)
                                                                                          * 61440.0)
                                                                                  - 0.0) & _xmm) < 0.000081380211 )
                                                                  goto LABEL_696;
                                                              }
                                                              else
                                                              {
                                                                LOBYTE(v157) = v157 & 0xCF | 0x10;
                                                                *((_BYTE *)v13 + 161) = v157;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                  (float)(COERCE_FLOAT(*((_DWORD *)v13 + 35) & _xmm)
                                                                                        * 61440.0)
                                                                                - 0.0) & _xmm) >= 0.000081380211 )
                                                                goto LABEL_644;
LABEL_696:
                                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 32) - 0.0) & _xmm) < 0.000081380211
                                                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 33) - 0.0) & _xmm) < 0.000081380211 )
                                                              {
                                                                v157 = *((unsigned __int8 *)v13 + 161);
                                                                LOBYTE(v157) = v157 | 0xC;
                                                                *((_BYTE *)v13 + 161) = v157;
                                                                v177 = v530[17];
                                                                v176 = v530[16];
LABEL_411:
                                                                if ( (char)(16 * *((_BYTE *)v13 + 160)) >> 6 == 1 )
                                                                  goto LABEL_489;
                                                                if ( (char)(16 * *((_BYTE *)v13 + 160)) >> 6 < 0 )
                                                                  goto LABEL_413;
                                                                if ( (char)(4 * v157) >> 6 != 1 )
                                                                {
                                                                  if ( (char)(4 * v157) >> 6 >= 0 )
                                                                  {
                                                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v13 + 31) & _xmm) * 61440.0) + (float)(COERCE_FLOAT(*((_DWORD *)v13 + 27) & _xmm) * 61440.0))
                                                                                              + COERCE_FLOAT(*((_DWORD *)v13 + 39) & _xmm))
                                                                                      - v279) & _xmm) < 0.000081380211 )
                                                                    {
                                                                      LOBYTE(v157) = v157 | 0x30;
                                                                      *((_BYTE *)v13 + 161) = v157;
                                                                      goto LABEL_670;
                                                                    }
                                                                    LOBYTE(v157) = v157 & 0xCF | 0x10;
                                                                    *((_BYTE *)v13 + 161) = v157;
                                                                  }
                                                                  else
                                                                  {
LABEL_670:
                                                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 26) - 0.0) & _xmm) < 0.000081380211
                                                                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v13 + 30) - 0.0) & _xmm) < 0.000081380211 )
                                                                    {
                                                                      *((_BYTE *)v13 + 160) |= 0xCu;
                                                                      v177 = v530[17];
                                                                      v176 = v530[16];
LABEL_413:
                                                                      if ( *((char *)v13 + 160) >> 6 != 1 )
                                                                      {
                                                                        if ( *((char *)v13 + 160) >> 6 < 0 )
                                                                        {
LABEL_415:
                                                                          v228 = *((float *)v13 + 24);
                                                                          v229 = *((float *)v13 + 36);
                                                                          v230 = *((float *)v13 + 37);
                                                                          v231 = *((float *)v13 + 38);
                                                                          v232 = *((float *)v13 + 34);
                                                                          v233 = *((float *)v13 + 29);
                                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v228 - v279) & _xmm) >= 0.000081380211
                                                                            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v233 - v279) & _xmm) >= 0.000081380211
                                                                            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v232 - v279) & _xmm) >= 0.000081380211 )
                                                                          {
                                                                            v528.m128_f32[0] = v528.m128_f32[0] * v228;
                                                                            *(float *)v529.m256i_i32 = *(float *)v529.m256i_i32 * v228;
                                                                            *(float *)&v529.m256i_i32[4] = *(float *)&v529.m256i_i32[4] * v228;
                                                                            v528.m128_f32[1] = v528.m128_f32[1] * v233;
                                                                            *(float *)v530 = *(float *)v530 * v228;
                                                                            *(float *)&v529.m256i_i32[5] = *(float *)&v529.m256i_i32[5] * v233;
                                                                            *(float *)&v529.m256i_i32[1] = *(float *)&v529.m256i_i32[1] * v233;
                                                                            *(float *)&v530[4] = *(float *)&v530[4]
                                                                                               * v233;
                                                                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v232 - v279) & _xmm) >= 0.000081380211 )
                                                                            {
                                                                              v528.m128_f32[2] = v528.m128_f32[2] * v232;
                                                                              *(float *)&v529.m256i_i32[2] = *(float *)&v529.m256i_i32[2] * v232;
                                                                              *(float *)&v529.m256i_i32[6] = *(float *)&v529.m256i_i32[6] * v232;
                                                                              *(float *)&v530[8] = *(float *)&v530[8]
                                                                                                 * v232;
                                                                            }
                                                                            v176 &= 0xCCu;
                                                                            v530[16] = v176;
                                                                          }
                                                                          if ( COERCE_FLOAT(LODWORD(v229) & _xmm) < 0.000081380211
                                                                            && COERCE_FLOAT(LODWORD(v230) & _xmm) < 0.000081380211
                                                                            && COERCE_FLOAT(LODWORD(v231) & _xmm) < 0.000081380211 )
                                                                          {
                                                                            goto LABEL_427;
                                                                          }
                                                                          if ( (char)(4 * v177) >> 6 != 1 )
                                                                          {
                                                                            if ( (char)(4 * v177) >> 6 < 0 )
                                                                            {
                                                                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                  (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm) * 61440.0)
                                                                                                - 0.0) & _xmm) >= 0.000081380211 )
                                                                                goto LABEL_549;
LABEL_557:
                                                                              *(float *)v530 = *(float *)v530 + v229;
                                                                              v234 = *(float *)&v530[8] + v231;
                                                                              *(float *)&v530[4] = *(float *)&v530[4]
                                                                                                 + v230;
LABEL_426:
                                                                              *(float *)&v530[8] = v234;
                                                                              v530[16] = v176 & 0xFC;
                                                                              goto LABEL_427;
                                                                            }
                                                                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm) * 61440.0) + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm) * 61440.0)) + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                                              - v279) & _xmm) >= 0.000081380211 )
                                                                            {
                                                                              v177 = v177 & 0xCF | 0x10;
                                                                              goto LABEL_549;
                                                                            }
                                                                            v177 |= 0x30u;
                                                                            v530[17] = v177;
                                                                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm) * 61440.0)
                                                                                              - 0.0) & _xmm) < 0.000081380211 )
                                                                              goto LABEL_557;
                                                                          }
LABEL_549:
                                                                          v528.m128_f32[0] = v528.m128_f32[0]
                                                                                           + (float)(v528.m128_f32[3] * v229);
                                                                          v528.m128_f32[1] = v528.m128_f32[1]
                                                                                           + (float)(v528.m128_f32[3] * v230);
                                                                          v528.m128_f32[2] = v528.m128_f32[2]
                                                                                           + (float)(v528.m128_f32[3] * v231);
                                                                          *(float *)v529.m256i_i32 = *(float *)v529.m256i_i32 + (float)(*(float *)&v529.m256i_i32[3] * v229);
                                                                          *(float *)&v529.m256i_i32[1] = *(float *)&v529.m256i_i32[1] + (float)(*(float *)&v529.m256i_i32[3] * v230);
                                                                          *(float *)&v529.m256i_i32[2] = *(float *)&v529.m256i_i32[2] + (float)(*(float *)&v529.m256i_i32[3] * v231);
                                                                          *(float *)&v529.m256i_i32[4] = *(float *)&v529.m256i_i32[4] + (float)(*(float *)&v529.m256i_i32[7] * v229);
                                                                          *(float *)&v529.m256i_i32[5] = *(float *)&v529.m256i_i32[5] + (float)(*(float *)&v529.m256i_i32[7] * v230);
                                                                          *(float *)&v529.m256i_i32[6] = *(float *)&v529.m256i_i32[6] + (float)(*(float *)&v529.m256i_i32[7] * v231);
                                                                          v261 = *(float *)v530
                                                                               + (float)(*(float *)&v530[12] * v229);
                                                                          v262 = *(float *)&v530[12] * v230;
                                                                          v263 = *(float *)&v530[12] * v231;
LABEL_467:
                                                                          *(float *)v530 = v261;
                                                                          v530[17] = v177 & 0xF3;
                                                                          *(float *)&v530[4] = *(float *)&v530[4] + v262;
                                                                          v234 = *(float *)&v530[8] + v263;
                                                                          goto LABEL_426;
                                                                        }
                                                                        v266 = *((_BYTE *)v13 + 161);
                                                                        if ( (char)(4 * v266) >> 6 != 1 )
                                                                        {
                                                                          if ( (char)(4 * v266) >> 6 < 0 )
                                                                            goto LABEL_486;
                                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                              (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v13 + 31) & _xmm) * 61440.0) + (float)(COERCE_FLOAT(*((_DWORD *)v13 + 27) & _xmm) * 61440.0)) + COERCE_FLOAT(*((_DWORD *)v13 + 39) & _xmm))
                                                                                            - v279) & _xmm) >= 0.000081380211 )
                                                                          {
                                                                            *((_BYTE *)v13 + 161) = v266 & 0xCF | 0x10;
                                                                          }
                                                                          else
                                                                          {
                                                                            *((_BYTE *)v13 + 161) = v266 | 0x30;
LABEL_486:
                                                                            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                *((float *)v13 + 25)
                                                                                              - 0.0) & _xmm) < 0.000081380211
                                                                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                                *((float *)v13 + 28)
                                                                                              - 0.0) & _xmm) < 0.000081380211 )
                                                                            {
                                                                              *((_BYTE *)v13 + 160) |= 0xC0u;
                                                                              v177 = v530[17];
                                                                              v176 = v530[16];
                                                                              goto LABEL_415;
                                                                            }
                                                                          }
                                                                        }
                                                                        *((_BYTE *)v13 + 160) = *((_BYTE *)v13 + 160) & 0x3F | 0x40;
LABEL_488:
                                                                        v177 = v530[17];
                                                                        v176 = v530[16];
                                                                      }
LABEL_489:
                                                                      if ( (char)(16 * v177) >> 6 == 1 )
                                                                        goto LABEL_713;
                                                                      if ( (char)(16 * v177) >> 6 < 0 )
                                                                        goto LABEL_491;
                                                                      if ( (char)(4 * v177) >> 6 == 1 )
                                                                        goto LABEL_713;
                                                                      if ( (char)(4 * v177) >> 6 >= 0 )
                                                                      {
                                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                            (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm) * 61440.0) + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm) * 61440.0))
                                                                                                  + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                                          - v279) & _xmm) < 0.000081380211 )
                                                                        {
                                                                          v177 |= 0x30u;
                                                                          v530[17] = v177;
                                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                              (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm) * 61440.0)
                                                                                            - 0.0) & _xmm) < 0.000081380211 )
                                                                            goto LABEL_707;
                                                                          goto LABEL_713;
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                            (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                                                  * 61440.0)
                                                                                          - 0.0) & _xmm) >= 0.000081380211 )
                                                                          goto LABEL_713;
LABEL_707:
                                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                            *(float *)&v529.m256i_i32[4]
                                                                                          - 0.0) & _xmm) >= 0.000081380211
                                                                          || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                            *(float *)&v529.m256i_i32[5]
                                                                                          - 0.0) & _xmm) >= 0.000081380211 )
                                                                        {
                                                                          goto LABEL_713;
                                                                        }
                                                                        v177 |= 0xCu;
                                                                        v530[17] = v177;
LABEL_491:
                                                                        if ( (char)(16 * v176) >> 6 == 1 )
                                                                          goto LABEL_713;
                                                                        if ( (char)(16 * v176) >> 6 < 0 )
                                                                        {
LABEL_493:
                                                                          if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>((char *)v13 + 96) )
                                                                          {
                                                                            v267 = *((float *)v13 + 25);
                                                                            v268 = *((float *)v13 + 24);
                                                                            v269 = *((float *)v13 + 29);
                                                                            v270 = *((float *)v13 + 28);
                                                                            v271 = *((float *)v13 + 36);
                                                                            v272 = *((float *)v13 + 37);
                                                                            v273 = v528.m128_f32[0] * v267;
                                                                            *(_QWORD *)&v530[12] = 0x28083F800000LL;
                                                                            v274 = *(float *)v529.m256i_i32 * v267;
                                                                            v528.m128_u64[1] = 0LL;
                                                                            v275 = *(float *)v530 * v267;
                                                                            v276 = *(float *)v529.m256i_i32 * v268;
                                                                            v277 = (float)(v528.m128_f32[1] * v270)
                                                                                 + (float)(v528.m128_f32[0] * v268);
                                                                            v278 = *(float *)v530 * v268;
                                                                            v279 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                                                                            v528.m128_f32[1] = (float)(v528.m128_f32[1] * v269)
                                                                                             + v273;
                                                                            v528.m128_f32[0] = v277;
                                                                            *(float *)v529.m256i_i32 = (float)(*(float *)&v529.m256i_i32[1] * v270) + v276;
                                                                            *(_OWORD *)&v529.m256i_u64[1] = 0LL;
                                                                            *(float *)&v529.m256i_i32[1] = (float)(*(float *)&v529.m256i_i32[1] * v269) + v274;
                                                                            v280 = (float)((float)(*(float *)&v530[4]
                                                                                                 * v270)
                                                                                         + v278)
                                                                                 + v271;
                                                                            *(float *)&v530[4] = (float)((float)(*(float *)&v530[4] * v269) + v275)
                                                                                               + v272;
                                                                            *(float *)v530 = v280;
                                                                            v281 = *((float *)v13 + 34);
                                                                            v529.m256i_i64[3] = COERCE_UNSIGNED_INT(
                                                                                                  v281
                                                                                                * *(float *)&v529.m256i_i32[6]);
                                                                            *(float *)&v530[8] = (float)(v281 * *(float *)&v530[8])
                                                                                               + *((float *)v13 + 38);
                                                                            goto LABEL_427;
                                                                          }
                                                                          goto LABEL_713;
                                                                        }
                                                                        if ( (char)(4 * v177) >> 6 == 1 )
                                                                        {
LABEL_713:
                                                                          v329 = *((__m128 *)v13 + 6);
                                                                          v330 = *((__m128 *)v13 + 7);
                                                                          v331 = *((__m128 *)v13 + 8);
                                                                          v332 = *((__m128 *)v13 + 9);
                                                                          v528 = _mm_add_ps(
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(v528, v528, 255),
                                                                                       v332),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(v528, v528, 85),
                                                                                       v330)),
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(v528, v528, 170),
                                                                                       v331),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(v528, v528, 0),
                                                                                       v329)));
                                                                          v333 = _mm_add_ps(
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         255),
                                                                                       v332),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         85),
                                                                                       v330)),
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         170),
                                                                                       v331),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         *(__m128 *)v529.m256i_i8,
                                                                                         0),
                                                                                       v329)));
                                                                          v334 = _mm_add_ps(
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         255),
                                                                                       v332),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         85),
                                                                                       v330)),
                                                                                   _mm_add_ps(
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         170),
                                                                                       v331),
                                                                                     _mm_mul_ps(
                                                                                       _mm_shuffle_ps(
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         *(__m128 *)&v529.m256i_u64[2],
                                                                                         0),
                                                                                       v329)));
                                                                          v335 = _mm_mul_ps(
                                                                                   _mm_shuffle_ps(
                                                                                     *(__m128 *)v530,
                                                                                     *(__m128 *)v530,
                                                                                     0),
                                                                                   v329);
                                                                          v279 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
                                                                          *(__m128 *)v529.m256i_i8 = v333;
                                                                          *(__m128 *)&v529.m256i_u64[2] = v334;
                                                                          *(__m128 *)v530 = _mm_add_ps(
                                                                                              _mm_add_ps(
                                                                                                _mm_mul_ps(
                                                                                                  _mm_shuffle_ps(
                                                                                                    *(__m128 *)v530,
                                                                                                    *(__m128 *)v530,
                                                                                                    255),
                                                                                                  v332),
                                                                                                _mm_mul_ps(
                                                                                                  _mm_shuffle_ps(
                                                                                                    *(__m128 *)v530,
                                                                                                    *(__m128 *)v530,
                                                                                                    85),
                                                                                                  v330)),
                                                                                              _mm_add_ps(
                                                                                                _mm_mul_ps(
                                                                                                  _mm_shuffle_ps(
                                                                                                    *(__m128 *)v530,
                                                                                                    *(__m128 *)v530,
                                                                                                    170),
                                                                                                  v331),
                                                                                                v335));
                                                                          goto LABEL_373;
                                                                        }
                                                                        if ( (char)(4 * v177) >> 6 < 0 )
                                                                          goto LABEL_686;
                                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                            (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm) * 61440.0) + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm) * 61440.0))
                                                                                                  + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                                          - v279) & _xmm) < 0.000081380211 )
                                                                        {
                                                                          v530[17] = v177 | 0x30;
LABEL_686:
                                                                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
                                                                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                                              *(float *)&v529.m256i_i32[2]
                                                                                            - 0.0) & _xmm) < 0.000081380211 )
                                                                          {
                                                                            v530[16] = v176 | 0xC;
                                                                            goto LABEL_493;
                                                                          }
                                                                          goto LABEL_713;
                                                                        }
                                                                      }
                                                                      v530[17] = v177 & 0xCF | 0x10;
                                                                      goto LABEL_713;
                                                                    }
                                                                  }
                                                                }
                                                                *((_BYTE *)v13 + 160) = *((_BYTE *)v13 + 160) & 0xF3 | 4;
                                                                goto LABEL_488;
                                                              }
                                                            }
                                                          }
LABEL_644:
                                                          *((_BYTE *)v13 + 161) = *((_BYTE *)v13 + 161) & 0xF3 | 4;
                                                          goto LABEL_488;
                                                        }
                                                      }
                                                    }
LABEL_630:
                                                    v177 = v177 & 0xF3 | 4;
                                                    v530[17] = v177;
                                                    goto LABEL_409;
                                                  }
                                                  v222 = *((float *)v13 + 36);
                                                  v223 = *((float *)v13 + 38);
                                                  v224 = *((float *)v13 + 37);
                                                  if ( COERCE_FLOAT(LODWORD(v222) & _xmm) < 0.000081380211
                                                    && COERCE_FLOAT(LODWORD(v224) & _xmm) < 0.000081380211
                                                    && COERCE_FLOAT(LODWORD(v223) & _xmm) < 0.000081380211 )
                                                  {
                                                    goto LABEL_427;
                                                  }
                                                  if ( (char)(4 * v177) >> 6 != 1 )
                                                  {
                                                    if ( (char)(4 * v177) >> 6 >= 0 )
                                                    {
                                                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                          (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm)
                                                                                                * 61440.0)
                                                                                        + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm)
                                                                                                * 61440.0))
                                                                                + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                                        - v279) & _xmm) >= 0.000081380211 )
                                                      {
                                                        v177 = v177 & 0xCF | 0x10;
                                                      }
                                                      else
                                                      {
                                                        v177 |= 0x30u;
                                                        v530[17] = v177;
                                                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                            (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                                  * 61440.0)
                                                                          - 0.0) & _xmm) < 0.000081380211 )
                                                        {
LABEL_425:
                                                          *(float *)v530 = *(float *)v530 + v222;
                                                          v234 = *(float *)&v530[8] + v223;
                                                          *(float *)&v530[4] = *(float *)&v530[4] + v224;
                                                          goto LABEL_426;
                                                        }
                                                      }
                                                    }
                                                    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                                             (float)(COERCE_FLOAT(v529.m256i_i32[7] & _xmm)
                                                                                   * 61440.0)
                                                                           - 0.0) & _xmm) < 0.000081380211 )
                                                    {
                                                      goto LABEL_425;
                                                    }
                                                  }
                                                  v528.m128_f32[0] = v528.m128_f32[0] + (float)(v528.m128_f32[3] * v222);
                                                  v528.m128_f32[1] = v528.m128_f32[1] + (float)(v528.m128_f32[3] * v224);
                                                  v528.m128_f32[2] = v528.m128_f32[2] + (float)(v528.m128_f32[3] * v223);
                                                  *(float *)v529.m256i_i32 = *(float *)v529.m256i_i32
                                                                           + (float)(*(float *)&v529.m256i_i32[3] * v222);
                                                  *(float *)&v529.m256i_i32[1] = *(float *)&v529.m256i_i32[1]
                                                                               + (float)(*(float *)&v529.m256i_i32[3]
                                                                                       * v224);
                                                  *(float *)&v529.m256i_i32[2] = *(float *)&v529.m256i_i32[2]
                                                                               + (float)(*(float *)&v529.m256i_i32[3]
                                                                                       * v223);
                                                  *(float *)&v529.m256i_i32[4] = *(float *)&v529.m256i_i32[4]
                                                                               + (float)(*(float *)&v529.m256i_i32[7]
                                                                                       * v222);
                                                  *(float *)&v529.m256i_i32[5] = *(float *)&v529.m256i_i32[5]
                                                                               + (float)(*(float *)&v529.m256i_i32[7]
                                                                                       * v224);
                                                  *(float *)&v529.m256i_i32[6] = *(float *)&v529.m256i_i32[6]
                                                                               + (float)(*(float *)&v529.m256i_i32[7]
                                                                                       * v223);
                                                  v261 = *(float *)v530 + (float)(*(float *)&v530[12] * v222);
                                                  v262 = *(float *)&v530[12] * v224;
                                                  v263 = *(float *)&v530[12] * v223;
                                                  goto LABEL_467;
                                                }
                                                *((_BYTE *)v13 + 160) = *((_BYTE *)v13 + 160) & 0xCF | 0x10;
LABEL_535:
                                                v177 = v530[17];
                                                v176 = v530[16];
                                                goto LABEL_361;
                                              }
                                            }
                                          }
                                          *((_BYTE *)v13 + 160) = *((_BYTE *)v13 + 160) & 0xF3 | 4;
                                          v177 = v530[17];
                                          v176 = v530[16];
                                          goto LABEL_361;
                                        }
                                      }
                                    }
LABEL_612:
                                    *((_BYTE *)v13 + 161) = *((_BYTE *)v13 + 161) & 0xF3 | 4;
                                    goto LABEL_535;
                                  }
                                  if ( v176 >> 6 == 1 )
                                    goto LABEL_519;
                                  if ( v176 >> 6 < 0 )
                                    goto LABEL_518;
                                  if ( (char)(4 * v177) >> 6 != 1 )
                                  {
                                    if ( (char)(4 * v177) >> 6 >= 0 )
                                    {
                                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                          (float)((float)((float)(COERCE_FLOAT(v529.m256i_i32[3] & _xmm)
                                                                                * 61440.0)
                                                                        + (float)(COERCE_FLOAT(v528.m128_i32[3] & _xmm)
                                                                                * 61440.0))
                                                                + COERCE_FLOAT(*(_DWORD *)&v530[12] & _xmm))
                                                        - v279) & _xmm) < 0.000081380211 )
                                      {
                                        v177 |= 0x30u;
                                        v530[17] = v177;
                                        goto LABEL_638;
                                      }
                                      v177 = v177 & 0xCF | 0x10;
                                      v530[17] = v177;
                                      v176 = v176 & 0x3F | 0x40;
LABEL_519:
                                      v176 = v176 & 0xCC | 0x11;
                                      v530[16] = v176;
                                      goto LABEL_349;
                                    }
LABEL_638:
                                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[1] - 0.0) & _xmm) < 0.000081380211
                                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v529.m256i_i32 - 0.0) & _xmm) < 0.000081380211 )
                                    {
                                      v176 |= 0xC0u;
LABEL_518:
                                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v528.m128_f32[0] - v279) & _xmm) < 0.000081380211
                                        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v529.m256i_i32[1] - v279) & _xmm) < 0.000081380211 )
                                      {
                                        v176 |= 0x30u;
                                        goto LABEL_305;
                                      }
                                      goto LABEL_519;
                                    }
                                  }
                                  v176 = v176 & 0x3F | 0x40;
                                  goto LABEL_519;
                                }
                              }
                            }
                            v176 = v530[16] & 0xF0 | 5;
                            v530[16] = v176;
                            goto LABEL_349;
                          }
                        }
                      }
LABEL_599:
                      v177 = v177 & 0xF3 | 4;
                      v176 = v530[16] & 0xFC | 1;
                      v530[17] = v177;
                      v530[16] = v176;
                      goto LABEL_349;
                    }
                    v569 = 0LL;
                    if ( v524 && v523[1] )
                    {
                      v179 = **(void (__fastcall ***)(CRectanglesShape *, __int64, CPolygonShape *(__fastcall *)(CPolygonShape *, char)))v523[1];
                      if ( (char *)v179 == (char *)CRectanglesShape::`scalar deleting destructor' )
                      {
                        CRectanglesShape::~CRectanglesShape(v523[1]);
                        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free((_QWORD *)v523[1]);
                      }
                      else if ( (char *)v179 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
                      {
                        CRoundedRectangleShape::~CRoundedRectangleShape(v523[1]);
                        CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free((_QWORD *)v523[1]);
                      }
                      else if ( (char *)v179 == (char *)CPolygonShape::`scalar deleting destructor' )
                      {
                        CPolygonShape::`scalar deleting destructor'(v523[1], 1);
                      }
                      else
                      {
                        v179(v523[1], 1LL, CPolygonShape::`scalar deleting destructor');
                      }
                    }
                    v523[1] = 0LL;
                    v524 = 0;
                    v543 = 0LL;
                    v544 = 0;
                    ShapeData = CGeometry::GetShapeData(
                                  v154,
                                  (const struct D2D_SIZE_F *)v520 + 18,
                                  (struct CShapePtr *)&v543);
                    v23 = ShapeData;
                    if ( ShapeData < 0 )
                    {
                      v182 = ShapeData;
                      v218 = 2438;
                    }
                    else
                    {
                      v181 = v543;
                      v182 = -2003304309;
                      if ( v543 )
                      {
                        v183 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(*(_QWORD *)v543 + 48LL);
                        if ( (char *)v183 == (char *)&CRectanglesShape::GetTightBounds )
                        {
                          v184 = (struct D2D_RECT_F *)*((_QWORD *)v543 + 2);
                          if ( *((struct D2D_RECT_F **)v543 + 3) != v184 )
                          {
                            v185 = 1LL;
                            v569 = *v184;
                            v186 = *((_QWORD *)v543 + 2);
                            if ( (unsigned __int64)((*((_QWORD *)v543 + 3) - v186) >> 4) > 1 )
                            {
                              v511 = 16LL;
                              do
                              {
                                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                                  &v569.left,
                                  (float *)(v511 + v186));
                                v186 = *((_QWORD *)v181 + 2);
                                v511 += 16LL;
                                ++v185;
                              }
                              while ( v185 < (*((_QWORD *)v181 + 3) - v186) >> 4 );
                              v181 = v543;
                            }
                          }
                          v23 = 0;
                          goto LABEL_452;
                        }
                        if ( (char *)v183 == (char *)CRegionShape::GetTightBounds )
                        {
                          v570 = 0LL;
                          if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v543 + 16), &v570) )
                          {
                            v569.left = (float)v570.left;
                            v569.top = (float)v570.top;
                            v569.right = (float)v570.right;
                            v569.bottom = (float)v570.bottom;
                          }
                          v181 = v543;
                          v23 = 0;
LABEL_452:
                          v523[1] = v181;
                          v220 = 0LL;
                          v543 = 0LL;
                          v524 = v544;
                          v544 = 0;
LABEL_393:
                          if ( v23 != -2003304309 )
                          {
LABEL_394:
                            if ( v544 && v220 )
                            {
                              v221 = **(void (__fastcall ***)(CRectanglesShape *, __int64))v220;
                              if ( (char *)v221 == (char *)CRectanglesShape::`scalar deleting destructor' )
                              {
                                CRectanglesShape::~CRectanglesShape(v220);
                                CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v220);
                              }
                              else if ( (char *)v221 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
                              {
                                CRoundedRectangleShape::~CRoundedRectangleShape(v220);
                                CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v220);
                              }
                              else if ( (char *)v221 == (char *)CPolygonShape::`scalar deleting destructor' )
                              {
                                CPolygonShape::`scalar deleting destructor'(v220, 1);
                              }
                              else
                              {
                                v221(v220, 1LL);
                              }
                            }
                            v543 = 0LL;
                            v544 = 0;
                            v516 = v23;
                            if ( (v23 & 0x80000000) != 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x1636u, 0LL);
                              v13 = v519;
                              v15 = (__int64)v520;
                              v16 = v518;
                              v22 = v521;
                              goto LABEL_89;
                            }
                            v13 = v519;
                            goto LABEL_257;
                          }
LABEL_730:
                          v23 = 0;
                          goto LABEL_394;
                        }
                        if ( v183 == CRoundedRectangleShape::GetTightBounds )
                          TightBounds = CRoundedRectangleShape::GetTightBounds(v543, &v569, 0LL);
                        else
                          TightBounds = v183(v543, &v569, 0LL);
                        v182 = TightBounds;
                        v23 = TightBounds;
                        if ( TightBounds < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x140u, 0LL);
                          goto LABEL_391;
                        }
                        v181 = v543;
                      }
                      v23 = v182;
                      if ( v182 >= 0 )
                        goto LABEL_452;
LABEL_391:
                      v218 = 2439;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v182, v218, 0LL);
                    v220 = v543;
                    if ( v23 != -2003304438 )
                      goto LABEL_393;
                    goto LABEL_730;
                  }
                }
              }
              else
              {
                v423 = v55[29];
                if ( *v423 >= 0 )
                {
                  v364 = v518;
                }
                else
                {
                  v424 = v423[1];
                  v425 = v423 + 2;
                  for ( i8 = 0; i8 < v424; ++v425 )
                  {
                    if ( *v425 == 1 )
                      break;
                    ++i8;
                  }
                  v427 = (unsigned int)v423[1];
                  if ( i8 >= (unsigned int)v427 )
                    v428 = 0LL;
                  else
                    v428 = (_QWORD ***)((char *)v423 + 8LL * i8 - (((_BYTE)v427 + 15) & 7) + v427 + 15);
                  v429 = *v428;
                  v364 = v518;
                  if ( v429 )
                  {
                    for ( i9 = *v429; i9 != v429; i9 = (_QWORD *)*i9 )
                    {
                      v56 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))(i9 - 44);
                      v540 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))(i9 - 44);
                      if ( (struct CVisualTree *)i9[4] == v518 )
                        goto LABEL_806;
                    }
                  }
                }
              }
              if ( v55 == *((int ***)v364 + 9) )
                v55 = 0LL;
              else
                v55 = (int **)v55[11];
            }
          }
          *(_QWORD *)(v57 + 216) = k;
          v351 = *(_QWORD *)(v57 + 176);
          if ( (unsigned __int64)((*(_QWORD *)(v57 + 184) - v351) >> 3) > 1 )
          {
LABEL_757:
            while ( v351 != *(_QWORD *)(v57 + 184) )
            {
              if ( *(_QWORD *)v351 != v29 )
              {
                v352 = *(_QWORD *)(*(_QWORD *)v351 + 16LL);
                if ( v352 )
                {
                  if ( (unsigned __int64)(k - v352) >= 0xA )
                  {
                    v346 = *(_QWORD *)(v57 + 176);
                    v348 = (v351 - v346) >> 3;
                    v353 = (*(_QWORD *)(v57 + 184) - v346) >> 3;
                    v545 = v348;
                    if ( v348 + 1 > v353 )
                    {
LABEL_762:
                      std::_Xoverflow_error("overflow");
                      __debugbreak();
                      while ( 1 )
                      {
                        if ( v350 == v56 )
                        {
                          CSurfaceDrawListBrush::`vector deleting destructor'(v349, v57);
                        }
                        else if ( v350 == v3 )
                        {
                          CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v349, v57);
                        }
                        else
                        {
                          ((void (__fastcall *)(CSurfaceDrawListBrush *, _QWORD, __int64, __int64))v350)(
                            v349,
                            (unsigned int)v57,
                            v346,
                            v29);
                        }
                        while ( 1 )
                        {
                          do
                          {
                            if ( ++v55 == (int **)v15 )
                            {
                              v57 = (__int64)v540;
                              v3 = 0LL;
                              v56 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))v542;
                              v29 = v538;
                              *((_QWORD *)v540 + 23) -= 8LL;
                              k = *(_QWORD *)v546;
                              v351 = *(_QWORD *)(v57 + 176) + 8 * v348;
                              goto LABEL_757;
                            }
LABEL_752:
                            v349 = (CSurfaceDrawListBrush *)*v55;
                          }
                          while ( !*v55 );
                          v350 = **(void *(__fastcall ***)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int))v349;
                          if ( v350 != v54 )
                            break;
                          operator delete(v349, 0x38uLL);
                        }
                      }
                    }
                    v15 = v346 + 8 * v353;
                    if ( v348 + 1 == v353 )
                    {
LABEL_751:
                      v55 = (int **)(v15 - 8);
                      LODWORD(v57) = 1;
                      v56 = CSurfaceDrawListBrush::`vector deleting destructor';
                      v3 = CMultiPrimitiveDrawListBrush::`vector deleting destructor';
                      goto LABEL_752;
                    }
                    if ( v348 && (!v346 || v348 < 0 || v353 < v348) )
                      goto LABEL_992;
                    v347 = (__int64 *)(v346 + 8 * (v348 + 1));
                    v450 = (v15 - (__int64)v347) >> 3;
                    v451 = v450 <= 0;
                    if ( v450 < 0 )
                    {
                      if ( v348 < (unsigned __int64)-v450 )
                        goto LABEL_992;
                      v451 = v450 <= 0;
                    }
                    if ( !v451 && v353 - v348 < v450 )
                      goto LABEL_992;
                    v342 = 8 * v348 - 8 * (v348 + 1);
                    while ( 1 )
                    {
LABEL_741:
                      if ( v347 == (__int64 *)v15 )
                      {
                        v54 = CWindowOcclusionInfo::`vector deleting destructor';
                        v348 = v545;
                        v29 = v538;
                        goto LABEL_751;
                      }
                      v343 = *v347;
                      *v347 = 0LL;
                      v344 = *(CSurfaceDrawListBrush **)((char *)v347 + v342);
                      *(__int64 *)((char *)v347 + v342) = v343;
                      if ( !v344 )
                        goto LABEL_745;
                      v345 = **(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int))v344;
                      if ( v345 == CWindowOcclusionInfo::`vector deleting destructor' )
                        break;
                      if ( v345 == CSurfaceDrawListBrush::`vector deleting destructor' )
                      {
                        CSurfaceDrawListBrush::`vector deleting destructor'(v344, 1u);
                        ++v347;
                      }
                      else
                      {
                        if ( v345 != CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                        {
                          v345(v344, 1u);
                          goto LABEL_745;
                        }
                        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v344, 1u);
                        ++v347;
                      }
                    }
                    operator delete(v344, 0x38uLL);
LABEL_745:
                    ++v347;
                    goto LABEL_741;
                  }
                }
              }
              v351 += 8LL;
            }
            v55 = (int **)(unsigned int)v539;
          }
          v16 = v518;
          goto LABEL_776;
        }
        v468 = *((_DWORD *)v13 + 798);
        if ( v468 )
          *((_DWORD *)v13 + 798) = --v468;
        v469 = *((unsigned int *)v13 + 799);
        if ( v468 != (_DWORD)v469 )
        {
LABEL_1053:
          *(_BYTE *)(*((unsigned int *)v13 + 798) + *((_QWORD *)v13 + 398)) = 0;
          v60 = (unsigned int)(*((_DWORD *)v13 + 798) + 1);
          *((_DWORD *)v13 + 798) = v60;
          v470 = *((_DWORD *)v13 + 801);
          if ( v470 <= (unsigned int)v60 )
            v470 = v60;
          *((_DWORD *)v13 + 801) = v470;
          goto LABEL_88;
        }
        v471 = 2 * v469;
        if ( v471 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v471 <= 0x40 )
            LODWORD(v471) = 64;
          v474 = v471;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v471 <= 1 )
          {
            v472 = -2147024809;
          }
          else
          {
            v475 = MIDL_user_allocate((unsigned int)v471);
            v476 = v475;
            if ( v475 )
            {
              memcpy_0(v475, *((const void **)v13 + 398), v468);
              operator delete(*((void **)v13 + 398));
              *((_QWORD *)v13 + 398) = v476;
              *((_DWORD *)v13 + 799) = v474;
              goto LABEL_1053;
            }
            v472 = -2147024882;
          }
          v473 = 104LL;
        }
        else
        {
          v472 = -2147024362;
          v473 = 98LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v473,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v472);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v472);
        goto LABEL_88;
      }
      v483 = *(_DWORD *)(v15 + 200);
      v484 = (int)(*(_DWORD *)(v15 + 96) << 8) >> 28;
      LODWORD(v538) = v483;
      if ( !*((_DWORD *)g_pComposition + 1570) )
        goto LABEL_1104;
      v508 = *((_DWORD *)g_pComposition + 1570);
      v509 = 0LL;
      if ( v508 )
        v509 = (_DWORD *)(*((_QWORD *)g_pComposition + 784) + 24LL * (unsigned int)(v508 - 1));
      if ( *v509 == 2 )
        v485 = 0;
      else
LABEL_1104:
        v485 = *(_DWORD *)(v15 + 204);
      v486 = *((unsigned int *)v13 + 68);
      v516 = *(_DWORD *)(v15 + 208);
      LODWORD(v539) = *(_DWORD *)(v15 + 212);
      v487 = *((unsigned int *)v13 + 69);
      *(_QWORD *)&v566 = 9LL;
      *((_QWORD *)&v566 + 1) = v15;
      if ( (_DWORD)v486 != (_DWORD)v487 )
        goto LABEL_1106;
      v498 = 2 * v487;
      if ( (unsigned __int64)(2 * v487) <= 0xFFFFFFFF )
      {
        if ( v498 <= 0x40 )
          v498 = 64;
        v500 = 16 * v486;
        if ( (unsigned __int64)(16 * v486) <= 0xFFFFFFFF )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v498 <= 0x10 )
          {
            v499 = -2147024809;
          }
          else
          {
            v501 = MIDL_user_allocate(16LL * v498);
            v502 = v501;
            if ( v501 )
            {
              v510 = v500;
              v13 = v519;
              memcpy_0(v501, *((const void **)v519 + 33), v510);
              operator delete(*((void **)v519 + 33));
              *((_QWORD *)v519 + 33) = v502;
              v483 = v538;
              *((_DWORD *)v13 + 69) = v498;
LABEL_1106:
              v488 = v566;
              v489 = (char *)v13 + 720;
              v490 = *((_QWORD *)v13 + 33);
              v491 = 2LL * *((unsigned int *)v13 + 68);
              DWORD2(v566) = 0;
              *(_OWORD *)(v490 + 8 * v491) = v488;
              v492 = *((_DWORD *)v13 + 68) + 1;
              *((_DWORD *)v13 + 68) = v492;
              v493 = *((_DWORD *)v13 + 71);
              if ( v493 <= v492 )
                v493 = v492;
              *((_DWORD *)v13 + 71) = v493;
              *(_QWORD *)&v566 = *((_QWORD *)v13 + 30);
              HIDWORD(v566) = *((_DWORD *)v13 + 62);
              v567 = *(_QWORD *)((char *)v13 + 252);
              if ( *((_DWORD *)v13 + 182) != *((_DWORD *)v13 + 183) )
                goto LABEL_1109;
              v505 = CWatermarkStack<CDrawingContext::SavedRenderOptions,64,2,10>::Grow((char *)v13 + 720);
              v506 = v505;
              if ( v505 >= 0 )
              {
                v13 = v519;
LABEL_1109:
                v494 = v567;
                v495 = 3LL * *((unsigned int *)v489 + 2);
                v496 = *(_QWORD *)v489;
                *(_OWORD *)(v496 + 8 * v495) = v566;
                *(_QWORD *)(v496 + 8 * v495 + 16) = v494;
                ++*((_DWORD *)v489 + 2);
                v497 = *((_DWORD *)v489 + 5);
                if ( v497 <= *((_DWORD *)v489 + 2) )
                  v497 = *((_DWORD *)v489 + 2);
                *((_DWORD *)v489 + 5) = v497;
                if ( (v24 & 2) != 0 )
                {
                  if ( (v484 & 0xFF000000) == 0xFF000000 )
                  {
                    *((_DWORD *)v13 + 60) = v484 & 0xFFFFFF;
                  }
                  else if ( !*((_BYTE *)v13 + 7938) )
                  {
                    *((_DWORD *)v13 + 60) = v484;
                  }
                }
                if ( (v24 & 4) != 0 )
                  *((_DWORD *)v13 + 61) = v483;
                if ( (v24 & 8) != 0 )
                  *((_DWORD *)v13 + 62) = v485;
                if ( (v24 & 0x10) != 0 )
                  *((_DWORD *)v13 + 63) = v516;
                v15 = (__int64)v520;
                v23 = 0;
                v16 = v518;
                v517 = 0;
                v516 = 0;
                if ( (v24 & 0x20) != 0 )
                  *((_DWORD *)v13 + 64) = v539;
                goto LABEL_23;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)(unsigned int)v505);
              v499 = v506;
              v23 = v506;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v506, 0x1241u, 0LL);
              v13 = v519;
              v507 = *((_DWORD *)v519 + 68);
              if ( v507 )
                *((_DWORD *)v519 + 68) = v507 - 1;
LABEL_1132:
              v516 = v23;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v499, 0x15E2u, 0LL);
              goto LABEL_255;
            }
            v499 = -2147024882;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)v499);
          v13 = v519;
        }
        else
        {
          v499 = -2147024362;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x65,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
            (const char *)0x80070216LL);
          v13 = v519;
        }
      }
      else
      {
        v499 = -2147024362;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)0x80070216LL);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v499);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v499, 0x1233u, 0LL);
      v23 = v499;
      goto LABEL_1132;
    }
    v66 = *((unsigned int *)v13 + 68);
    v67 = *((unsigned int *)v13 + 69);
    v551 = v21;
    *(_QWORD *)&v566 = 11LL;
    *((_QWORD *)&v566 + 1) = v15;
    if ( (_DWORD)v66 != (_DWORD)v67 )
    {
LABEL_100:
      v68 = (_QWORD *)((char *)v13 + 656);
      *(_OWORD *)(*((_QWORD *)v13 + 33) + 16LL * *((unsigned int *)v13 + 68)) = v566;
      v69 = *((_DWORD *)v13 + 68) + 1;
      *((_DWORD *)v13 + 68) = v69;
      v70 = *((_DWORD *)v13 + 71);
      if ( v70 <= v69 )
        v70 = v69;
      *((_DWORD *)v13 + 71) = v70;
      v554 = v21;
      v71 = *((_DWORD *)v13 + 170);
      v72 = v71 + 1;
      if ( v71 + 1 < v71 )
      {
        v120 = -2147024362;
        v121 = 181;
        v117 = -2147024362;
      }
      else
      {
        if ( v72 <= *((_DWORD *)v13 + 169) )
        {
          *(_QWORD *)(*v68 + 8LL * v71) = v21;
          *((_DWORD *)v13 + 170) = v72;
LABEL_105:
          if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == *((_DWORD *)v21 + 32) )
            CDrawingContext::SetHeatMapForCurrentNode(v13);
          goto LABEL_20;
        }
        v540 = (void *(__fastcall *)(CSurfaceDrawListBrush *__hidden, unsigned int))&v554;
        v117 = DynArrayImpl<0>::Grow((__int64)v13 + 656, 8u, 1, 0, (unsigned __int64 *)&v540);
        if ( v117 >= 0 )
        {
          *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v13 + 170))++) + *v68) = *(_QWORD *)v540;
          goto LABEL_105;
        }
        v120 = v117;
        v121 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v117, v121, 0LL);
      ModuleFailFastForHRESULT(v120, retaddr);
    }
    v132 = 2 * v67;
    if ( (unsigned __int64)(2 * v67) <= 0xFFFFFFFF )
    {
      if ( v132 <= 0x40 )
        v132 = 64;
      v135 = 16 * v66;
      if ( (unsigned __int64)(16 * v66) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v132 <= 0x10 )
        {
          v134 = -2147024809;
        }
        else
        {
          v148 = MIDL_user_allocate(16LL * v132);
          v149 = v148;
          if ( v148 )
          {
            v340 = v135;
            v341 = v519;
            memcpy_0(v148, *((const void **)v519 + 33), v340);
            operator delete(*((void **)v519 + 33));
            *((_QWORD *)v519 + 33) = v149;
            v13 = v341;
            *((_DWORD *)v341 + 69) = v132;
            v15 = (__int64)v520;
            goto LABEL_100;
          }
          v134 = -2147024882;
        }
        v133 = 104LL;
LABEL_200:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v133,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v134);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v134);
        ModuleFailFastForHRESULT(v134, retaddr);
      }
      v133 = 101LL;
    }
    else
    {
      v133 = 98LL;
    }
    v134 = -2147024362;
    goto LABEL_200;
  }
  v548[0] = 0;
  v136 = v548;
  v548[1] = 1;
LABEL_208:
  if ( v136 == v549 )
  {
    v13 = v519;
    v16 = v518;
    goto LABEL_15;
  }
  v137 = *v136;
  for ( i10 = 0; ; ++i10 )
  {
    if ( i10 >= (unsigned int)CVisual::GetLightsCount(v15, v137) )
    {
      ++v136;
      goto LABEL_208;
    }
    v139 = v137 ? *(_QWORD *)(v15 + 304) - *(_QWORD *)(v15 + 296) : *(_QWORD *)(v15 + 280) - *(_QWORD *)(v15 + 272);
    if ( i10 >= (unsigned int)(v139 >> 4) )
    {
      v141 = 0LL;
    }
    else
    {
      v140 = v137 ? *(_QWORD *)(v15 + 296) : *(_QWORD *)(v15 + 272);
      v141 = *(_BYTE **)(v140 + 16LL * i10);
    }
    if ( v141[170]
      && (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)v141 + 240LL))(
           v141,
           v518,
           v15) )
    {
      break;
    }
LABEL_222:
    ;
  }
  *(_QWORD *)&v566 = 10LL;
  *((_QWORD *)&v566 + 1) = v15;
  v142 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((__int64)v519 + 264, &v566);
  v517 = v142;
  v143 = v142;
  if ( v142 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v142, 0x18CDu, 0LL);
    v23 = v517;
    goto LABEL_253;
  }
  v144 = CLightStack::Push((char *)v519 + 424, v141, v137);
  v517 = v144;
  if ( v144 >= 0 )
  {
    v15 = (__int64)v520;
    v516 = v144;
    goto LABEL_222;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v144, 0x18D0u, 0LL);
  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v519 + 264, 0LL);
  v23 = v517;
  v143 = v517;
LABEL_253:
  v516 = v23;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v143, 0x15AAu, 0LL);
  v13 = v519;
  v15 = (__int64)v520;
LABEL_289:
  v22 = v521;
  v16 = v518;
LABEL_89:
  if ( *((_BYTE *)v13 + 8068) && (unsigned __int8)CWatermarkStack<bool,64,2,10>::TopOrDefault((char *)v13 + 3184, k) )
    CVisual::RenderProjectedShadows(v15, v13, 1LL);
  if ( !*v22 && CDrawingContext::IsBackdropWalk(v13) && !*((_BYTE *)v13 + 193) )
  {
    CurrentVisualTreePath = CDrawingContext::GetCurrentVisualTreePath((CDrawingContext *)v60);
    if ( CBackdropVisualImage::IsVisualInAncestorList(
           *((CBackdropVisualImage **)v13 + 25),
           (const struct CVisual *)v15,
           CurrentVisualTreePath) )
    {
      *((_BYTE *)v13 + 193) = 1;
    }
  }
  if ( DwmDbg::Backdrops::IsEtwEnabled((DwmDbg::Backdrops *)v60)
    && !*v22
    && (CVisual::SubgraphHasBackdropInput((CVisual *)v15) || CVisual::SubgraphHasWindowBackdropInput(v122)) )
  {
    TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(&v568);
    CDrawingContext::GetClipBoundsWorld(v13, &v568);
    v123 = (const void *)*((_QWORD *)v13 + 25);
    v124 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v558, &v568);
    v125 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v556, &v516);
    v126 = DwmDbg::DbgString::DbgString(&v561, "hr=%s, clipBoundsWorld=[%s], m_pCutoffBVI=0x%p", *v125, v124, v123);
    v127 = CDrawingContext::GetCurrentVisualTreePath(v13);
    IsBackdropWalk = CDrawingContext::IsBackdropWalk(v128);
    v130 = "Render-BailWithBackdropsStillInSubtree-Backdrop";
    if ( !IsBackdropWalk )
      v130 = "Render-BailWithBackdropsStillInSubtree-Normal";
    v131 = DwmDbg::DbgString::DbgString(&v562, v130);
    DwmDbg::Backdrops::LogTreeWalkEtwEvent(v131, v15, v16, v127, v126);
    DwmDbg::DbgString::~DbgString((DwmDbg::DbgString *)v556);
    DwmDbg::DbgString::~DbgString((DwmDbg::DbgString *)v558);
    v23 = v516;
  }
  CDrawingContext::NodeEffects::~NodeEffects((CDrawingContext::NodeEffects *)v523);
  return v23;
}
