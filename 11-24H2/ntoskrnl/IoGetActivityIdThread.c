/*
 * XREFs of IoGetActivityIdThread @ 0x14043F3F0
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407602D0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407604EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x140760948 (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x140760D48 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x140761570 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x140762088 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407622D0 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
