/*
 * XREFs of ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180055AD0
 * Callers:
 *     ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800559D0 (-RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorSetTimer(__int64 *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 24) + 3528LL) & 1) == 0 )
  {
    v4 = a1[8];
    v5 = 1000LL;
    if ( a2 == 1 )
      v5 = 0xFFFFFFFFLL;
    v6 = -50000000LL;
    if ( a3 )
      v6 = -10000000LL;
    v7 = v6;
    return TpSetTimer(v4, &v7, 0LL, v5);
  }
  return result;
}
