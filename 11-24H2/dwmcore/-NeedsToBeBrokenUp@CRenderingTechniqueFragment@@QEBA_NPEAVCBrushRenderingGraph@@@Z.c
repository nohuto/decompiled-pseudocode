/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180046858
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800467B0 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800468FC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800469B4 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  bool v2; // bl
  void *v4[3]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v5[192]; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+F8h] [rbp-20h] BYREF

  v4[0] = v5;
  v4[1] = v5;
  v4[2] = &v6;
  v2 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this) > 4;
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v4);
  return v2;
}
