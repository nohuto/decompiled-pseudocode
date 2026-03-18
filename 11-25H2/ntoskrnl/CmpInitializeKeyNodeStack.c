/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x140975708
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407D4340 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407D461C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14097360C (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140974380 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpKeyEnumStackInitialize @ 0x140975C3C (CmpKeyEnumStackInitialize.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140AB7E50 (CmpSubtreeEnumeratorInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  memset_0(a1, 0, 0x50uLL);
  v2 = a1 + 8;
  do
  {
    result = CmpKeyNodeStackEntryInitialize(v2);
    v2 += 32;
  }
  while ( v4 != 1 );
  return result;
}
