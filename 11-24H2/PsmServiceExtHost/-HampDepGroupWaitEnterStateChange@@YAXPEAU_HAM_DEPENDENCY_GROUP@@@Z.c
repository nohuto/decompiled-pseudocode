/*
 * XREFs of ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800354A4
 * Callers:
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180034B34 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035034 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035170 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081610 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180083240 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180083550 (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 * Callees:
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036388 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974 (-HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180046330 (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampDepGroupWaitEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1)
{
  int v2; // edi

  HampDepGroupAcquireLockExclusive(a1);
  while ( 1 )
  {
    ++*((_QWORD *)a1 + 14);
    if ( *((_DWORD *)a1 + 32) )
    {
      v2 = 0;
    }
    else
    {
      HampDepGroupEnterStateChangeUnsafe(a1);
      v2 = 1;
    }
    if ( v2 != HampDepGroupIsCurrentThreadWorker(a1) )
      NT_ASSERT("EnteredStateChange == HampDepGroupIsCurrentThreadWorker(DependencyGroup)");
    if ( v2 )
      break;
    CempLockSleepConditionVariableExclusive((char *)a1 + 8, (char *)a1 + 24, 0LL);
  }
  HampDepGroupReleaseLockExclusive(a1);
}
