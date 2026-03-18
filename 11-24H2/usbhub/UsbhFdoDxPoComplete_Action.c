/*
 * XREFs of UsbhFdoDxPoComplete_Action @ 0x140049F50
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002F260 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1400302AC (UsbhEtwLogHubPowerEvent.c)
 *     UsbhReleasePowerContext @ 0x140039070 (UsbhReleasePowerContext.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFdoDxPoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // r15
  __int64 v8; // rdi
  _DWORD *v10; // r13
  int v11; // r10d
  KSPIN_LOCK v12; // rdi
  int Status; // esi
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  v5 = (IRP *)Context[7];
  v8 = MinorFunction;
  v10 = FdoExt(DeviceObject);
  Log(DeviceObject, 16, 1685606467, (__int64)Context, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v11 - 15,
      v11,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      PowerState.SystemState);
  v12 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v12, 108, 1869641828);
  Status = IoStatus->Status;
  v5->IoStatus.Status = IoStatus->Status;
  *((_BYTE *)v10 + 4184) = 1;
  FdoExt(DeviceObject)[1052] = PowerState.SystemState;
  UsbhSetFdoPowerState(DeviceObject, 0, 205, 108);
  UsbhReleaseFdoPwrLock(DeviceObject, v12);
  LODWORD(v15) = Status;
  LODWORD(v14) = PowerState;
  UsbhEtwLogHubPowerEvent(DeviceObject, (__int64)v5, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE, v14, v15);
  UsbhReleasePowerContext(DeviceObject, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v5, 1913);
  IofCompleteRequest(v5, 0);
  *((_QWORD *)v10 + 635) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 306), v5, 0x20u);
}
