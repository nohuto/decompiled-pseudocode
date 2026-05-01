/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18006AC38
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015B8C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180017E20 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180017F14 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E4BC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r8d
  unsigned __int64 v10; // rcx
  const unsigned __int16 *v11; // r14
  unsigned int v12; // r15d
  union _RM_SID *v13; // rbp
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  unsigned int v16; // edi
  char *v17; // rax
  char *v18; // rax
  int v19; // eax
  struct _HAM_ACTIVITY *v20; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+B8h] [rbp+10h]
  struct _HAM_ACTIVITY *v24; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 *v25; // [rsp+C8h] [rbp+20h]

  v25 = a4;
  v23 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *((unsigned __int8 *)a1 + 164);
  v8 = -1LL;
  v9 = *(_DWORD *)a3;
  v10 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v24 = 0LL;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0;
  v13 = 0LL;
  Host = RmHamFindHost(v10 - 48 * v7 - 16, a2, (v9 & 0x2000000) != 0, &v22);
  v15 = v22;
  v16 = Host;
  if ( Host >= 0 )
  {
    v11 = (const unsigned __int16 *)((char *)v22 + 24);
    if ( v22 )
      v17 = (char *)v22 - 64;
    else
      v17 = 0LL;
    v13 = (union _RM_SID *)(v17 + 552);
    if ( v22 )
      v18 = (char *)v22 - 64;
    else
      v18 = 0LL;
    v12 = *((_DWORD *)v18 + 156);
    v19 = HampActCreate(
            a1,
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *((unsigned __int8 *)a1 + 164)
                                            - 16),
            v22,
            a3,
            0,
            0LL,
            &v24);
    v20 = v24;
    v16 = v19;
    if ( v19 >= 0 )
    {
      v16 = 0;
      v8 = *((_QWORD *)v24 + 5);
      *v25 = v8;
    }
    if ( v20 )
      CemRcObjectDereference(v20);
  }
  HampSrvTraceActivityCreateStop(v16, v8, 0LL, v11, v12, v13, v23, a3, 0, 0, 0);
  if ( v15 )
    RmHamHostDereference(v15);
  return v16;
}
