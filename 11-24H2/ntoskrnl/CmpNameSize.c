/*
 * XREFs of CmpNameSize @ 0x140881BCC
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407DA5A8 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x140881A60 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140C46F60 (CmpCreateRootNode.c)
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
