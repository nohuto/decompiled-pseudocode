/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x14090A470
 * Callers:
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpKeyEnumStackInitialize @ 0x14090A9A4 (CmpKeyEnumStackInitialize.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x140AB6FB0 (CmpSubtreeEnumeratorInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
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
