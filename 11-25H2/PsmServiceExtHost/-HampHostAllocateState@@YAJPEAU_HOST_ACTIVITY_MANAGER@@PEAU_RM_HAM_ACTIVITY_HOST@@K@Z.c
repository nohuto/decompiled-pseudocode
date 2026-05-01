/*
 * XREFs of ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180041778
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DA1C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180040630 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041F7C (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043110 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043168 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800915B0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostAllocateState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        __int64 a3)
{
  void *v3; // rsi
  unsigned __int64 v4; // r14
  struct _HOST_ACTIVITY_MANAGER *v6; // r9
  char *v7; // rax
  struct _HAM_HOSTID_STORE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebx
  void *v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]
  unsigned int v21; // [rsp+90h] [rbp+50h] BYREF
  void *v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = (unsigned __int64)a2 - 64;
  v6 = a1;
  if ( (a3 & 1) != 0 )
    goto LABEL_5;
  v7 = (char *)a2 - 32;
  v8 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800);
  v9 = 32LL;
  if ( a2 )
    v9 = (__int64)v7;
  v19 = 0LL;
  v18 = *(_QWORD *)v9;
  v21 = *(_DWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x26C);
  HampHostIdStoreAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800));
  HampHostIdStoreEnumerateMatchingEntries(
    v8,
    &v21,
    (union _RM_SID *)((v4 & -(__int64)(a2 != 0LL)) + 552),
    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 + 24),
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreReferenceHostIdCallback,
    &v18);
  HampHostIdStoreReleaseLockShared(v8);
  v10 = v19;
  *((_QWORD *)a2 + 73) = v19;
  if ( v10 )
  {
LABEL_5:
    v22 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, struct _HOST_ACTIVITY_MANAGER *))(*(_QWORD *)(*(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x30) + 40LL)
                                                                                               + 112LL))(
            *(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x4C8),
            &v22,
            a3,
            v6);
    if ( v11 < 0 )
    {
      v12 = v22;
    }
    else
    {
      v12 = 0LL;
      *((_QWORD *)a2 + 72) = v22;
      v11 = 0;
      v22 = 0LL;
    }
    if ( v12 )
      NtClose(v12);
    if ( v11 >= 0 )
    {
      v11 = TpAllocWork(
              (char *)a2 + 640,
              RmHamHostStateWorker,
              v4,
              (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + 120)
                         + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
            + 584);
      if ( v11 >= 0 )
      {
        v11 = TpAllocWork(
                (char *)a2 + 632,
                HampHostTerminateWorker,
                a2,
                (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                       + 120)
                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
              + 584);
        if ( v11 >= 0 )
        {
          if ( *((_BYTE *)a2 + 592) != 1
            || (v11 = TpAllocWork(
                        (char *)a2 + 648,
                        HampHostPlmServiceDesktopBridgeHost,
                        a2,
                        (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                               + 120)
                                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                      + 584),
                v11 >= 0) )
          {
            v13 = 1224LL;
            if ( a2 )
              v13 = (__int64)a2 + 1160;
            v14 = 48LL;
            if ( a2 )
              v14 = (__int64)a2 - 16;
            v11 = (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*(_QWORD *)v14 + 40LL) + 168LL))(
                    *(_QWORD *)v13,
                    HampHostQuiesceTimerCallback,
                    a2,
                    (char *)a2 + 808);
            if ( v11 >= 0 )
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(void *, struct _RM_HAM_ACTIVITY_HOST *), struct _RM_HAM_ACTIVITY_HOST *, char *))(*(_QWORD *)(*(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x30) + 40LL) + 168LL))(
                      *(_QWORD *)((v4 & -(__int64)(a2 != 0LL)) + 0x4C8),
                      HampHostDelayedEnforcementTimerCallback,
                      a2,
                      (char *)a2 + 1008);
              if ( v11 >= 0 )
              {
                if ( *(_DWORD *)(v4 + 624) != 2 )
                  goto LABEL_20;
                v16 = *(_QWORD *)v14;
                v22 = 0LL;
                v11 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v16 + 40) + 112LL))(*(_QWORD *)v13, &v22);
                if ( v11 < 0 )
                {
                  v17 = v22;
                }
                else
                {
                  v3 = v22;
                  v17 = 0LL;
                  v22 = 0LL;
                  v11 = 0;
                }
                if ( v17 )
                  NtClose(v17);
                if ( v11 >= 0 )
                {
                  v11 = HampWakeContextFindOrCreate(
                          (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 688),
                          *(_QWORD *)(v4 + 32),
                          v3,
                          (struct _CEM_RC_OBJECT **)a2 + 133);
                  if ( v11 >= 0 )
LABEL_20:
                    v11 = 0;
                }
                if ( v3 )
                  NtClose(v3);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return (unsigned int)-1058275322;
  }
  return (unsigned int)v11;
}
