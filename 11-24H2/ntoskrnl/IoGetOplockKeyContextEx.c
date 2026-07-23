/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1403CDA50
 * Callers:
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403CF540 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 208);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 56);
  if ( !v2 )
    return 0LL;
  result = 0LL;
  if ( (*(_BYTE *)(v2 + 2) & 3) != 0 )
    return v2;
  return result;
}
