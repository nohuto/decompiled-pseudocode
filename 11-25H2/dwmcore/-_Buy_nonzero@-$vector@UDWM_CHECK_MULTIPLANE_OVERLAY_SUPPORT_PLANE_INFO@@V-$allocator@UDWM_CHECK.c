/*
 * XREFs of ?_Buy_nonzero@?$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V?$allocator@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x18017258C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18002CF40 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x1801725F8 (--$_Get_size_of_n@$0JA@@std@@YA_K_K@Z.c)
 */

__int64 __fastcall std::vector<DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO>::_Buy_nonzero(
        __int64 *a1,
        unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  if ( a2 > 0x1C71C71C71C71C7LL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<144>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 144 * a2;
  return result;
}
