/*
 * XREFs of PnpAcquirePowerRelationsQueueLock @ 0x1404AEDD8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A8CA94 (PiValidatePowerRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

void PnpAcquirePowerRelationsQueueLock()
{
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
