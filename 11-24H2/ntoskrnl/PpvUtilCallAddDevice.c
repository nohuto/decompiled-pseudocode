/*
 * XREFs of PpvUtilCallAddDevice @ 0x1404A9D40
 * Callers:
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfDevObjPreAddDevice @ 0x140BA964C (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140BA9698 (VfDevObjPostAddDevice.c)
 */

__int64 __fastcall PpvUtilCallAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx

  if ( !PpvUtilVerifierEnabled )
    return guard_dispatch_icall_no_overrides(DriverObject, TargetDevice, a3, a4);
  VfDevObjPreAddDevice(TargetDevice, DriverObject);
  v9 = guard_dispatch_icall_no_overrides(DriverObject, TargetDevice, v7, v8);
  VfDevObjPostAddDevice(TargetDevice, DriverObject, v9);
  return v9;
}
