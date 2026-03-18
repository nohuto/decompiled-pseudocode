/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180174D0C
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x180175730 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802C7258 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802C7474 (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1CDDisplayCachedScanout@@QEAA@XZ @ 0x180173518 (--1CDDisplayCachedScanout@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(
        CDDisplayCachedScanout *this,
        CDDisplayCachedScanout *a2)
{
  CDDisplayCachedScanout *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CDDisplayCachedScanout::~CDDisplayCachedScanout(v3);
      v3 = (CDDisplayCachedScanout *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
