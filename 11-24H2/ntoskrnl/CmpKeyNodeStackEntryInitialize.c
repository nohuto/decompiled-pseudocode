/*
 * XREFs of CmpKeyNodeStackEntryInitialize @ 0x14090A4AC
 * Callers:
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14090804C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140908BE8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryReset @ 0x14090A44C (CmpKeyNodeStackEntryReset.c)
 *     CmpInitializeKeyNodeStack @ 0x14090A470 (CmpInitializeKeyNodeStack.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  return HvpGetCellContextInitialize((_QWORD *)(a1 + 24));
}
