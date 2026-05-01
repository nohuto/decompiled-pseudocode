/*
 * XREFs of ?HampDepGroupGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180066FA0
 * Callers:
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001DE08 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampDepGroupGetFirstHost(struct _HAM_DEPENDENCY_GROUP *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  v1 = (unsigned __int64)a1 + 56;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v2 & 1) == 0 )
  {
    v3 = v2;
    return (struct _RM_HAM_ACTIVITY_HOST *)((v3 - 720) & -(__int64)(v3 != 0));
  }
  if ( v2 != 1 )
  {
    v3 = v2 ^ (v1 | 1);
    return (struct _RM_HAM_ACTIVITY_HOST *)((v3 - 720) & -(__int64)(v3 != 0));
  }
  return 0LL;
}
