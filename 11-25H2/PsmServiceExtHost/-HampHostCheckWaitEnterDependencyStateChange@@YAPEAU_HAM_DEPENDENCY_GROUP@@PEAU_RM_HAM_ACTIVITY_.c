/*
 * XREFs of ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180034BB4
 * Callers:
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18001BED0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DAE8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035524 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800356F8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036438 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampHostCheckWaitEnterDependencyStateChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rbx

  while ( 1 )
  {
    v2 = *((_QWORD *)a1 + 88);
    if ( !v2 )
      break;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 96)) <= 1 )
      __fastfail(0xEu);
    HampHostReleaseLockExclusive(a1);
    HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v2);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v2);
    HampHostAcquireLockExclusiveEx(a1, 0);
    if ( *((_QWORD *)a1 + 88) == v2 )
      break;
    HampHostReleaseLockExclusive(a1);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v2);
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  return (struct _HAM_DEPENDENCY_GROUP *)v2;
}
