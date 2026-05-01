/*
 * XREFs of ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x1800356C0
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C344 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C11C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180035520 (-HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036388 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974 (-HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 14) + 1LL;
  *((_QWORD *)a1 + 14) = v3;
  if ( a2 )
    *a2 = v3;
  if ( !*((_DWORD *)a1 + 32) )
  {
    HampDepGroupEnterStateChangeUnsafe(a1);
    v2 = 1;
  }
  if ( v2 != HampDepGroupIsCurrentThreadWorker(a1) )
    NT_ASSERT("EnteredStateChange == HampDepGroupIsCurrentThreadWorker(DependencyGroup)");
  return v2;
}
