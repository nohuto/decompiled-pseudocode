/*
 * XREFs of CmpInitializeKcbStack @ 0x1409A1630
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeKcbStack(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
}
