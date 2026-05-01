/*
 * XREFs of ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D978
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D5C0 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180036180 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmHamHostDereferenceUnsafe(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  if ( (*((_QWORD *)a1 + 75))-- == 1LL )
    RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)));
}
