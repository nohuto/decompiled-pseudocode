/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x18000F808
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x1800203D0 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18000F374 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FA28 (-RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800100E0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FBE0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180020F30 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180021770 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005F020 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  int HostListAndRevoke; // ebx
  unsigned int v15; // ebx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-40h]
  int v24; // [rsp+160h] [rbp+60h] BYREF
  __int64 v25; // [rsp+168h] [rbp+68h]

  v2 = *a1;
  v18[1] = v18;
  v24 = 0;
  v18[0] = v18;
  v18[2] = a1[4];
  v25 = v2;
  RmpAcquireGlobalLock();
  v5 = *(_QWORD *)(*a1 + 24LL);
  memset_0(v22, 0, 0x80uLL);
  memset_0(v19, 0, 0x50uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v19);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v19,
    v19[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)v22);
  v6 = v2 + 160;
  v23 = v21;
  *(_WORD *)(v2 + 204) = 0;
  RmpPolicyPopulateActivityHostMetrics(v2, 0LL, v2 + 160, 67LL, RmpPolicyFilterActivityHostWithFlags, 0LL);
  v8 = *(_DWORD *)(v2 + 196);
  v9 = 0;
  v10 = v23;
  if ( v8 )
  {
    do
    {
      v11 = (__int64 *)(*(_QWORD *)v6 + ((unsigned __int64)v9 << 6));
      v12 = v11[6];
      if ( RmpActivityHostIsKillable((struct _RM_ACTIVITY_HOST *)v12) && (*(_BYTE *)(v12 + 1184) & 0x40) != 0 )
        v13 = *v11;
      else
        v13 = v11[5];
      v10 += v13;
      ++v9;
      v8 = *(_DWORD *)(v6 + 36);
    }
    while ( v9 < v8 );
    v2 = v25;
  }
  if ( v20 - v10 < a2 )
  {
    v15 = 3;
LABEL_24:
    RmpReleaseGlobalLock();
    return v15;
  }
  if ( !v8 )
  {
    v15 = 2;
    goto LABEL_24;
  }
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(v2, v7, v20 - v10 - a2, 1u, 5u, (__int64)v18);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( RmpMemoryMonitorWaitForEvents(
           (struct _RM_MEMORY_MONITOR_DATA *)a1,
           0xDu,
           *((_DWORD *)a1 + 18),
           (enum _RM_MEMORY_MONITOR_EVENT *)&v24) )
    {
      if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v17,
          byte_1800DA5DE);
      v15 = 1;
    }
    else if ( v24 == 2 )
    {
      v15 = 4;
    }
    else
    {
      v15 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v18);
    goto LABEL_24;
  }
  return 2;
}
