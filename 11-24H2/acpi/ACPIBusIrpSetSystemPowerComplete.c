/*
 * XREFs of ACPIBusIrpSetSystemPowerComplete @ 0x14004C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceIrpCompleteRequest @ 0x14001AC30 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  Context->IoStatus.Information = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, IoStatus->Status);
}
