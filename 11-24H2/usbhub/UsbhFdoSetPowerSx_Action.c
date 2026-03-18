/*
 * XREFs of UsbhFdoSetPowerSx_Action @ 0x14004A7E8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     UsbhSshEnterSx @ 0x14005E5B0 (UsbhSshEnterSx.c)
 */

__int64 __fastcall UsbhFdoSetPowerSx_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int LowPart; // ebx
  PDEVICE_OBJECT *v7; // rax
  __int64 v8; // rdi
  PDEVICE_OBJECT *v9; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  v8 = Context[9];
  v9 = v7;
  Log((__int64)DeviceObject, 16, 1349283703, 0LL, (__int64)Irp);
  UsbhSetFdoPowerState((__int64)DeviceObject, LowPart, 202, 103);
  UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
  UsbhSshEnterSx(DeviceObject, v8);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoSxIoComplete_Action, Context, 1u, 1u, 1u) < 0 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoSxIoComplete_Action;
    v11[-1].Context = Context;
    v11[-1].Control = -32;
  }
  PoCallDriver(v9[151], Irp);
  Log((__int64)DeviceObject, 16, 1886156606, 0LL, 0LL);
  return 259LL;
}
