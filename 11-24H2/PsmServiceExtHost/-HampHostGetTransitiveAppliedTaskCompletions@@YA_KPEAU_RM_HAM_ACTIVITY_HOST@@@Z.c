/*
 * XREFs of ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DE70
 * Callers:
 *     ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x1800801B4 (-HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180034B34 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036128 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800684D0 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006CED4 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180071A00 (-HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180082ADC (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 */

__int64 __fastcall HampHostGetTransitiveAppliedTaskCompletions(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_DEPENDENCY_GROUP *v2; // rdi
  __int64 TransitiveTaskCompletionsForHost; // rsi
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  HampHostAcquireLockExclusiveEx(a1, 0);
  v2 = HampHostCheckWaitEnterDependencyStateChange(a1);
  if ( v2 )
  {
    HampHostReleaseLockExclusive(a1);
    HampDepGroupLockAndReferenceMembers(v2, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)&v5);
    TransitiveTaskCompletionsForHost = HampDepGroupGetTransitiveTaskCompletionsForHost(v2, a1);
    HampDepGroupReleaseLockExclusive(v2);
    HampDepGroupUnlockAndDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT **)&v5);
    HampDepGroupRunStateChangeWorker(v2);
  }
  else
  {
    TransitiveTaskCompletionsForHost = HampHostGetAppliedTaskCompletions(a1);
    HampHostReleaseLockExclusive(a1);
  }
  return TransitiveTaskCompletionsForHost;
}
