/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x14004A160
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoQuerySystemPowerState @ 0x14004A3B4 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhStartThisPowerIrp_Fdo @ 0x14004ABC8 (UsbhStartThisPowerIrp_Fdo.c)
 */

NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v5; // rbp
  unsigned int Options; // ecx
  struct _DEVICE_OBJECT *v7; // rcx
  _DWORD *v8; // rbx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt((__int64)DeviceObject);
  UsbhStartThisPowerIrp_Fdo(DeviceObject, Irp, 1161LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
  {
    v8 = FdoExt((__int64)DeviceObject);
    Log((__int64)DeviceObject, 16, 1365536883, 0LL, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1386);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 151);
  }
  else
  {
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1172);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 151);
  }
  return PoCallDriver(v7, Irp);
}
