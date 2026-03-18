/*
 * XREFs of UsbhFdoPowerWorkerInternal @ 0x140033D08
 * Callers:
 *     UsbhFdoPower @ 0x140033C90 (UsbhFdoPower.c)
 *     UsbhFdoPowerWorker @ 0x14004A0E0 (UsbhFdoPowerWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoPower_WaitWake @ 0x140017CC0 (UsbhFdoPower_WaitWake.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _DWORD *v6; // r11
  char QuadPart; // r10
  int MinorFunction; // ebp
  __int64 v9; // rax
  void *DeviceExtension; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  PDEVICE_OBJECT *v14; // rax

  v4 = FdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (_BYTE)MinorFunction )
  {
    if ( (unsigned int)CurrentStackLocation->MinorFunction - 2 <= 1 )
    {
      QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
      if ( CurrentStackLocation->Parameters.Create.Options != 1 )
        QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v9 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 321, 1u) + 1) & 0xF;
  *((_BYTE *)v6 + v9 + 1288) = MinorFunction;
  *((_BYTE *)v6 + v9 + 1304) = QuadPart;
  v6[4] = MinorFunction;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v11 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_DWORD *)v11 = 1349477478;
        *(_QWORD *)(v11 + 24) = Irp;
      }
    }
  }
  v12 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v12 < 4u )
    return funcs_140033DE1[2 * v12](DeviceObject, Irp);
  v14 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v14[151], Irp);
}
