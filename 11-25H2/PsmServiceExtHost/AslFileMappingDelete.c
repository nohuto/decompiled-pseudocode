/*
 * XREFs of AslFileMappingDelete @ 0x18009ED88
 * Callers:
 *     SdbCloseDatabaseRead @ 0x180091E98 (SdbCloseDatabaseRead.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1800996E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A16C (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A530 (SdbpCheckMatchingWildcardFiles.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 * Callees:
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     RtlFileMapFree @ 0x18009F4DC (RtlFileMapFree.c)
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
