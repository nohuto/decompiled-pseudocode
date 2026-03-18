/*
 * XREFs of imp_VfWdfIoQueueGetDevice @ 0x1400DF000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  return WdfVersion.Functions.pfnWdfIoQueueGetDevice(DriverGlobals, Queue);
}
