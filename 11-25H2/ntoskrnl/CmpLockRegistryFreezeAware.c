/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140884780
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407C8754 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmpStartRMLogs @ 0x140A81958 (CmpStartRMLogs.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     CmpUnLockFreezeQueue @ 0x1406EF518 (CmpUnLockFreezeQueue.c)
 *     CmpLockFreezeQueue @ 0x1406EF574 (CmpLockFreezeQueue.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v2);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    CmpLockFreezeQueue();
    if ( *(__int64 **)qword_140EF69B8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v6 + 1) = qword_140EF69B8;
    *(_QWORD *)&v6 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140EF69B8 = &v6;
    qword_140EF69B8 = (__int64)&v6;
    CmpUnLockFreezeQueue();
    CmpUnlockRegistry(v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v5);
  }
  return 0LL;
}
