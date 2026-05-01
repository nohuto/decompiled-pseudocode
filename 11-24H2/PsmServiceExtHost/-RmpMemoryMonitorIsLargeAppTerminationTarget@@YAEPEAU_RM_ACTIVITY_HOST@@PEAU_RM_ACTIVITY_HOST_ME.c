/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180029FFC
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180021B40 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A060 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

unsigned __int8 __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  int v5; // ecx

  if ( !RmpActivityHostIsRevocable(a1) )
    return 0;
  if ( !a2 )
    return 1;
  if ( (*((_BYTE *)a2 + 62) & 1) != 0 )
  {
    v5 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 516LL);
    if ( *((_DWORD *)a2 + 14) <= v5 && *((_DWORD *)a2 + 14) != v5 )
      return 0;
  }
  if ( (*((_BYTE *)a2 + 62) & 0x10) == 0 )
    return 0;
  return *((_BYTE *)a2 + 60) & 1;
}
