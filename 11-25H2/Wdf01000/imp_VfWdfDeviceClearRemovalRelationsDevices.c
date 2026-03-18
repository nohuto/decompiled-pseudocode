/*
 * XREFs of imp_VfWdfDeviceClearRemovalRelationsDevices @ 0x1400DD7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceClearRemovalRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceClearRemovalRelationsDevices(DriverGlobals, Device);
}
