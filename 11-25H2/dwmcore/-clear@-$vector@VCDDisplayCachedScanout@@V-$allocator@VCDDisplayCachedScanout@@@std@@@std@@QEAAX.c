/*
 * XREFs of ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x180175730
 * Callers:
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801C5A68 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x1802C8D20 (-SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180174D0C (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
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
