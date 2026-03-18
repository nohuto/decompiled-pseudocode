/*
 * XREFs of CmpCleanupTransactionState @ 0x1408666A8
 * Callers:
 *     CmObliterateRMTxArray @ 0x1407CE88C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmpRunDownCmRM @ 0x140865B50 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LockRMLog @ 0x1408668D8 (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x140866C54 (CmpLogCheckpoint.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  void **v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v7);
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2);
  CmpUnlockRegistry(v8);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v9 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (void **)a2[1], *v10 != a2) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v11 = (void *)a2[9];
  if ( v11 )
    ObDereferenceObjectDeferDelete(v11);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry(v12);
    LockRMLog(a1);
    LOBYTE(v13) = 1;
    CmpLogCheckpoint(a1, v14, v13);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    CmpUnlockRegistry(v15);
  }
}
