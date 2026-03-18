/*
 * XREFs of ?reserve@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX_K@Z @ 0x1801E4B0C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18002CF40 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801E4B54 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  result = (__int64)(a1[2] - *a1) >> 3;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(a1);
    return std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Reallocate<0>(a1, &v3);
  }
  return result;
}
