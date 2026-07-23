/*
 * XREFs of SdbInitDatabaseInMemory @ 0x140944DCC
 * Callers:
 *     PpBootDDBHelper @ 0x1407228FC (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 * Callees:
 *     SdbpInitializeMatchers @ 0x140943694 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x140943708 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x140943898 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
