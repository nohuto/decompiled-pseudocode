/*
 * XREFs of SmcCacheCleanup @ 0x14078DC24
 * Callers:
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x14078DCBC (SmcCacheDelete.c)
 * Callees:
 *     StEtaCleanup @ 0x140396118 (StEtaCleanup.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmStoreDelete @ 0x140789700 (SmStoreDelete.c)
 *     SmKmStoreFileDelete @ 0x14078BAEC (SmKmStoreFileDelete.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  PPRIVILEGE_SET *v4; // rbx
  __int64 v5; // rsi
  int v6; // r8d

  v3 = a1 - 2288;
  v4 = (PPRIVILEGE_SET *)(a2 + 176);
  v5 = 16LL;
  do
  {
    v6 = *((_DWORD *)v4 - 2);
    if ( v6 != -1 )
    {
      SmStoreDelete(v3, *((_DWORD *)v4 - 1) & 3, v6);
      CmSiFreeMemory(*v4);
    }
    v4 += 3;
    --v5;
  }
  while ( v5 );
  if ( *(_QWORD *)(a2 + 40) && *(_QWORD *)(a2 + 48) )
    SmKmStoreFileDelete(a2 + 40);
  SmKmFileInfoCleanup(a2 + 40);
  StEtaCleanup(a2 + 104);
}
