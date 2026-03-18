/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x1404923D4
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140462AF8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140914AE0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackInitialize @ 0x140A53238 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
