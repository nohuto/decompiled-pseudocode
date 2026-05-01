/*
 * XREFs of ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006DBB8
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180011534 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B770 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180034C90 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035678 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043D7C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FF98 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupAddDonationDependency(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST *a4,
        struct _HAM_ACTIVITY_PROPERTIES *a5,
        struct _HAM_ACTIVITY **a6)
{
  struct _HAM_ACTIVITY_PROPERTIES *v8; // rbx
  __int64 v11; // rdx
  char *v12; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rdx
  int CanDonate; // ebx
  int v32; // eax
  struct _HAM_DEPENDENCY_GROUP *v33; // rdi
  struct _HAM_ACTIVITY **v34; // rsi
  char v35; // bl
  __int64 v36; // rdx
  struct _HAM_ACTIVITY *v37; // rdx
  struct _HAM_DEPENDENCY_GROUP *v39; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_HOST_DEPENDENCY *v40; // [rsp+38h] [rbp-C8h] BYREF
  char v41[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v42; // [rsp+48h] [rbp-B8h] BYREF
  struct _HAM_CLIENT_CONTEXT *v43; // [rsp+1D0h] [rbp+D0h]
  __int64 v44; // [rsp+1D8h] [rbp+D8h]
  _BYTE v45[400]; // [rsp+1F0h] [rbp+F0h] BYREF

  v40 = 0LL;
  v39 = 0LL;
  v8 = a5;
  memset_0(v41, 0, 0x1B0uLL);
  v11 = 3LL;
  v43 = a1;
  v41[0] = 4;
  v12 = &v42;
  v13 = a5;
  v14 = 3LL;
  do
  {
    v15 = *((_OWORD *)v13 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v13;
    v16 = *((_OWORD *)v13 + 2);
    *((_OWORD *)v12 + 1) = v15;
    v17 = *((_OWORD *)v13 + 3);
    *((_OWORD *)v12 + 2) = v16;
    v18 = *((_OWORD *)v13 + 4);
    *((_OWORD *)v12 + 3) = v17;
    v19 = *((_OWORD *)v13 + 5);
    *((_OWORD *)v12 + 4) = v18;
    v20 = *((_OWORD *)v13 + 6);
    *((_OWORD *)v12 + 5) = v19;
    v21 = *((_OWORD *)v13 + 7);
    v13 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v13 + 128);
    *((_OWORD *)v12 + 6) = v20;
    v12 += 128;
    *((_OWORD *)v12 - 1) = v21;
    --v14;
  }
  while ( v14 );
  *(_QWORD *)v12 = *(_QWORD *)v13;
  v22 = v45;
  do
  {
    v23 = *((_OWORD *)v8 + 1);
    *v22 = *(_OWORD *)v8;
    v24 = *((_OWORD *)v8 + 2);
    v22[1] = v23;
    v25 = *((_OWORD *)v8 + 3);
    v22[2] = v24;
    v26 = *((_OWORD *)v8 + 4);
    v22[3] = v25;
    v27 = *((_OWORD *)v8 + 5);
    v22[4] = v26;
    v28 = *((_OWORD *)v8 + 6);
    v22[5] = v27;
    v29 = *((_OWORD *)v8 + 7);
    v8 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v8 + 128);
    v22[6] = v28;
    v22 += 8;
    *(v22 - 1) = v29;
    --v11;
  }
  while ( v11 );
  v30 = *((_QWORD *)a1 + 4);
  *(_QWORD *)v22 = *(_QWORD *)v8;
  CanDonate = HampRmPopulateDefaultProperties(
                (struct _HAM_ACTIVITY_PROPERTIES *)v45,
                (struct _HOST_ACTIVITY_MANAGER *)((v30 & 0xFFFFFFFFFFFFFFFCuLL)
                                                - 48LL * *((unsigned __int8 *)a1 + 164)
                                                - 16),
                1);
  if ( CanDonate >= 0 )
  {
    CanDonate = HampHostCanDonate(a2);
    if ( CanDonate >= 0 )
    {
      v44 = a3;
      v32 = HampDepGroupAddDependency(a2, a4, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v41, &v40, &v39);
      v33 = v39;
      CanDonate = v32;
      if ( v32 >= 0 )
      {
        HampDepGroupRunStateChangeWorker(v39);
        v34 = (struct _HAM_ACTIVITY **)v40;
        HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)v40 + 80LL), 0);
        v35 = *((_BYTE *)v34 + 104);
        HampHostReleaseLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)*v34 + 10));
        if ( v35 == 2 )
        {
          HampActClose(*v34, v36);
          CanDonate = -1058275323;
        }
        else
        {
          v37 = *v34;
          if ( _InterlockedIncrement64((volatile signed __int64 *)*v34 + 3) <= 1 )
            __fastfail(0xEu);
          v33 = v39;
          CanDonate = 0;
          *a6 = v37;
        }
      }
      if ( v33 )
        HampDepGroupDereference(v33);
    }
  }
  return (unsigned int)CanDonate;
}
