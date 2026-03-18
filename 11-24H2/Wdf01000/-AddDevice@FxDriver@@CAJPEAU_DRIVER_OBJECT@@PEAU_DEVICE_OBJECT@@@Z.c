/*
 * XREFs of ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x14003E860
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x14003E9C0 (-GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003F868 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

int __fastcall FxDriver::AddDevice(_DRIVER_OBJECT *DriverObject, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  FxDriver *FxDriver; // rax

  FxDriver = FxDriver::GetFxDriver(DriverObject);
  if ( FxDriver )
    return FxDriver::AddDevice(FxDriver, PhysicalDeviceObject);
  else
    return -1073741823;
}
