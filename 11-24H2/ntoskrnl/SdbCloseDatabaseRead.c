/*
 * XREFs of SdbCloseDatabaseRead @ 0x14095BDD8
 * Callers:
 *     SdbpCloseLocalDatabaseEx @ 0x140806194 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140807094 (SdbpOpenCompressedDatabase.c)
 *     SdbReleaseDatabase @ 0x14095CC2C (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x14095D30C (SdbInitDatabaseInMemory.c)
 * Callees:
 *     AslHashFree @ 0x14080B7E0 (AslHashFree.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 *     AslFileMappingDelete @ 0x14095CDD8 (AslFileMappingDelete.c)
 */

__int64 __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 2640);
  v2 = a1;
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    if ( *(_QWORD *)(v1 + 8) )
      AslFree(a1);
    AslFree(a1);
    a1 = *(_QWORD *)(v2 + 2648);
    *(_QWORD *)(v2 + 2640) = 0LL;
    if ( a1 )
    {
      AslHashFree(a1);
      *(_QWORD *)(v2 + 2648) = 0LL;
    }
  }
  if ( (*(_BYTE *)(v2 + 24) & 9) == 9 && *(_QWORD *)(v2 + 8) )
  {
    AslFree(a1);
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_DWORD *)(v2 + 20) = 0;
  }
  AslFileMappingDelete(*(_QWORD *)v2);
  return AslFree(v3);
}
