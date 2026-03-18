/*
 * XREFs of ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180022644 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180027A9C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800680E0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 *     ?SetViewportAnimation@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJPEAVCRectResource@@@Z @ 0x180077CA4 (-SetViewportAnimation@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@.c)
 *     ??1?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ @ 0x180078A5C (--1-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ.c)
 *     ??$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV?$vector@PEAVCAtlasedRectsMesh@@V?$allocator@PEAVCAtlasedRectsMesh@@@std@@@std@@@Z @ 0x180078AC4 (--$UnRegisterNotifiers@VCAtlasedRectsMesh@@@CResource@@QEAAXPEAV-$vector@PEAVCAtlasedRectsMesh@@.c)
 *     ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x180079DA0 (--$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV-$vector@PEAVCKeyframeAnimation.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180079E78 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800BFD48 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800BFE44 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800C03F8 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 *     ??1CRedirectedVisualContent@@MEAA@XZ @ 0x1800C06FC (--1CRedirectedVisualContent@@MEAA@XZ.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1800EF6B8 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1800EF7D8 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x1800F5CBC (-CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1800F6AD8 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800F757C (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800F75E4 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x180119FA4 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18012F2D0 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18012F9F4 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180130118 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?SetImageSource@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJPEAVCImageSource@@@Z @ 0x180130190 (-SetImageSource@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAA.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?SetImageSource@?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJPEAVCImageSource@@@Z @ 0x180130D54 (-SetImageSource@-$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@QEAAJPEAVCImage.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1801310CC (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ProcessSetFillBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETFILLBRUSH@@@Z @ 0x180131200 (-ProcessSetFillBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAP.c)
 *     ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z @ 0x1801312EC (-ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOM.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x180131474 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetSpriteClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z @ 0x180131514 (-SetSpriteClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCRegionGeometry@@@Z.c)
 *     ?ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY@@@Z @ 0x1801315AC (-ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18013179C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180131878 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180131A28 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x180131AD0 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1801321F8 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180132E3C (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x18013310C (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180133164 (--1CGeometry@@MEAA@XZ.c)
 *     ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z @ 0x18013A23C (-ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SET.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180184298 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ??1CVisualSurface@@UEAA@XZ @ 0x180184FD4 (--1CVisualSurface@@UEAA@XZ.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180185C3C (--1CLayerVisual@@UEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801986F8 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18019F6FC (--1CGradientBrush@@MEAA@XZ.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1801A04AC (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801A9FEC (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801B704C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x1801B8888 (-ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRANSFORM@@@Z.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x1801B8B90 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?ProcessSetStrokeBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEBRUSH@@@Z @ 0x1801B9408 (-ProcessSetStrokeBrush@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSH.c)
 *     ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801E503C (-SetVisual@-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801F38B4 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1801F7414 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1801F7F90 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801F893C (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801F9484 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801FAA8C (--1CSpriteVectorShape@@UEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1801FEF1C (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1802057BC (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ @ 0x18020CEAC (--1-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAA@XZ.c)
 *     ?SetTransform3D@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z @ 0x18020D5B4 (-SetTransform3D@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ??1CVectorShape@@MEAA@XZ @ 0x18020FD28 (--1CVectorShape@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x18020FEDC (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x180211AD0 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     ?SetTransform@?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCTransform@@@Z @ 0x180212418 (-SetTransform@-$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCTransform@@@.c)
 *     ?SetViewboxAnimation@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJPEAVCRectResource@@@Z @ 0x1802125A0 (-SetViewboxAnimation@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@.c)
 *     ??1?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@MEAA@XZ @ 0x180212C7C (--1-$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@MEAA@XZ.c)
 *     ??1?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ @ 0x180213BBC (--1-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@MEAA@XZ.c)
 *     ?SetRelativeTransform@?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCTransform@@@Z @ 0x180213E50 (-SetRelativeTransform@-$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCTran.c)
 *     ?SetOpacityAnimation@?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCFloatResource@@@Z @ 0x180214A48 (-SetOpacityAnimation@-$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@QEAAJPEAVCFloat.c)
 *     ?UnRegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAXXZ @ 0x180215D20 (-UnRegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAXXZ.c)
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x1802197BC (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ??1?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAA@XZ @ 0x18021BB78 (--1-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@MEAA@XZ.c)
 *     ?SetFlipExSurfaceClip@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z @ 0x18021FFFC (-SetFlipExSurfaceClip@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETTRANSFORM@@@Z @ 0x1802214F8 (-ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETTRA.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x180222388 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180223624 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x180227870 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180227B70 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z @ 0x18022B450 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18022C6EC (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?SetRootVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x180231BC8 (-SetRootVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisua.c)
 *     ?SetCondition@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAAJPEAVCBaseExpression@@@Z @ 0x180232F0C (-SetCondition@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@QEAA.c)
 *     ??1?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAA@XZ @ 0x180233038 (--1-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@MEAA@XZ.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18023AA04 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ??1?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ @ 0x180255704 (--1-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@MEAA@XZ.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180259178 (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ??1?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAA@XZ @ 0x18027F730 (--1-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMater.c)
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x18027F778 (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 *     ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x18027F7D8 (--1-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ.c)
 *     ?SetBaseColorInput@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1802830B8 (-SetBaseColorInput@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@.c)
 *     ?SetBrush@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJPEAVCBrush@@@Z @ 0x180283170 (-SetBrush@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetColorData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x1802832B0 (-SetColorData@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrappe.c)
 *     ?SetEmissiveInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x180283510 (-SetEmissiveInput@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAV.c)
 *     ?SetIndexData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180283604 (-SetIndexData@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrappe.c)
 *     ?SetMetallicRoughnessInput@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1802838D0 (-SetMetallicRoughnessInput@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessM.c)
 *     ?SetNormalData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180283954 (-SetNormalData@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapp.c)
 *     ?SetNormalInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1802839D0 (-SetNormalInput@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCS.c)
 *     ?SetOcclusionInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x180283AB0 (-SetOcclusionInput@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEA.c)
 *     ?SetPerFrameDataSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x1802840F4 (-SetPerFrameDataSharedSection@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSu.c)
 *     ?SetPositionData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180284204 (-SetPositionData@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWra.c)
 *     ?SetReferenceSurface@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802848B0 (-SetReferenceSurface@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSou.c)
 *     ?SetReferenceVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x180284958 (-SetReferenceVisual@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVC.c)
 *     ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1802849F8 (-SetRoot@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSuperWetSource@@@Z @ 0x180284AEC (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?SetTangentData@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180284C04 (-SetTangentData@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrap.c)
 *     ?SetTexCoord0Data@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180284CA8 (-SetTexCoord0Data@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWr.c)
 *     ?SetTexCoord1Data@?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWrapper@@@Z @ 0x180284D2C (-SetTexCoord1Data@-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@QEAAJPEAVCSharedSectionWr.c)
 *     ?SetTexture@?$CCompositionDynamicTextureGeneratedT@VCCompositionDynamicTexture@@VCContent@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180284DD0 (-SetTexture@-$CCompositionDynamicTextureGeneratedT@VCCompositionDynamicTexture@@VCContent@@@@QEA.c)
 *     ?SetTipPointsSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x180284EB8 (-SetTipPointsSharedSection@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuper.c)
 *     ?SetTransform@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransform3D@@@Z @ 0x180284F3C (-SetTransform@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCTransf.c)
 *     ?SetTransform@?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@QEAAJPEAVCComponentTransform3D@@@Z @ 0x180284FDC (-SetTransform@-$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@.c)
 *     ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x180285064 (-SetTransform@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform.c)
 *     ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028EE7C (--$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV-$com_ptr_t@VCVisualGroup@@Uerr_return.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x18028F3E0 (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFI.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180296F4C (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x18029B610 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x18029B76C (-ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWC.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x18029B8BC (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCA.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18029D3A4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x18029D750 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x18029E4EC (--1CYCbCrSurface@@MEAA@XZ.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z @ 0x18029E620 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x18029F46C (--1CClipBrush@@MEAA@XZ.c)
 *     ?SetSource@CClipBrush@@QEAAXPEAVCBrush@@@Z @ 0x18029FC9C (-SetSource@CClipBrush@@QEAAXPEAVCBrush@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1802A0670 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x1802A29B0 (--1CCompositionTextLine@@MEAA@XZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1802ABB84 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x1802ABD6C (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1802AC23C (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 *     ??1?$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@MEAA@XZ @ 0x1802AD200 (--1-$CSceneMeshGeneratedT@VCSceneMesh@@VCSceneObject@@@@MEAA@XZ.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1802ADA88 (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ?ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH@@@Z @ 0x1802ADEA0 (-ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHREN.c)
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1802AE034 (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x1802AF0D4 (--1-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1802AF8E0 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x1802AFAD4 (-ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFA.c)
 *     ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x1802B09A8 (--1-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DB6A8 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::UnRegisterNotifierInternal(CResource *this, struct CResource *a2)
{
  __int64 v2; // rbx
  CResource *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(CResource *); // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx

  if ( a2 )
  {
    v2 = *((_QWORD *)a2 + 4);
    if ( (v2 & 2) != 0 )
    {
      v5 = (CResource *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
      v6 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    else
    {
      v6 = v2 & 1;
      v5 = (CResource *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    }
    if ( v6 == 1 )
    {
      if ( this != v5 )
        return;
      goto LABEL_17;
    }
    if ( v6 )
    {
      v11 = 0LL;
      v12 = 0LL;
      do
      {
        if ( this == *((CResource **)v5 + v12 + 2) )
          break;
        v11 = (unsigned int)(v11 + 1);
        v12 = (unsigned int)v11;
      }
      while ( (unsigned int)v11 < v6 );
      if ( v11 < v6 )
      {
        if ( (v2 & 2) != 0 )
          v7 = *(_QWORD *)v5;
        else
          v7 = v2 & 1;
        if ( v11 >= v7 )
          goto LABEL_18;
        v8 = 1LL;
        if ( v7 - v11 <= 1 )
          v8 = v7 - v11;
        if ( v7 != v8 )
        {
          v13 = v7 - v8;
          if ( v13 == 1 )
          {
            v14 = *((_QWORD *)v5 + (v8 & (v11 - 1)) + 2);
            operator delete(v5);
            *((_QWORD *)a2 + 4) = v14 | 1;
          }
          else
          {
            if ( v11 < v13 )
              memmove_0((char *)v5 + 8 * v11 + 16, (char *)v5 + 8 * v11 + 8 * v8 + 16, 8 * (v13 - v11));
            *(_QWORD *)v5 = v13;
          }
          goto LABEL_18;
        }
        if ( v7 > 1 && v5 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
        }
LABEL_17:
        *((_QWORD *)a2 + 4) = 0LL;
LABEL_18:
        v9 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)a2 + 16LL);
        if ( v9 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2);
        else
          v9(a2);
      }
    }
  }
}
