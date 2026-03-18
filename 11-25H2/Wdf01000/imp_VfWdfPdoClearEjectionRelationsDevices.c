/*
 * XREFs of imp_VfWdfPdoClearEjectionRelationsDevices @ 0x1400DFFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoClearEjectionRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoClearEjectionRelationsDevices(DriverGlobals, Device);
}
