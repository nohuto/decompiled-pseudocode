/*
 * XREFs of AslFileMappingDelete @ 0x14082ADE8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1407F2ED0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407F3C80 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x1407F949C (AslFileMappingCreateFromImageView.c)
 *     SdbCloseDatabaseRead @ 0x140829DF4 (SdbCloseDatabaseRead.c)
 *     SdbpCheckKObject @ 0x14082BD7C (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 * Callees:
 *     RtlFileMapFree @ 0x1404B56A8 (RtlFileMapFree.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
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
