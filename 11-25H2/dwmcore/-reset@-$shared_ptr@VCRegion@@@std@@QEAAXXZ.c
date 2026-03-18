/*
 * XREFs of ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x180103610
 * Callers:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801034A4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180103560 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<CRegion>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  *a1 = 0LL;
  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
