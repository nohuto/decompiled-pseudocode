/*
 * XREFs of UsbhFdoQueryDevicePowerDxPoCompletion @ 0x14004A310
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 */

void __fastcall UsbhFdoQueryDevicePowerDxPoCompletion(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *v7; // rdi
  __int64 Status; // rsi

  v7 = FdoExt(DeviceObject);
  Status = IoStatus->Status;
  Context->IoStatus.Status = Status;
  Log(DeviceObject, 16, 1902409795, Status, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Context, 1218);
  IofCompleteRequest(Context, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), Context, 0x20u);
}
