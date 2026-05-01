/*
 * XREFs of SdbReleaseDatabase @ 0x180092CE8
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x1800922F8 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x180094D78 (SdbpCleanupLocalDatabaseSupport.c)
 *     SdbpRemoveSDBLookupEntry @ 0x180096E64 (SdbpRemoveSDBLookupEntry.c)
 *     ShimExceptionHandler @ 0x18009C01C (ShimExceptionHandler.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 */

__int64 (__fastcall *__fastcall SdbReleaseDatabase(__int64 a1))(_QWORD)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  AslLogCallPrintf(3LL);
  if ( *(_DWORD *)(a1 + 1768) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1776) + 1776LL));
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    if ( *(int *)(a1 + 1776) > 0 )
      return AslLogCallPrintf(1LL);
    SdbpCleanupLocalDatabaseSupport(a1);
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      SdbCloseDatabaseRead(v3);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      SdbCloseDatabaseRead(v4);
    while ( *(_QWORD *)(a1 + 576) )
      SdbpRemoveSDBLookupEntry(a1);
  }
  return (__int64 (__fastcall *)(_QWORD))AslFree(NtCurrentPeb()->ProcessHeap, a1);
}
