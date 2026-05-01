/*
 * XREFs of ?RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800532E0
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x1800225AC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180053150 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpActivityHostHasEmptiedWorkingSet(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int16 v3; // r9
  int v4; // ecx
  int v5; // eax
  int v6; // r8d

  v1 = *((_QWORD *)a1 + 6);
  v2 = *((_DWORD *)a1 + 317);
  v3 = *((_WORD *)a1 + 728);
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 504);
  if ( (v2 & 0x10) == 0 && (v3 & 0x200) == 0 )
  {
    v6 = 2 * (v5 & 1);
    if ( (v3 & 0x100) == 0 )
      v6 |= 2 * (v5 & 2);
    v4 = v6 | 2;
    if ( (v5 & 4) != 0 )
      v4 = v6;
  }
  return ((v4 | v2 & 0x27) & v2) == (v4 | v2 & 0x27);
}
