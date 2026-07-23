/*
 * XREFs of SdbReleaseDatabase @ 0x1409446EC
 * Callers:
 *     PpReleaseBootDDB @ 0x140722A54 (PpReleaseBootDDB.c)
 *     KsepSdbBootRelease @ 0x14073DF74 (KsepSdbBootRelease.c)
 *     KsepSdbUnmapFromMemory @ 0x140944674 (KsepSdbUnmapFromMemory.c)
 *     PiReleaseDDB @ 0x140A930AC (PiReleaseDDB.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x140943898 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     SdbpCleanupUserSDBCache @ 0x14094480C (SdbpCleanupUserSDBCache.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x140944848 (SdbpCleanupLocalDatabaseSupport.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReleaseDatabase(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 154, (unsigned int)"Enter.");
  if ( *(_DWORD *)(a1 + 1768) )
  {
    v4 = *(_QWORD *)(a1 + 1776);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 1776)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        171,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    return AslFree(v4);
  }
  if ( *(int *)(a1 + 1776) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(a1);
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    SdbpCleanupUserSDBCache(a1);
    return AslFree(v4);
  }
  return AslLogCallPrintf(
           1,
           (unsigned int)"SdbReleaseDatabase",
           185,
           (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
