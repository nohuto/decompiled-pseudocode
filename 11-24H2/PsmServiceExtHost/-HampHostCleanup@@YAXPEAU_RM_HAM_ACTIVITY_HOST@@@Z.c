/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060E54
 * Callers:
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18000FCF0 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180021770 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?RmpSystemResourceTimerDelete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z @ 0x180066A08 (-RmpSystemResourceTimerDelete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAX@Z.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  void *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    NtClose(v2);
  v3 = (_QWORD *)*((_QWORD *)a1 + 133);
  if ( v3 )
    CemRcObjectDereference(v3);
  v4 = (void *)*((_QWORD *)a1 + 101);
  if ( v4 )
    RmpSystemResourceTimerDelete(a1, v4);
  v5 = *((_QWORD *)a1 + 105);
  if ( v5 )
    TpReleaseTimer(v5);
  if ( *((_QWORD *)a1 + 80) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 79) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 81) )
    TpReleaseWork();
  v6 = (_QWORD *)*((_QWORD *)a1 + 73);
  if ( v6 )
    CemRcObjectDereference(v6);
  v7 = (_QWORD *)*((_QWORD *)a1 + 99);
  if ( v7 )
    CemRcObjectDereference(v7);
}
