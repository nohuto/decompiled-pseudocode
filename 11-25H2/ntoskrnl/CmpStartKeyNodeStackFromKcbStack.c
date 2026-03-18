/*
 * XREFs of CmpStartKeyNodeStackFromKcbStack @ 0x140974020
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407D4340 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407D461C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14097406C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpStartKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = CmpStartKeyNodeStack(a1, *(unsigned __int16 *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(a1, a2, a3);
    return 0LL;
  }
  return result;
}
