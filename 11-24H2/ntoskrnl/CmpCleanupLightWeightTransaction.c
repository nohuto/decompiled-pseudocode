/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x140A063A0
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x140A06250 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v5, v4, v6);
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry(v7);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v8 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v9 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v9 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
