/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180045548
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x1800817D0 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180017EA0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180017F94 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCEC (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E53C (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180044EC4 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800458BC (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x1800459E0 (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x180070490 (-HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r15
  int v7; // r12d
  struct _HAM_ACTIVITY *v8; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  unsigned int v10; // r13d
  const unsigned __int16 *v11; // rdx
  int v12; // eax
  signed __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  unsigned __int16 *v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rax
  __int128 v19; // xmm0
  int v20; // eax
  unsigned int Pid; // eax
  struct _HAM_ACTIVITY *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-90h]
  union _RM_SID *v26; // [rsp+78h] [rbp-88h]
  unsigned __int64 v27; // [rsp+80h] [rbp-80h]
  unsigned __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v29; // [rsp+90h] [rbp-70h]
  _OWORD v30[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[144]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v33[400]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int16 v34[232]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int16 v35[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v5 = a2;
  v29 = a4;
  memset_0(v33, 0, 0x188uLL);
  v7 = 0;
  v28 = 0LL;
  memset_0(v34, 0, sizeof(v34));
  memset_0(v30, 0, 0x44uLL);
  memset_0(v32, 0, 0x88uLL);
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v23 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v27 = -1LL;
  v10 = 0;
  v26 = 0LL;
  v25 = -1LL;
  if ( dword_1800E72B0 )
  {
    v7 = 1;
    memset_0(v34, 0, sizeof(v34));
  }
  HampExtendedExecutionFormatDescription((unsigned int)v5, a3, v35);
  if ( (v5 & 0x80000000) != 0LL || v5 >= 5 )
    v11 = L"BAD_INPUT";
  else
    v11 = (const unsigned __int16 *)(&EeResourcePolicyNames)[v5];
  HampActivityPropertiesInitialize(v35, v11, (struct _HAM_ACTIVITY_PROPERTIES *)v33);
  if ( (unsigned int)v5 > 4 )
  {
    v14 = -1073741584;
  }
  else
  {
    v12 = HampHostFindByClient(a1, 0, &v24, &v28);
    v9 = v24;
    v14 = v12;
    if ( v12 < 0 )
      goto LABEL_24;
    if ( *((_BYTE *)v24 + 592) )
    {
      v14 = -1073741811;
      goto LABEL_24;
    }
    if ( v7 )
    {
      v15 = 232LL;
      v13 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v24 + 24) - (struct _RM_HAM_ACTIVITY_HOST *)v34;
      v16 = v34;
      do
      {
        if ( v15 == -2147483414 )
          break;
        v17 = *(unsigned __int16 *)((char *)v16 + v13);
        if ( !v17 )
          break;
        *v16++ = v17;
        --v15;
      }
      while ( v15 );
      v18 = v16 - 1;
      if ( v15 )
        v18 = v16;
      *v18 = 0;
      v19 = *(_OWORD *)((char *)v9 + 488);
      v25 = *((_QWORD *)v9 - 4);
      v30[0] = v19;
      v30[1] = *(_OWORD *)((char *)v9 + 504);
      v30[2] = *(_OWORD *)((char *)v9 + 520);
      v30[3] = *(_OWORD *)((char *)v9 + 536);
      v31 = *((_DWORD *)v9 + 138);
      v26 = (union _RM_SID *)v30;
    }
    v10 = *((_DWORD *)v9 + 140);
    if ( v10 != 2 )
    {
      v14 = -1073741790;
      goto LABEL_24;
    }
    v14 = HampExtendedExecutionCheckPolicy(v33, *(_QWORD *)(a1 + 184), v13, (unsigned int)v5);
    if ( v14 < 0 )
      goto LABEL_24;
    v20 = HampActCreate(
            (struct _HAM_CLIENT_CONTEXT *)a1,
            (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 48LL * *(unsigned __int8 *)(a1 + 164)
                                            - 16),
            v9,
            (struct _HAM_ACTIVITY_PROPERTIES *)v33,
            0,
            0LL,
            &v23);
    v8 = v23;
    v14 = v20;
    if ( v20 >= 0 )
    {
      v14 = 0;
      v27 = *((_QWORD *)v23 + 5);
      *v29 = v27;
    }
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  LODWORD(v8) = 0;
LABEL_24:
  if ( v9 )
    RmHamHostDereference(v9);
  if ( v7 )
  {
    Pid = HampClientGetPid((struct _HAM_CLIENT_CONTEXT *)a1);
    HampSrvTraceActivityCreateStop(
      v14,
      v27,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v34,
      v10,
      v26,
      v25,
      (struct _HAM_ACTIVITY_PROPERTIES *)v33,
      Pid,
      (unsigned int)v8,
      (char)v8);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v14;
}
