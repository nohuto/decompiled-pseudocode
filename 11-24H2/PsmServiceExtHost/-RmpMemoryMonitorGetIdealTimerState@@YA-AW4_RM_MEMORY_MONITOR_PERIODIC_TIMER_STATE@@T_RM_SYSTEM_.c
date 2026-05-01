/*
 * XREFs of ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x180055AB4
 * Callers:
 *     ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800559D0 (-RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorGetIdealTimerState(char a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  else
    return (unsigned int)((a1 & 2) != 0) + 1;
}
