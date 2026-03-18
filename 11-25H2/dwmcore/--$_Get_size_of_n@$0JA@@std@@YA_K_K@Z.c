/*
 * XREFs of ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x1801725F8
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801720D0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     ?_Buy_nonzero@?$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V?$allocator@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x18017258C (-_Buy_nonzero@-$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V-$allocator@UDWM_CHECK.c)
 *     ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802D22FC (--$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MU.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<144>(unsigned __int64 a1)
{
  if ( a1 > 0x1C71C71C71C71C7LL )
    std::_Throw_bad_array_new_length();
  return 144 * a1;
}
