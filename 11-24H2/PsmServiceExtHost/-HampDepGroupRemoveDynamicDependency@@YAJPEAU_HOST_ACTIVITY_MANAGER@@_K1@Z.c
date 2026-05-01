/*
 * XREFs of ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x180083018
 * Callers:
 *     ?HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z @ 0x1800805B8 (-HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x180082EE8 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 */

__int64 __fastcall HampDepGroupRemoveDynamicDependency(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, __int64 a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  int Host; // edi
  int v7; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // [rsp+20h] [rbp-18h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  Host = RmHamFindHost((__int64)a1, a2, 0, &v10);
  if ( Host >= 0 )
  {
    v7 = RmHamFindHost((__int64)a1, a3, 0, &v9);
    v4 = v9;
    Host = v7;
    if ( v7 >= 0 )
      Host = HampDepGroupRemoveDependency(v10, v9, 1);
  }
  if ( v10 )
    RmHamHostDereference(v10);
  if ( v4 )
    RmHamHostDereference(v4);
  return (unsigned int)Host;
}
