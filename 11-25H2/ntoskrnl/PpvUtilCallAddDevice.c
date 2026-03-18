/*
 * XREFs of PpvUtilCallAddDevice @ 0x1404A8D58
 * Callers:
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfDevObjPreAddDevice @ 0x140B99678 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140B996C4 (VfDevObjPostAddDevice.c)
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
