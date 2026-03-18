/*
 * XREFs of ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x1802C8D20
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x180175730 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18022B8EC (-clear@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 */

__int64 __fastcall CDDisplaySwapChain::SetFrontBufferRenderingMode(CDDisplayCachedScanout **this)
{
  std::vector<CDDisplayCachedScanout>::clear(this + 5);
  std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear(this + 8);
  return 0LL;
}
