/*
 * XREFs of DpiPdoDispatchPower @ 0x14004EDC0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x14004EF68 (DpiCorrectPowerAction.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiPdoSetDevicePower @ 0x1403A573C (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PVOID DeviceExtension; // rsi
  ULONG Options; // eax
  POWER_STATE v7; // ebx
  unsigned int v8; // eax
  NTSTATUS v9; // r14d
  NTSTATUS v10; // edi
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
      goto LABEL_13;
    v10 = 0;
    goto LABEL_12;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( Options != 1 )
  {
    v10 = 0;
    if ( Options )
      goto LABEL_13;
    *((POWER_STATE *)DeviceExtension + 70) = v7;
    goto LABEL_12;
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  if ( v7.SystemState > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, v7);
    v9 = DpiPdoSetDevicePower(
           DeviceObject,
           (unsigned int)v7.SystemState,
           CurrentStackLocation->Parameters.Create.EaLength);
  }
  else if ( v7.SystemState >= *((_DWORD *)DeviceExtension + 71) )
  {
    v9 = 0;
  }
  else
  {
    v8 = DpiCorrectPowerAction(
           DeviceObject,
           HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
           CurrentStackLocation->Parameters.Create.EaLength);
    v9 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v7.SystemState, v8);
    PoSetPowerState(DeviceObject, DevicePowerState, v7);
  }
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  v10 = v9;
  if ( v9 != -1073741637 )
LABEL_12:
    Irp->IoStatus.Status = v10;
LABEL_13:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
