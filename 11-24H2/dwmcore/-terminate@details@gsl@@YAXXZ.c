/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1800B708C
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x1800B87A4 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180102540 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801DF230 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180227418 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18023D924 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?GetCursorVisuals@CComposition@@QEAA?BV?$span@$$CBUCursorVisualData@@$0?0@gsl@@XZ @ 0x180295DF4 (-GetCursorVisuals@CComposition@@QEAA-BV-$span@$$CBUCursorVisualData@@$0-0@gsl@@XZ.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x180299334 (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802A636C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::details::terminate(gsl::details *this)
{
  `gsl::details::get_terminate_handler'::`2'::handler(this);
}
