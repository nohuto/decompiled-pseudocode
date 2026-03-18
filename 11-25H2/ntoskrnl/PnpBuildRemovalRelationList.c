/*
 * XREFs of PnpBuildRemovalRelationList @ 0x140830278
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     IopAllocateRelationList @ 0x14082F3B0 (IopAllocateRelationList.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, __int64 a3, void ***a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  unsigned int **BugCheckParameter3; // rax
  void **v10; // rbx
  int v12; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = (unsigned int **)IopAllocateRelationList(a2);
  v10 = (void **)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v12 = PnpProcessRelation(v8, a2, 2LL, a3, BugCheckParameter3);
  if ( v12 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a4 = v10;
    IopSortRelationListForRemove(v10);
  }
  return (unsigned int)v12;
}
