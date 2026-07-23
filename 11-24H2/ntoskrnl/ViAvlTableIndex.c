/*
 * XREFs of ViAvlTableIndex @ 0x1403E4F58
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1403E3E20 (VfAvlDeleteTreeNode.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403E4050 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViAvlTableIndex(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // edx

  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 == 1 )
    return 0LL;
  else
    return (a2 >> 12) % v3;
}
