/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006853C
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007F74C (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004583C (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  struct _HAM_DEPENDENCY_GROUP *v8; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  __int64 v10; // rax
  char *v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v20; // r14
  unsigned int v21; // ebx
  int v22; // eax
  int v23; // eax
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v26; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v29; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[400]; // [rsp+200h] [rbp+100h] BYREF

  memset_0(v30, 0, 0x188uLL);
  v27 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  if ( !a4 )
  {
    HampActivityPropertiesInitialize(
      (char *)L"DynamicHostDependency",
      (char *)&word_1800C1FFC,
      (struct _HAM_ACTIVITY_PROPERTIES *)v30);
    a4 = (struct _HAM_ACTIVITY_PROPERTIES *)v30;
  }
  *(_DWORD *)a4 |= 0x400u;
  memset_0(v28, 0, 0x1B0uLL);
  v10 = 3LL;
  v28[0] = 1;
  v11 = &v29;
  do
  {
    v12 = *((_OWORD *)a4 + 1);
    *(_OWORD *)v11 = *(_OWORD *)a4;
    v13 = *((_OWORD *)a4 + 2);
    *((_OWORD *)v11 + 1) = v12;
    v14 = *((_OWORD *)a4 + 3);
    *((_OWORD *)v11 + 2) = v13;
    v15 = *((_OWORD *)a4 + 4);
    *((_OWORD *)v11 + 3) = v14;
    v16 = *((_OWORD *)a4 + 5);
    *((_OWORD *)v11 + 4) = v15;
    v17 = *((_OWORD *)a4 + 6);
    *((_OWORD *)v11 + 5) = v16;
    v18 = *((_OWORD *)a4 + 7);
    a4 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a4 + 128);
    *((_OWORD *)v11 + 6) = v17;
    v11 += 128;
    *((_OWORD *)v11 - 1) = v18;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v11 = *(_QWORD *)a4;
  Host = RmHamFindHost((__int64)a1, a2, 0, &v26);
  v20 = v26;
  v21 = Host;
  if ( Host >= 0 )
  {
    v22 = RmHamFindHost((__int64)a1, a3, 0, &v25);
    v9 = v25;
    v21 = v22;
    if ( v22 >= 0 )
    {
      v23 = HampDepGroupAddDependency(v20, v25, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v28, 0LL, &v27);
      v8 = v27;
      v21 = v23;
      if ( v23 >= 0 )
        v21 = 0;
    }
  }
  if ( v20 )
    RmHamHostDereference(v20);
  if ( v9 )
    RmHamHostDereference(v9);
  if ( v8 )
  {
    HampDepGroupRunStateChangeWorker(v8);
    HampDepGroupDereference(v8);
  }
  return v21;
}
