/*
 * XREFs of imp_VfWdfDeviceSetAlignmentRequirement @ 0x1400DE020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 AlignmentRequirement)
{
  WdfVersion.Functions.pfnWdfDeviceSetAlignmentRequirement(DriverGlobals, Device, AlignmentRequirement);
}
