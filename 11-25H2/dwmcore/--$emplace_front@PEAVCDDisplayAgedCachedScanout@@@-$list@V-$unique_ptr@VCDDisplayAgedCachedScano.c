/*
 * XREFs of ??$emplace_front@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x18021C114
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801717F4 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::emplace_front<CDDisplayAgedCachedScanout *>(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  v4 = **a1;
  if ( a1[1] == (__int64 *)0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  result = v5 + 2;
  v5[2] = *a2;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  v7 = *(_QWORD **)(v4 + 8);
  *v5 = v4;
  v5[1] = v7;
  *(_QWORD *)(v4 + 8) = v5;
  *v7 = v5;
  return result;
}
