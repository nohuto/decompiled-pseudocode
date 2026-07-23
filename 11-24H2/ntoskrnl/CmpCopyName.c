/*
 * XREFs of CmpCopyName @ 0x1408870F8
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407DAAF8 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140C490B0 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 i; // r9
  size_t v4; // r8
  _WORD *v5; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v4 = *(unsigned __int16 *)a2;
    if ( (unsigned int)i >= *(unsigned __int16 *)a2 >> 1 )
      return (unsigned __int16)v4 >> 1;
    v5 = a2[1];
    if ( v5[i] > 0xFFu )
      break;
    a1[i] = v5[i];
  }
  memmove(a1, a2[1], v4);
  return *(unsigned __int16 *)a2;
}
