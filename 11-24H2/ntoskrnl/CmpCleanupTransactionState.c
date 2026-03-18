/*
 * XREFs of CmpCleanupTransactionState @ 0x140A05204
 * Callers:
 *     CmObliterateRMTxArray @ 0x1407DE04C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     CmpRunDownCmRM @ 0x140A04740 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     LockRMLog @ 0x140A05A38 (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x140A05DB4 (CmpLogCheckpoint.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  void **v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v9, v8, v10);
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2, a3);
  CmpUnlockRegistry(v11);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v12 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v13 = (void **)a2[1], *v13 != a2) )
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v14 = (void *)a2[9];
  if ( v14 )
    ObDereferenceObjectDeferDelete(v14);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry(v15);
    LockRMLog(a1);
    LOBYTE(v16) = 1;
    CmpLogCheckpoint(a1, v17, v16);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    CmpUnlockRegistry(v18);
  }
}
