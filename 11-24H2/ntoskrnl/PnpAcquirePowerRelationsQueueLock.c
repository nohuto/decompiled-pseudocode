/*
 * XREFs of PnpAcquirePowerRelationsQueueLock @ 0x1404A97B0
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A88FC4 (PiValidatePowerRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 */

void PnpAcquirePowerRelationsQueueLock()
{
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
