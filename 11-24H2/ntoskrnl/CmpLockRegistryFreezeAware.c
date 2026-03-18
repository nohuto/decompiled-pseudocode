/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x14097DFD8
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D7EEC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDoFlushNextHive @ 0x14090AE60 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpStartRMLogs @ 0x140A04324 (CmpStartRMLogs.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     CmpUnLockFreezeQueue @ 0x1406FB388 (CmpUnLockFreezeQueue.c)
 *     CmpLockFreezeQueue @ 0x1406FB3E4 (CmpLockFreezeQueue.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3, v2, v4);
  else
    CmpLockRegistry(v3);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    CmpLockFreezeQueue();
    if ( *(__int64 **)qword_140EF6DE8 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v10 + 1) = qword_140EF6DE8;
    *(_QWORD *)&v10 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140EF6DE8 = &v10;
    qword_140EF6DE8 = (__int64)&v10;
    CmpUnLockFreezeQueue();
    CmpUnlockRegistry(v6);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v8, v7, v9);
    else
      CmpLockRegistry(v8);
  }
  return 0LL;
}
