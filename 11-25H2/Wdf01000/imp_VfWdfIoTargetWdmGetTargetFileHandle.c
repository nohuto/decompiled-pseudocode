/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetFileHandle @ 0x1400DFC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetFileHandle(DriverGlobals, IoTarget);
}
