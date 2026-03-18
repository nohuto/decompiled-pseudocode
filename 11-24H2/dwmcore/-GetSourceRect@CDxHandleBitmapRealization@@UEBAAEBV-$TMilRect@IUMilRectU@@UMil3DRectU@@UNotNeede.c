/*
 * XREFs of ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180210960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall CDxHandleBitmapRealization::GetSourceRect(__int64 a1)
{
  return CBitmapRealization::CalcSourceRect((_BYTE *)(a1 - 328));
}
