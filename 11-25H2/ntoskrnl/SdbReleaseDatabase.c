/*
 * XREFs of SdbReleaseDatabase @ 0x14082AC3C
 * Callers:
 *     PpReleaseBootDDB @ 0x140718F48 (PpReleaseBootDDB.c)
 *     KsepSdbBootRelease @ 0x140734024 (KsepSdbBootRelease.c)
 *     KsepSdbUnmapFromMemory @ 0x14082ABC4 (KsepSdbUnmapFromMemory.c)
 *     PiReleaseDDB @ 0x140A960AC (PiReleaseDDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x140829DF4 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     SdbpCleanupUserSDBCache @ 0x14082AD5C (SdbpCleanupUserSDBCache.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x14082AD98 (SdbpCleanupLocalDatabaseSupport.c)
 */

__int64 __fastcall SdbReleaseDatabase(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3LL);
  if ( *(_DWORD *)(a1 + 1768) )
  {
    v4 = *(_QWORD *)(a1 + 1776);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 1776)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(1LL);
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
  return AslLogCallPrintf(1LL);
}
