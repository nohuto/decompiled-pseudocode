/*
 * XREFs of ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801EFC90
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018F90 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18013C510 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 */

__int64 __fastcall CColorBrush::GetBrushParameters(CColorBrush *this, struct CBrushDrawListGenerator *a2, __int64 a3)
{
  __int64 result; // rax

  CBrushDrawListGenerator::Reset(a2, (__int64)a2, a3);
  result = 0LL;
  *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 104);
  return result;
}
