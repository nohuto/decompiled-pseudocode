/*
 * XREFs of ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x1800841A4
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034D10 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostDynamicDepAllocateState(struct _HAM_HOST_DYNAMIC_DEPENDENCY *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rbp
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rcx

  v2 = 0;
  v3 = *((_QWORD *)a1 + 7);
  v5 = 32LL;
  v6 = 32LL;
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v1 = v7;
  if ( v7 )
    v6 = (__int64)v7 - 32;
  v8 = *(_QWORD *)v6;
  if ( v3 )
    v5 = v3 - 32;
  v9 = *(_QWORD *)v5;
  if ( v8 >= *(_QWORD *)v5 )
    v7 = (struct _RM_HAM_ACTIVITY_HOST *)v3;
  HampHostAcquireLockSharedEx(v7, 1);
  v10 = (struct _RM_HAM_ACTIVITY_HOST *)v3;
  if ( v8 >= v9 )
    v10 = v1;
  HampHostAcquireLockSharedEx(v10, 1);
  if ( (*((_QWORD *)v1 + 83) & 0x2000000000000LL) != 0 && (*(_QWORD *)(v3 + 664) & 0x2000000000000LL) != 0 )
  {
    *((_QWORD *)a1 + 8) = *((_QWORD *)v1 + 102);
    *((_QWORD *)a1 + 9) = *(_QWORD *)(v3 + 816);
  }
  else
  {
    v2 = -1073741394;
  }
  HampHostReleaseLockSharedEx(v1);
  HampHostReleaseLockSharedEx((struct _RM_HAM_ACTIVITY_HOST *)v3);
  return v2;
}
