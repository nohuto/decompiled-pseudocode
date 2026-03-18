/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140B72908
 * Callers:
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B7DC88 (VfBeforeCallDriver.c)
 */

NTSTATUS __fastcall IovpCallDriverNoIrpTracking(PDEVICE_OBJECT DeviceObject, IRP *BugCheckParameter1)
{
  VfBeforeCallDriver(DeviceObject, BugCheckParameter1, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    return IopPerfCallDriver(DeviceObject, BugCheckParameter1);
  else
    return IopfCallDriver(DeviceObject, BugCheckParameter1);
}
