/*
 * XREFs of ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180057650
 * Callers:
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008F0B0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpActivityHostIsRunnable(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  return (*((_BYTE *)a1 + 1184) & 4) == 0 || !a2;
}
