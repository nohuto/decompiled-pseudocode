/*
 * XREFs of SdbInitDatabaseInMemory @ 0x14095D30C
 * Callers:
 *     PpBootDDBHelper @ 0x140724D6C (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 * Callees:
 *     SdbpInitializeMatchers @ 0x14095BBD4 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x14095BC48 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x14095BDD8 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x14095CD24 (AslFree.c)
 *     AslAlloc @ 0x14095D3E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 1784LL);
  if ( !v4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 2579, (unsigned int)"Failed to allocate sdbcontext");
    return 0LL;
  }
  v6 = SdbpOpenDatabaseInMemory(a1, a2, 0);
  *(_QWORD *)(v4 + 8) = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 2588, (unsigned int)"Unable to open main database");
    v7 = *(_QWORD *)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    AslFree(v7, (void *)v4);
    return 0LL;
  }
  *(_DWORD *)(v4 + 32) = 1;
  *(_DWORD *)(v4 + 36) = 1;
  *(_DWORD *)(v4 + 64) = 2;
  *(_QWORD *)(v4 + 56) = v6;
  *(_OWORD *)(v4 + 40) = *(_OWORD *)(v6 + 28);
  SdbpInitializeMatchers(v4);
  return v4;
}
