/*
 * XREFs of CmpInitializeKcbStack @ 0x1409882A0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeKcbStack(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
}
