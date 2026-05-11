/*
 * XREFs of SidebandDispatchIrp @ 0x1400063FC
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x14003A810 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SidebandDispatchIrp(PDEVICE_OBJECT FunctionalDeviceObject, PIRP Irp)
{
  PIRP v2; // r13
  char v4; // di
  char v5; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PKSDEVICE DeviceForDeviceObject; // rax
  int v8; // edx
  int v9; // r8d
  NTSTATUS v10; // ebx
  char *Context; // rbx
  struct _KMUTANT *v12; // r12
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r14
  int v16; // edx
  int v17; // r8d
  struct _IO_REMOVE_LOCK *v18; // r15
  NTSTATUS v19; // eax
  PDEVICE_OBJECT v20; // rcx
  int v22; // [rsp+98h] [rbp+10h]

  v2 = Irp;
  v22 = 0;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(Irp) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(Irp) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)Irp || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)Irp, v5, WPP_GLOBAL_Control->DeviceExtension);
  if ( v2->RequestorMode
    || (CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation, (CurrentStackLocation->Flags & 1) != 0) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(Irp) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(Irp) = 0;
    }
    if ( (_BYTE)Irp || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)Irp,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    v10 = -1073741790;
    goto LABEL_60;
  }
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(FunctionalDeviceObject);
  if ( DeviceForDeviceObject )
  {
    Context = (char *)DeviceForDeviceObject->Context;
    v12 = (struct _KMUTANT *)(Context + 760);
    KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
    v15 = *((_QWORD *)Context + 109);
    if ( v15 )
    {
      if ( CurrentStackLocation->MajorFunction == 2 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v15 + 72LL))(
                *((_QWORD *)Context + 109),
                FunctionalDeviceObject,
                v2);
        goto LABEL_24;
      }
      v18 = (struct _IO_REMOVE_LOCK *)(Context + 728);
      v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, File, 1u, 0x20u);
      if ( v10 >= 0 )
      {
        if ( CurrentStackLocation->MajorFunction )
        {
          if ( CurrentStackLocation->MajorFunction == 14 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v15 + 88LL))(
                    v15,
                    FunctionalDeviceObject,
                    v2);
          }
          else
          {
            if ( CurrentStackLocation->MajorFunction != 15 )
            {
              v10 = -1073741811;
LABEL_36:
              IoReleaseRemoveLockEx(v18, 0LL, 0x20u);
              goto LABEL_24;
            }
            v19 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v15 + 96LL))(
                    v15,
                    FunctionalDeviceObject,
                    v2);
          }
          v22 = 1;
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, PIRP))(*(_QWORD *)v15 + 80LL))(
                  v15,
                  FunctionalDeviceObject,
                  v2);
        }
        v10 = v19;
        goto LABEL_36;
      }
      v20 = WPP_GLOBAL_Control;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
    }
    else
    {
      v10 = -1073741437;
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_44:
        WPP_RECORDER_AND_TRACE_SF_d(v20->AttachedDevice, v13, v14, v20->DeviceExtension);
    }
LABEL_24:
    KeReleaseMutex(v12, 0);
    if ( v22 )
      goto LABEL_61;
    goto LABEL_60;
  }
  v10 = -1073741811;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v8, v9, WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_60:
  v2->IoStatus.Status = v10;
  IofCompleteRequest(v2, 0);
LABEL_61:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v16 || v4 )
  {
    LOBYTE(v17) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v16, v17, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v10;
}
