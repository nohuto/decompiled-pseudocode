/*
 * XREFs of CmReleaseLoadKeyContext @ 0x140912250
 * Callers:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD();
    CmpLockRegistry(v5);
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 32) + 2944LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
    }
    CmpUnlockRegistry(v6);
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    return (_QWORD *)CmpUnlockRegistry(v3);
  }
}
