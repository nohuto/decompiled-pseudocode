/*
 * XREFs of TpSetPoolStackInformation @ 0x1800E9300
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800E9190 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl TpSetPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  if ( Pool && PoolStackInformation )
    return NtSetInformationWorkerFactory(
             Pool->WorkerFactory,
             WorkerFactoryStackInformation,
             PoolStackInformation,
             0x10u);
  else
    return -1073741811;
}
