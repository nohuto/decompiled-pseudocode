/*
 * XREFs of PnpAcquirePowerRelationsQueueLock @ 0x1404ADEB8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A87850 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A87A94 (PiValidatePowerRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 */

void PnpAcquirePowerRelationsQueueLock()
{
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
