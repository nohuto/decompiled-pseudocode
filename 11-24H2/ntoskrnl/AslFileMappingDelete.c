/*
 * XREFs of AslFileMappingDelete @ 0x140944898
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x14080974C (AslFileMappingCreateFromImageView.c)
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x1409413E0 (SdbpCheckKObject.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     SdbCloseDatabaseRead @ 0x140943898 (SdbCloseDatabaseRead.c)
 * Callees:
 *     RtlFileMapFree @ 0x1404AF948 (RtlFileMapFree.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
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
