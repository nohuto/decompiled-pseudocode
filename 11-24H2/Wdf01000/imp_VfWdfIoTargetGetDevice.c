/*
 * XREFs of imp_VfWdfIoTargetGetDevice @ 0x1400DF940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetGetDevice(DriverGlobals, IoTarget);
}
