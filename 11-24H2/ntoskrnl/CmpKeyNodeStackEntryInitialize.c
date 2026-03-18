/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140916A3C
 * Callers:
 *     CmpGetSubKeyCountForKcbStack @ 0x140913D68 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1409145DC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1409155E4 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryReset @ 0x1409169DC (CmpKeyNodeStackEntryReset.c)
 *     CmpInitializeKeyNodeStack @ 0x140916A00 (CmpInitializeKeyNodeStack.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  return HvpGetCellContextInitialize((_QWORD *)(a1 + 24));
}
