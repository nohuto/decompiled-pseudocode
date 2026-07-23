/*
 * XREFs of CmpNameSize @ 0x140885A7C
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407DAAF8 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140C490B0 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 i; // r8

  v1 = *a1;
  for ( i = 0LL; (unsigned int)i < *a1 >> 1; i = (unsigned int)(i + 1) )
  {
    if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * i) > 0xFFu )
      return v1;
  }
  v1 >>= 1;
  return v1;
}
