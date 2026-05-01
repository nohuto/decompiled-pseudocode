/*
 * XREFs of ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x1800217F0
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F888 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006AB4C (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008DA84 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008EC7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012EE4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180022950 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027700 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060ED4 (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180063A3C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int16 __fastcall RmpPolicyPopulateActivityHostMetrics(
        __int64 a1,
        unsigned int a2,
        char **a3,
        unsigned __int16 a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64),
        __int64 a6)
{
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // r12
  __int16 result; // ax
  void *v11; // rcx
  __int64 v12; // r13
  __int64 *i; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rbx
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  __int64 *v19; // rbx
  char *v20; // rax
  unsigned __int64 v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rax
  int v24; // ecx
  int v25; // ecx
  void *v26; // rcx
  int v27; // ecx
  HANDLE *v28; // rcx
  __int64 *v29; // [rsp+30h] [rbp-48h]
  __int64 *v30; // [rsp+38h] [rbp-40h]
  unsigned int v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  v6 = *((_WORD *)a3 + 22);
  v7 = a4;
  result = a4 & v6;
  if ( (a4 & v6) != a4 )
  {
    if ( !v6 )
    {
      v11 = *a3;
      *((_DWORD *)a3 + 9) = 0;
      memset_0(v11, 0, (unsigned __int64)*((unsigned int *)a3 + 8) << 6);
      v12 = *(_QWORD *)(a1 + 24) + 16LL;
      RtlAcquireSRWLockShared(*(_QWORD *)(a1 + 24) + 32LL);
      i = *(__int64 **)(v12 + 8);
      v14 = i;
      v30 = i;
      if ( !i )
        goto LABEL_7;
      if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        i = *(__int64 **)(v12 + 8);
      v15 = *v14;
      if ( (v15 & 1) != 0 )
      {
LABEL_7:
        for ( ++i; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v12 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v12 + 4) >> 5) )
            goto LABEL_37;
          if ( (*(_BYTE *)i & 1) == 0 )
            break;
        }
        _mm_lfence();
        v15 = *i;
        v30 = i;
      }
      v29 = (__int64 *)v15;
      if ( v15 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 16)) <= 1 )
          __fastfail(0xEu);
        while ( 1 )
        {
          if ( *(_QWORD *)(v15 + 56) != a1 )
          {
            RmpObjectRelease((PVOID)v15);
            goto LABEL_17;
          }
          if ( !a5 || a5(v15, a6) )
          {
            v20 = *a3;
            v21 = (unsigned __int64)*((unsigned int *)a3 + 9) << 6;
            *(_QWORD *)&v20[v21] = 0LL;
            *(_QWORD *)&v20[v21 + 8] = 0LL;
            *(_QWORD *)&v20[v21 + 16] = 0LL;
            *(_QWORD *)&v20[v21 + 24] = 0LL;
            *(_QWORD *)&v20[v21 + 32] = 0LL;
            *(_QWORD *)&v20[v21 + 40] = 0LL;
            *(_QWORD *)&v20[v21 + 56] = 0LL;
            *(_QWORD *)&v20[v21 + 48] = v15;
            ++*((_DWORD *)a3 + 9);
            v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16), 0xFFFFFFFFFFFFFFFFuLL);
            v17 = v22 <= 1;
            v23 = v22 - 1;
            if ( v17 )
            {
              if ( v23 )
                goto LABEL_43;
              v24 = *(_DWORD *)(v15 + 40);
              if ( v24 == 3 )
                goto LABEL_48;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( !v25 )
                {
                  v26 = *(void **)(v15 + 56);
                  if ( v26 )
                    goto LABEL_35;
                  goto LABEL_48;
                }
LABEL_54:
                if ( v25 == 1 && !*(_DWORD *)(v15 + 96) && !*(_DWORD *)(v15 + 100) )
                  NtDeleteWnfStateName(v15 + 96, i);
                goto LABEL_48;
              }
LABEL_50:
              RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(v15 + 1320));
              v28 = *(HANDLE **)(v15 + 56);
              if ( v28 )
                RmpPartitionRelease(v28);
              HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(v15 + 64));
              goto LABEL_48;
            }
          }
          else
          {
            v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16), 0xFFFFFFFFFFFFFFFFuLL);
            v17 = v16 <= 1;
            v18 = v16 - 1;
            if ( v17 )
            {
              if ( v18 )
LABEL_43:
                __fastfail(0xEu);
              v27 = *(_DWORD *)(v15 + 40);
              if ( v27 == 3 )
                goto LABEL_48;
              if ( v27 )
              {
                v25 = v27 - 1;
                if ( !v25 )
                {
                  v26 = *(void **)(v15 + 56);
                  if ( v26 )
LABEL_35:
                    NtClose(v26);
LABEL_48:
                  HampFreeHeap((void *)v15);
                  goto LABEL_17;
                }
                goto LABEL_54;
              }
              goto LABEL_50;
            }
          }
LABEL_17:
          v19 = v29;
          if ( !v29 )
            goto LABEL_21;
          if ( (*v29 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            v19 = v29;
          v15 = *v19;
          if ( (v15 & 1) != 0 )
          {
LABEL_21:
            for ( i = v30 + 1; ; ++i )
            {
              if ( (unsigned __int64)i >= *(_QWORD *)(v12 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v12 + 4) >> 5) )
                goto LABEL_36;
              v15 = *i;
              if ( (*i & 1) == 0 )
                break;
            }
            v30 = i;
          }
          v29 = (__int64 *)v15;
          if ( !v15 )
          {
LABEL_36:
            v7 = a4;
            break;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 16)) <= 1 )
            __fastfail(0xEu);
        }
      }
LABEL_37:
      result = RtlReleaseSRWLockShared(v12 + 16);
      a2 = v31;
    }
    if ( *((_DWORD *)a3 + 9) )
      return RmpActivityHostPopulateMetrics(a3, v7, a2);
  }
  return result;
}
