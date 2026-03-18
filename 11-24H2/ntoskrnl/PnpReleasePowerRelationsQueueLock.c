/*
 * XREFs of PnpReleasePowerRelationsQueueLock @ 0x1404B4398
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A8C850 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A8CA94 (PiValidatePowerRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 */

void PnpReleasePowerRelationsQueueLock()
{
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
