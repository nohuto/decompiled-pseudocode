/*
 * XREFs of ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1800692A4
 * Callers:
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801B6078 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802BE5B0 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x1802BF970 (-SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180069218 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

CDDisplayCachedScanout *__fastcall std::vector<CDDisplayCachedScanout>::clear(CDDisplayCachedScanout **a1)
{
  CDDisplayCachedScanout *v1; // rdx
  CDDisplayCachedScanout *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
