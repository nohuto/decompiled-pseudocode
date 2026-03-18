/*
 * XREFs of PnpReleasePowerRelationsQueueLock @ 0x1404B4A7C
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A87850 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A87A94 (PiValidatePowerRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 */

void PnpReleasePowerRelationsQueueLock()
{
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
