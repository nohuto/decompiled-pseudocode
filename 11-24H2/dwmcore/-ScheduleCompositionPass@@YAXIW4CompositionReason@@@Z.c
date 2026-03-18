/*
 * XREFs of ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156F18 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x180158984 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801594EC (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159AC0 (-IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x1801C505C (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028114C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

ULONG __fastcall ScheduleCompositionPass(ULONG a1, unsigned int a2)
{
  ULONG result; // eax

  result = a1;
  if ( g_pComposition )
  {
    if ( *((_BYTE *)g_pComposition + 6473) )
      return CComposition::ScheduleCompositionPass((__int64)g_pComposition, a1, a2);
  }
  return result;
}
