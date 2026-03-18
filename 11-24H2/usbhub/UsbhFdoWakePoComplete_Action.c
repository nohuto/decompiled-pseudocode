/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x14002E010
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x14002120C (GET_FDO_POWER_STATE.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x14002BFA0 (UsbhQueueWorkItemEx.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002F260 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _KEVENT *v6; // rdi
  _DWORD *v7; // rax
  __int64 v8; // rsi
  unsigned int Status; // r14d
  _DWORD *v10; // rax
  unsigned int v11; // eax

  v6 = (struct _KEVENT *)FdoExt(DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v7 = FdoExt(DeviceObject);
  v6[203].Header.WaitListHead.Blink = 0LL;
  HIDWORD(v6[203].Header.WaitListHead.Flink) = 1;
  v8 = (__int64)(v7 + 346);
  UsbhAcquireFdoPwrLock(DeviceObject, v7 + 346, 122LL, 829120887LL);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log(DeviceObject, 16, 1750548811, 0LL, 0LL);
    LODWORD(v6[106].Header.WaitListHead.Blink) |= 0x20000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v10 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(
                 DeviceObject,
                 1u,
                 (__int64)UsbhSShResumeWorker,
                 (__int64)(v10 + 478),
                 0,
                 0x77485353u,
                 0LL);
    }
  }
  KeSetEvent(v6 + 204, 0, 0);
  v11 = GET_FDO_POWER_STATE(v8);
  UsbhSetFdoPowerState(DeviceObject, Status, v11);
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
}
