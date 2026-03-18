/*
 * XREFs of SdbInitDatabaseInMemory @ 0x14082B8E8
 * Callers:
 *     PpBootDDBHelper @ 0x140718DF0 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1409AF8CC (PiInitializeDDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x140829DF4 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     SdbpOpenDatabaseInMemory @ 0x14082BA08 (SdbpOpenDatabaseInMemory.c)
 *     SdbpInitializeMatchers @ 0x14082BB48 (SdbpInitializeMatchers.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 1784LL);
  if ( !v4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v6 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
  *(_QWORD *)(v4 + 8) = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1LL);
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
