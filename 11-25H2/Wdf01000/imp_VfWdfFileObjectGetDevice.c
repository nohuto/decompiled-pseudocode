/*
 * XREFs of imp_VfWdfFileObjectGetDevice @ 0x1400DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetDevice(DriverGlobals, FileObject);
}
