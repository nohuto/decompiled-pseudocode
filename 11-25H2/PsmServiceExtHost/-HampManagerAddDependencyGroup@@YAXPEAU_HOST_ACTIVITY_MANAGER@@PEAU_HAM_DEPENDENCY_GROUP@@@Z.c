/*
 * XREFs of ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800709D0
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800348B8 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D5D0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerAddDependencyGroup(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_DEPENDENCY_GROUP *a2)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rbx
  struct _HOST_ACTIVITY_MANAGER **v5; // rcx

  HampManagerAcquireLockExclusive(a1);
  v4 = (struct _HAM_DEPENDENCY_GROUP *)((char *)a2 + 40);
  v5 = (struct _HOST_ACTIVITY_MANAGER **)*((_QWORD *)a1 + 63);
  if ( *v5 != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 496) )
    __fastfail(3u);
  *((_QWORD *)v4 + 1) = v5;
  *(_QWORD *)v4 = (char *)a1 + 496;
  *v5 = v4;
  *((_QWORD *)a1 + 63) = v4;
  ++*((_QWORD *)a1 + 61);
  HampManagerReleaseLockExclusive(a1);
}
