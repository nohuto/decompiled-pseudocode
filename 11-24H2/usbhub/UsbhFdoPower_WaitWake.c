/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x140017CC0
 * Callers:
 *     UsbhFdoPowerWorkerInternal @ 0x140033D08 (UsbhFdoPowerWorkerInternal.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  void *DeviceExtension; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  NTSTATUS v7; // eax
  unsigned int v8; // ebp
  void *v9; // rdx
  __int64 v10; // rcx
  int v12; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  int RemlockSize; // [rsp+20h] [rbp-38h]

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v5 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_DWORD *)v5 = 727144294;
        *(_QWORD *)(v5 + 24) = Irp;
      }
    }
  }
  v6 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogHubIrpEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH, 0, 0);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), Irp, File, 1u, 0x20u);
  v8 = v7;
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v7;
    if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1918326630;
        *(_QWORD *)(v10 + 16) = v7;
        *(_QWORD *)(v10 + 24) = Irp;
      }
    }
    UsbhEtwLogHubIrpEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v7);
    IofCompleteRequest(Irp, 0);
    return v8;
  }
  else
  {
    *((_QWORD *)v6 + 611) = Irp;
    if ( _InterlockedCompareExchange(v6 + 1221, 4, 2) == 3 )
    {
      v6[1221] = 7;
      Log((_DWORD)DeviceObject, 16, 1716999985, 0, (__int64)Irp);
      UsbhEtwLogHubIrpEvent(
        DeviceObject,
        Irp,
        0LL,
        &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE,
        v12 & RemlockSize,
        -1073741536);
      Irp->IoStatus.Status = -1073741536;
      IofCompleteRequest(Irp, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), Irp, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoWaitWake_IoCompletion, 0LL, 1u, 1u, 1u) < 0 )
      {
        v14 = Irp->Tail.Overlay.CurrentStackLocation;
        v14[-1].Context = 0LL;
        v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v14[-1].Control = -32;
      }
      Log((_DWORD)DeviceObject, 16, 1716999986, 0, (__int64)Irp);
      v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 151);
      v6[640] &= ~0x20000u;
      PoCallDriver(v15, Irp);
      return 259LL;
    }
  }
}
