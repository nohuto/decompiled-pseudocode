/*
 * XREFs of ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180082738
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18007F5D8 (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A44C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004583C (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rdi
  struct _HAM_DEPENDENCY_GROUP *v7; // rsi
  __int64 v8; // rdx
  char *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int HostByProcessHandle; // ebx
  int v19; // eax
  int v20; // eax
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+51h] [rbp-AFh]
  __int16 v27; // [rsp+55h] [rbp-ABh]
  char v28; // [rsp+57h] [rbp-A9h]
  char v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+1E0h] [rbp+E0h]
  void *v31; // [rsp+1E8h] [rbp+E8h]
  void *v32; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v34; // [rsp+1FCh] [rbp+FCh]
  _DWORD v35[100]; // [rsp+200h] [rbp+100h] BYREF

  memset_0(v35, 0, 0x188uLL);
  v22 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  HampActivityPropertiesInitialize(
    (char *)L"ProcessDependency",
    (char *)&word_1800C1FFC,
    (struct _HAM_ACTIVITY_PROPERTIES *)v35);
  v35[0] |= 0x400u;
  v8 = 3LL;
  v30 = 0LL;
  v26 = 0;
  v9 = &v29;
  v27 = 0;
  v28 = 0;
  v10 = v35;
  v25 = 0;
  do
  {
    v11 = v10[1];
    *(_OWORD *)v9 = *v10;
    v12 = v10[2];
    *((_OWORD *)v9 + 1) = v11;
    v13 = v10[3];
    *((_OWORD *)v9 + 2) = v12;
    v14 = v10[4];
    *((_OWORD *)v9 + 3) = v13;
    v15 = v10[5];
    *((_OWORD *)v9 + 4) = v14;
    v16 = v10[6];
    *((_OWORD *)v9 + 5) = v15;
    v17 = v10[7];
    v10 += 8;
    *((_OWORD *)v9 + 6) = v16;
    v9 += 128;
    *((_OWORD *)v9 - 1) = v17;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v9 = *(_QWORD *)v10;
  v31 = a2;
  v32 = a3;
  ProcessId = GetProcessId(a2);
  v34 = GetProcessId(a3);
  HostByProcessHandle = RmHamFindHostByProcessHandle((__int64)a1, a2, 0, &v22);
  if ( HostByProcessHandle >= 0 )
  {
    v19 = RmHamFindHostByProcessHandle((__int64)a1, a3, 0, &v23);
    v6 = v23;
    HostByProcessHandle = v19;
    if ( v19 >= 0 )
    {
      v20 = HampDepGroupAddDependency(v22, v23, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v25, 0LL, &v24);
      v7 = v24;
      HostByProcessHandle = v20;
      if ( v20 >= 0 )
        HostByProcessHandle = 0;
    }
  }
  if ( v22 )
    RmHamHostDereference(v22);
  if ( v6 )
    RmHamHostDereference(v6);
  if ( v7 )
  {
    HampDepGroupRunStateChangeWorker(v7);
    HampDepGroupDereference(v7);
  }
  return (unsigned int)HostByProcessHandle;
}
