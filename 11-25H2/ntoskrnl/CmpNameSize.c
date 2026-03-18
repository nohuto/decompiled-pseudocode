/*
 * XREFs of CmpNameSize @ 0x14087FC84
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407CADE4 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x14087FB18 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140C35CA4 (CmpCreateRootNode.c)
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
