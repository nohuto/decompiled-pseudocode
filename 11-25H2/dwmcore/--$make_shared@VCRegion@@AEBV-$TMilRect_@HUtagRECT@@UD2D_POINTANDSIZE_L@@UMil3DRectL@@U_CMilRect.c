/*
 * XREFs of ??$make_shared@VCRegion@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@YA?AV?$shared_ptr@VCRegion@@@0@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180287B90
 * Callers:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801034A4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 */

_QWORD *__fastcall std::make_shared<CRegion,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> const &>(
        _QWORD *a1,
        const struct tagRECT *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *result; // rax

  v4 = operator new(0x58uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<CRegion>::`vftable';
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)(v4 + 4), a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  result = a1;
  a1[1] = v5;
  return result;
}
