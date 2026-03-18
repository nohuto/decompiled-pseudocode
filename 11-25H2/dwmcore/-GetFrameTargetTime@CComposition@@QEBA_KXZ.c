/*
 * XREFs of ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180031B80 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1800C28E0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ @ 0x1800F4210 (-CalculateCurrentElapsedTime@CScrollAnimation@@AEAAMXZ.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x18010037C (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x180102480 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801AA26C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x1801CC8C8 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801CC94C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CCA74 (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?BeginUpdateCursors@CGlobalComposition@@UEAAXXZ @ 0x1801E05E0 (-BeginUpdateCursors@CGlobalComposition@@UEAAXXZ.c)
 *     ?FrameTick@CSceneResourceManager@@QEAAXXZ @ 0x1801E911C (-FrameTick@CSceneResourceManager@@QEAAXXZ.c)
 *     ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x180208BF8 (-ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATIO.c)
 *     ?MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z @ 0x18020EE24 (-MarkStaleRealizations@CWindowBackgroundBitmapProducer@@QEAAX_N@Z.c)
 *     ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x180219EF8 (-ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPAUSED@@@Z.c)
 *     ??0CAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180219F8C (--0CAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z @ 0x18021F57C (-ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETSEEK@@@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802458F4 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1802564DC (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18029A83C (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 *     ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x1802B29D4 (-ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONT.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CComposition::GetFrameTargetTime(CComposition *this)
{
  return *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39));
}
