/*
 * XREFs of ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053350
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x1800225AC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800530B4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180053150 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005F110 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18008EFC0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(struct _RM_ACTIVITY_HOST *a1)
{
  int v1; // edx
  __int64 v2; // r9
  __int16 v4; // r10
  int v5; // r8d
  int v6; // ecx

  v1 = *((_DWORD *)a1 + 317);
  v2 = *((_QWORD *)a1 + 6);
  if ( (*((_WORD *)a1 + 592) & 4) == 0 || (v1 & 0x100) == 0 )
    return 0;
  v4 = *((_WORD *)a1 + 728);
  v5 = 0;
  if ( (v1 & 0x10) == 0 && (v4 & 0x200) == 0 )
  {
    v6 = 2 * (*(_DWORD *)(v2 + 504) & 1);
    if ( (v4 & 0x100) == 0 )
      v6 |= 2 * (*(_DWORD *)(v2 + 504) & 2);
    if ( (*(_DWORD *)(v2 + 504) & 4) != 0 )
      v5 = v6;
    else
      v5 = v6 | 0x22;
  }
  return (v1 & (v5 | v1 & 0x27)) != (v5 | v1 & 0x27);
}
