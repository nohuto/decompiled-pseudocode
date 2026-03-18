/*
 * XREFs of ?Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802E3670
 * Callers:
 *     <none>
 * Callees:
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801898F4 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 */

__int64 __fastcall CSecondaryCrossAdapterDirectBitmap::Update(__int64 a1, int *a2)
{
  CSecondaryBitmap::AddValidRect(a1 + 240, a2);
  return 0LL;
}
