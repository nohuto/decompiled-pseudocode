/*
 * XREFs of GreCreatePatternBrush @ 0x140154F00
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HBITMAP a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
