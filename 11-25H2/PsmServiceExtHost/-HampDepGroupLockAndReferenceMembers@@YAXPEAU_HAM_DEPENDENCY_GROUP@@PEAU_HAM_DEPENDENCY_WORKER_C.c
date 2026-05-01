/*
 * XREFs of ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180068650
 * Callers:
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DAE8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE88 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180071B50 (-HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

void __fastcall HampDepGroupLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rbx
  struct _HAM_DEPENDENCY_GROUP *v3; // rdi

  v2 = a2;
  *((_QWORD *)a2 + 1) = a2;
  v3 = a1;
  *(_QWORD *)a2 = a2;
  while ( !(unsigned int)HampDepGroupTryLockAndReferenceMembers(a1, a2) )
  {
    HampDepGroupUnlockAndDereferenceMembers(v2);
    a2 = v2;
    a1 = v3;
  }
}
