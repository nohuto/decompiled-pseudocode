/*
 * XREFs of AslFileMappingDelete @ 0x18009F078
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1800922F8 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x18009EE08 (AslFileMappingCreate.c)
 * Callees:
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     RtlFileMapFree @ 0x18009F7CC (RtlFileMapFree.c)
 */

BOOLEAN __fastcall AslFileMappingDelete(__int64 a1)
{
  void *v2; // rdx
  BOOLEAN result; // al

  if ( a1 )
  {
    RtlFileMapFree(a1 + 8);
    v2 = *(void **)(a1 + 64);
    if ( v2 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, v2);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, *(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    return AslFree(NtCurrentPeb()->ProcessHeap, (void *)a1);
  }
  return result;
}
