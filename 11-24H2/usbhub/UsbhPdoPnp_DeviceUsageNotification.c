/*
 * XREFs of UsbhPdoPnp_DeviceUsageNotification @ 0x14005C7A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhPdo_IsDeviceExternal @ 0x140077A94 (UsbhPdo_IsDeviceExternal.c)
 *     UsbhUpdateSqmFlags @ 0x140077C90 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v6; // rbx
  int Options; // r14d
  NTSTATUS Status; // edi
  struct _DEVICE_OBJECT *v9; // rcx
  PIRP v10; // rax
  IRP *v11; // r13
  _IO_STACK_LOCATION *v12; // rax
  _IO_STACK_LOCATION *v13; // rcx
  unsigned int Flags; // eax
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // r14
  int v18; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[5]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int8 Lock; // [rsp+B8h] [rbp+48h]
  char IsDeviceExternal; // [rsp+C0h] [rbp+50h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+58h]

  v4 = PdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = v4;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options <= 0 || Options > 4 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v6 + 148), Irp);
      goto LABEL_38;
    }
LABEL_8:
    v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 148);
    memset(&Event, 0, sizeof(Event));
    DeviceObjecta = IoGetAttachedDevice(v9);
    v10 = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v11 = v10;
    if ( v10 )
    {
      v10->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v12 = v11->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v12[-1].Context = &Event;
      v12[-1].Control = -32;
      v13 = v11->Tail.Overlay.CurrentStackLocation;
      v13[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v13[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v13[-1].FileObject = CurrentStackLocation->FileObject;
      v13[-1].Parameters.SetLock.Lock = Lock;
      v13[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(DeviceObjecta, v11) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v11->IoStatus.Status;
      IoFreeIrp(v11);
      if ( Status >= 0 )
      {
        if ( (unsigned int)(Options - 1) <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v6 + 684);
          else
            _InterlockedDecrement(v6 + 684);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v6 + 700);
            else
              _InterlockedDecrement(v6 + 700);
          }
          Flags = DeviceObject->Flags;
          if ( v6[684] )
            v15 = Flags & 0xFFFFDFFF;
          else
            v15 = Flags | 0x2000;
          DeviceObject->Flags = v15;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_28;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_36;
LABEL_28:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v6 + 2740) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v21[1] = DeviceObject->DriverObject;
        v21[0] = 1LL;
        v21[3] = ExIsBootDeviceReady;
        v21[4] = UsbhPdoCheckBootDeviceReady;
        v21[2] = DeviceObject;
        v16 = ExRegisterBootDevice(v21, v6 + 688);
        v17 = v16;
        if ( v16 < 0 && !KdRefreshDebuggerNotPresent() )
        {
          DbgPrint("ExRegisterBootDevice failed with 0x%x\n", v17);
          __debugbreak();
        }
        Log(*((_QWORD *)v6 + 148), 256, 1431454276, v17, (__int64)DeviceObject);
      }
      *((_BYTE *)v6 + 2740) = 1;
    }
    goto LABEL_36;
  }
  if ( *((_BYTE *)v6 + 2740) )
    goto LABEL_8;
  Status = -1073741637;
LABEL_36:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_38:
  if ( v6[684] )
  {
    v18 = v6[701];
    if ( (v18 & 0x10) == 0 )
    {
      v6[701] = v18 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      Status);
  return (unsigned int)Status;
}
