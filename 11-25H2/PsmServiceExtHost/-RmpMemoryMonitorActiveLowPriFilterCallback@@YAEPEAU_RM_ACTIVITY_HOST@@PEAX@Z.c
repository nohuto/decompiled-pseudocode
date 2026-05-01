/*
 * XREFs of ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18008EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A0E0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800576D0 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

bool __fastcall RmpMemoryMonitorActiveLowPriFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rcx

  return RmpActivityHostIsRunnable(a1, 1) && (unsigned int)RmpActivityHostIsRevocable(v2) != 0;
}
