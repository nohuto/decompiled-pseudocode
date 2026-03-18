/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x140975744
 * Callers:
 *     CmpGetSubKeyCountForKcbStack @ 0x140972C44 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryReset @ 0x1409756E4 (CmpKeyNodeStackEntryReset.c)
 *     CmpInitializeKeyNodeStack @ 0x140975708 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14097648C (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  return HvpGetCellContextInitialize((_QWORD *)(a1 + 24));
}
