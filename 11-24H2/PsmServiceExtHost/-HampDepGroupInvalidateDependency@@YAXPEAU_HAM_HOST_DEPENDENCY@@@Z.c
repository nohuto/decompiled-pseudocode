/*
 * XREFs of ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180082C84
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D5C0 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800843B0 (-HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036128 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036B08 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x180038030 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180038130 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampDepGroupInvalidateDependency(struct _HAM_HOST_DEPENDENCY *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 2u, 0);
  RtlAcquireSRWLockShared(v2 + 48);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 96)) <= 1 )
    __fastfail(0xEu);
  HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  *((_DWORD *)a1 + 9) |= 1u;
  HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v4);
  v5 = *((_QWORD *)a1 + 1);
  CempLockTrackerMarkReleased(HampLockTrackerId, v6, 2u);
  RtlReleaseSRWLockShared(v5 + 48);
  HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v4);
  HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v4);
}
