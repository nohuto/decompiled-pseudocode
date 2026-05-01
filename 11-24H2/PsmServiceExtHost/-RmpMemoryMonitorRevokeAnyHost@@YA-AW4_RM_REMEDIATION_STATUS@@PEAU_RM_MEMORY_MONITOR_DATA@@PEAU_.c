/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006A9CC
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x1800203D0 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18000F374 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001FBE0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180021770 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005F020 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18006C4F0 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_QWORD *)a1;
  v13[1] = v13;
  v5 = 0;
  v14 = 0;
  v13[0] = v13;
  v13[2] = *(_QWORD *)(a1 + 32);
  RmpAcquireGlobalLock();
  *(_WORD *)(v4 + 204) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v4,
    0,
    (char **)(v4 + 160),
    0x43u,
    (unsigned __int8 (__fastcall *)(__int64, __int64))RmpPolicyFilterActivityHostWithFlags,
    0LL);
  if ( *(_DWORD *)(v4 + 196)
    && (RmpMemoryMonitorGenerateHostListAndRevoke(
          v4,
          v10,
          *(_QWORD *)(a3 + 24) - *(_QWORD *)(a2 + 24),
          3u,
          7u,
          (__int64)v13),
        *(_DWORD *)(v4 + 200)) )
  {
    if ( (_QWORD *)v13[0] != v13 )
    {
      RmpReleaseGlobalLock();
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                           (struct _RM_MEMORY_MONITOR_DATA *)a1,
                           28,
                           *(_DWORD *)(a1 + 72),
                           (enum _RM_MEMORY_MONITOR_EVENT *)&v14) )
      {
        if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            v11,
            byte_1800DA5AB);
        v5 = 1;
      }
      else if ( v14 == 2 )
      {
        v5 = 4;
      }
      RmpAcquireGlobalLock();
      RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v13);
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    RmpMemoryMonitorRebootIfAble((struct _RM_MEMORY_MONITOR_DATA *)a1, a4);
    return 2;
  }
  return v5;
}
