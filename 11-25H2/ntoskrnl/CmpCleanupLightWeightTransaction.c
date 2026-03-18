/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1408671C0
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x140867070 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive(v2);
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2);
  CmpUnlockRegistry(v3);
  CmpDetachFromRegistryProcess(&ApcState);
  LOCK_TRANSACTION_LIST();
  v4 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v5 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v5 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
