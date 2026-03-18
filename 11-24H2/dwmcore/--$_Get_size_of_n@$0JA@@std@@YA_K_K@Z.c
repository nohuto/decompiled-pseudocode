/*
 * XREFs of ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x180067458
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180066F30 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     ?_Buy_nonzero@?$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V?$allocator@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x1800673EC (-_Buy_nonzero@-$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V-$allocator@UDWM_CHECK.c)
 *     ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802C907C (--$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MU.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<144>(unsigned __int64 a1)
{
  if ( a1 > 0x1C71C71C71C71C7LL )
    std::_Throw_bad_array_new_length();
  return 144 * a1;
}
