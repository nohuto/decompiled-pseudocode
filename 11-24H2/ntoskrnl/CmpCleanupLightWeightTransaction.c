/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x140A028D0
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x140A02780 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry(v4);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v5 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v6 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v6 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
