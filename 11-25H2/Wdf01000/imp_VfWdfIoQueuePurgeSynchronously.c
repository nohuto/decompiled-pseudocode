/*
 * XREFs of imp_VfWdfIoQueuePurgeSynchronously @ 0x1400DF060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  WdfVersion.Functions.pfnWdfIoQueuePurgeSynchronously(DriverGlobals, Queue);
}
