/*
 * XREFs of AslFileMappingDelete @ 0x14095CDD8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x140802D80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803770 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140803B30 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x14080900C (AslFileMappingCreateFromImageView.c)
 *     SdbGetDatabaseMatch @ 0x1409595F0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140959920 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x140959A94 (AslFileMappingCreate.c)
 *     SdbCloseDatabaseRead @ 0x14095BDD8 (SdbCloseDatabaseRead.c)
 * Callees:
 *     RtlFileMapFree @ 0x1404B5148 (RtlFileMapFree.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 */

void __fastcall AslFileMappingDelete(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rdx

  if ( a1 )
  {
    RtlFileMapFree(a1 + 8);
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      AslFree(v2, v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      AslFree(v2, *(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    AslFree(v2, (void *)a1);
  }
}
