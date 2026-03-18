/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x14004A940
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002F260 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1400302AC (UsbhEtwLogHubPowerEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhCanSuspend @ 0x1400495C4 (UsbhCanSuspend.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v7; // rax
  int LowPart; // ebp
  _DWORD *v9; // r15
  KSPIN_LOCK v10; // r12
  bool CanSuspend; // al
  unsigned int v12; // ebx
  int v13; // r13d
  NTSTATUS v14; // eax
  int v15; // ebp
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  PVOID Contextb; // [rsp+20h] [rbp-38h]
  PIRP *Irpa; // [rsp+28h] [rbp-30h]
  PIRP *Irpb; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = FdoExt((__int64)DeviceObject);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v9 = v7;
  if ( LowPart != ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  Log((__int64)DeviceObject, 16, 1937262915, (__int64)Context, (__int64)Irp);
  v10 = Context[9];
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, v10, 112, 829977449);
  v9[1054] = 0;
  CanSuspend = UsbhCanSuspend((__int64)DeviceObject, LowPart);
  v12 = 4 - CanSuspend;
  v9[1054] = CanSuspend;
  if ( LowPart > 4 && CanSuspend )
    v9[1054] = 2;
  UsbhSetFdoPowerState((__int64)DeviceObject, 0, 203, 112);
  *((_DWORD *)Context + 22) = v9[1054];
  *((_DWORD *)Context + 7) = v12;
  v13 = FdoExt((__int64)DeviceObject)[1053];
  FdoExt((__int64)DeviceObject)[1053] = LowPart;
  UsbhReleaseFdoPwrLock((__int64)DeviceObject, v10);
  Log((__int64)DeviceObject, 16, 1937265233, v12, (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      LowPart);
  LODWORD(Irpa) = 0;
  LODWORD(Contexta) = v12;
  UsbhEtwLogHubPowerEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START,
    Contexta,
    Irpa);
  v14 = PoRequestPowerIrp(
          DeviceObject,
          2u,
          (POWER_STATE)v12,
          (PREQUEST_POWER_COMPLETE)UsbhFdoDxPoComplete_Action,
          Context,
          0LL);
  v15 = v14;
  if ( v14 == 259 )
    return 3221225494LL;
  Log((__int64)DeviceObject, 16, 1937261906, v14, (__int64)Irp);
  Irp->IoStatus.Status = v15;
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, v10, 117, 846754665);
  FdoExt((__int64)DeviceObject)[1053] = v13;
  UsbhFdoPower_PowerFailureEntry((__int64)DeviceObject, 117, v15, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2526);
  LODWORD(Irpb) = v15;
  LODWORD(Contextb) = v12;
  UsbhEtwLogHubPowerEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    Contextb,
    Irpb);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 306), Irp, 0x20u);
  return 0LL;
}
