/*
 * XREFs of CmpLazyCommitWorker @ 0x1407DE690
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x140A008C8 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 */

_KAFFINITY_EX *CmpLazyCommitWorker()
{
  char v0; // di
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 **v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD **v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+38h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+88h] [rbp+28h] BYREF

  v13 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v0 = 1;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v11);
  v9 = &v9;
  v10 = (__int64 *)&v9;
  if ( (unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v1 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v2 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v2 + 8) = &CmpLazyCommitListHead;
      if ( v1 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      if ( (int)CmpTransMgrCommit(v3, v1 - 4, &v13) < 0 )
      {
        v4 = (__int64 **)v10;
        if ( (_QWORD ***)*v10 != &v9 )
          goto LABEL_20;
        v1[1] = (__int64)v10;
        *v1 = (__int64)&v9;
        v0 = 0;
        *v4 = v1;
        v10 = v1;
      }
      else
      {
        CmpCleanupTransactionState(v1[4], v1 - 4, 4LL);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    if ( !v0 )
    {
      LOCK_TRANSACTION_LIST();
      while ( 1 )
      {
        v5 = v9;
        if ( v9[1] != &v9 )
          goto LABEL_20;
        v6 = (__int64)*v9;
        if ( (_QWORD **)(*v9)[1] != v9 )
          goto LABEL_20;
        v9 = (_QWORD **)*v9;
        *(_QWORD *)(v6 + 8) = &v9;
        if ( v5 == &v9 )
          break;
        v7 = (_QWORD *)qword_140EF5628;
        if ( *(__int64 **)qword_140EF5628 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v5 = &CmpLazyCommitListHead;
        v5[1] = v7;
        *v7 = v5;
        qword_140EF5628 = (__int64)v5;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    CmpReleaseHiveLoadUnloadRundown();
  }
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v11);
}
