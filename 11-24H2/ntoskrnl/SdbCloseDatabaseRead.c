/*
 * XREFs of SdbCloseDatabaseRead @ 0x140943898
 * Callers:
 *     SdbpCloseLocalDatabaseEx @ 0x1408068D4 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408077D4 (SdbpOpenCompressedDatabase.c)
 *     SdbReleaseDatabase @ 0x1409446EC (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 * Callees:
 *     AslHashFree @ 0x14080BF20 (AslHashFree.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
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
