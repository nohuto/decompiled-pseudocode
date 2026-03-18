/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x140916A00
 * Callers:
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E3C20 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E3EFC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140914928 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140915678 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpKeyEnumStackInitialize @ 0x140916F34 (CmpKeyEnumStackInitialize.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140ABBF90 (CmpSubtreeEnumeratorInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140916A3C (CmpKeyNodeStackEntryInitialize.c)
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
