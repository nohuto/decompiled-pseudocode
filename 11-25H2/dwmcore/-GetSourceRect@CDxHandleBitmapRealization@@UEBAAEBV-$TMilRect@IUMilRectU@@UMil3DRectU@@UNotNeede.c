/*
 * XREFs of ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18021C370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CDxHandleBitmapRealization::GetSourceRect(__int64 a1)
{
  return CBitmapRealization::CalcSourceRect((unsigned int *)(a1 - 328));
}
