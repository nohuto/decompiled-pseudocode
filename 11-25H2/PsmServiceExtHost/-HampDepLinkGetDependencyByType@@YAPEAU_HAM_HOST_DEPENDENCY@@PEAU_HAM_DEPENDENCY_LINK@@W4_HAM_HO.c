/*
 * XREFs of ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180083E64
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034D10 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180082A28 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepLinkGetDependencyByType(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  bool i; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = a1 + 64;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = v4 - 16;
  for ( i = v4 == v2; ; i = v8 == v9 )
  {
    if ( !i )
      v5 = v6;
    if ( !v5 || *(_BYTE *)(v5 + 40) == a2 )
      break;
    v8 = *(_QWORD *)(v5 + 16);
    v6 = v8 - 16;
    v9 = *(_QWORD *)(v5 + 8) + 64LL;
    v5 = 0LL;
  }
  return v5;
}
