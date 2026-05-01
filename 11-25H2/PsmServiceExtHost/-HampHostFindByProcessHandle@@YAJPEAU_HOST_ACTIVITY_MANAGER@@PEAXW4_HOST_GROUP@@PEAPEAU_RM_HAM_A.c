/*
 * XREFs of ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800385CC
 * Callers:
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180044EC4 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080670 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180080A9C (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18003A2D8 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A4CC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 */

__int64 __fastcall HampHostFindByProcessHandle(
        __int64 a1,
        void *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST **a4,
        unsigned __int64 *a5)
{
  int HostByProcessHandle; // edi
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  void *v10; // rdx
  unsigned __int64 v11; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, a3, &v12);
  if ( HostByProcessHandle >= 0 )
  {
    v10 = a2;
    v8 = v12;
    HostByProcessHandle = HampHostQueryHostGenerationForProcess(v12, v10, &v13);
    if ( HostByProcessHandle >= 0 )
    {
      v11 = v13;
      *a4 = v8;
      v8 = 0LL;
      HostByProcessHandle = 0;
      *a5 = v11;
    }
  }
  else
  {
    v8 = v12;
  }
  if ( v8 )
    RmHamHostDereference(v8);
  return (unsigned int)HostByProcessHandle;
}
