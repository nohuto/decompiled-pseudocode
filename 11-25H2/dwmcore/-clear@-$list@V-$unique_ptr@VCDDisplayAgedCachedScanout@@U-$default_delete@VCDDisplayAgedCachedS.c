/*
 * XREFs of ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18022B8EC
 * Callers:
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801C5A68 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z @ 0x1802C8D20 (-SetFrontBufferRenderingMode@CDDisplaySwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022B91C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$defau.c)
 */

__int64 __fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear(_QWORD *a1)
{
  __int64 result; // rax

  std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
    a1,
    *a1);
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 8LL) = *a1;
  a1[1] = 0LL;
  return result;
}
