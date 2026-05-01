/*
 * XREFs of ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180083198
 * Callers:
 *     ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180080444 (-HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A44C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180082EE8 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int HostByProcessHandle; // edi
  int v7; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // [rsp+20h] [rbp-18h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle((__int64)a1, a2, 0, &v10);
  if ( HostByProcessHandle >= 0 )
  {
    v7 = RmHamFindHostByProcessHandle((__int64)a1, a3, 0, &v9);
    v4 = v9;
    HostByProcessHandle = v7;
    if ( v7 >= 0 )
      HostByProcessHandle = HampDepGroupRemoveDependency(v10, v9, 0);
  }
  if ( v10 )
    RmHamHostDereference(v10);
  if ( v4 )
    RmHamHostDereference(v4);
  return (unsigned int)HostByProcessHandle;
}
