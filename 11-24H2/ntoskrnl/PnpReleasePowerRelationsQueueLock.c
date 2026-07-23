/*
 * XREFs of PnpReleasePowerRelationsQueueLock @ 0x1404AEBE4
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A88FC4 (PiValidatePowerRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 */

void PnpReleasePowerRelationsQueueLock()
{
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
