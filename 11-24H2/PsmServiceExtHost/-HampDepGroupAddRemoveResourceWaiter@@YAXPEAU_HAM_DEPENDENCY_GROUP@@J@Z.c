/*
 * XREFs of ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180082934
 * Callers:
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800283D0 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupAddRemoveResourceWaiter(struct _HAM_DEPENDENCY_GROUP *a1, int a2)
{
  HampDepGroupAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 23) += a2;
  HampDepGroupReleaseLockExclusive(a1);
}
