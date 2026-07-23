/*
 * XREFs of PpvUtilCallAddDevice @ 0x1404A4010
 * Callers:
 *     PnpCallAddDevice @ 0x1409B9504 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfDevObjPreAddDevice @ 0x140BAB64C (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140BAB698 (VfDevObjPostAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  unsigned int v5; // ebx

  if ( !PpvUtilVerifierEnabled )
    return guard_dispatch_icall_no_overrides(DriverObject, TargetDevice);
  VfDevObjPreAddDevice(TargetDevice, DriverObject);
  v5 = guard_dispatch_icall_no_overrides(DriverObject, TargetDevice);
  VfDevObjPostAddDevice(TargetDevice, DriverObject, v5);
  return v5;
}
