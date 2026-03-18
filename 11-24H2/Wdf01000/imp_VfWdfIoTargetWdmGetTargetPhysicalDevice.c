/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetPhysicalDevice @ 0x1400DFC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetPhysicalDevice(DriverGlobals, IoTarget);
}
