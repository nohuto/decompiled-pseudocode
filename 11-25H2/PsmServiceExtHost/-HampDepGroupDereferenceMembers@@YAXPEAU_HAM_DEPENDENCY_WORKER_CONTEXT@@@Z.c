/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036200
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180071B50 (-HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D80 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D9F8 (-RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rsi
  DWORD v3; // ebp
  char *v4; // rbx
  _QWORD *Value; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v3 = HampLockTrackerId;
    v4 = (char *)v2 - 744;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive((__int64)v2 - 744);
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744), 0);
    if ( HampLockTrackerId != -1 )
    {
      v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v7 = *v6;
      if ( (*v6 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v6[2]-- == 1 )
        *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)v4 + 2) = 0;
    RtlReleaseSRWLockExclusive((char *)v2 - 744);
    CempListEntryRemoveAndClear(v2);
    *((_DWORD *)v4 + 196) = 0;
    RmHamHostDereferenceUnsafe((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 744));
  }
  RmpReleaseGlobalLock();
}
