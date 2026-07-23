/*
 * XREFs of IoGetActivityIdThread @ 0x140435520
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140712050 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopAdaptiveStandbyActionWorker @ 0x14075F2D0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x14075FAF4 (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407608DC (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407619D0 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 *     PnpInsertEventInQueue @ 0x1408B1240 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
