/*
 * XREFs of ?_Tidy@?$vector@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@V?$allocator@UDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@std@@@std@@AEAAXXZ @ 0x1801F4E84
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18005F5C0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO>::_Tidy(__int64 a1)
{
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    v3 = 16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4);
    if ( v3 >= 0x1000 )
    {
      v3 += 39LL;
      if ( (unsigned __int64)v2 - *(v2 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v2 = (_QWORD *)*(v2 - 1);
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
