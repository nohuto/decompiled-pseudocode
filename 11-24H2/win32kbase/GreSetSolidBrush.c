/*
 * XREFs of GreSetSolidBrush @ 0x140085460
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, unsigned int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
