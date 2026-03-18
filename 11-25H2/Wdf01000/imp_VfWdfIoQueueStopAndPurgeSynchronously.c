/*
 * XREFs of imp_VfWdfIoQueueStopAndPurgeSynchronously @ 0x1400DF4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoQueueStopAndPurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueueStopAndPurgeSynchronously(DriverGlobals, Queue);
}
