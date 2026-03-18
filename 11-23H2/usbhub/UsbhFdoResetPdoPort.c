/*
 * XREFs of UsbhFdoResetPdoPort @ 0x1C0030944
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0001380 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0007830 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C001AB8C (UsbhAcquireFdoPwrLock.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0030310 (Usbh__TestPoint__Ulong.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  KIRQL CurrentIrql; // al
  int v14; // edx
  __int64 v15; // rcx
  bool v16; // zf
  KIRQL v17; // dl
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v21; // [rsp+98h] [rbp+20h]

  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = PdoExt(BugCheckParameter3);
  v7 = (__int64)(v6 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (KSPIN_LOCK)(v6 + 236), 134, 1936028228);
  if ( PdoExt(BugCheckParameter3)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock(DeviceObject, v7, v8, v9);
    CurrentIrql = KeGetCurrentIrql();
    v14 = *((unsigned __int16 *)v6 + 714);
    if ( CurrentIrql )
    {
      v10 = -1073741811;
      UsbhException((int)DeviceObject, v14, 68, 0, 0, -1073741811, -1, usbfile_dioctl_c, 769, 0);
    }
    else
    {
      v10 = -1073741810;
      v21 = UsbhLatchPdo((__int64)DeviceObject, v14, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 714), v21);
      if ( !v21 )
        goto LABEL_26;
      if ( BugCheckParameter3 == v21 )
      {
        UsbhAcquirePdoStateLock(v15, v7, 13LL);
        v16 = PdoExt(BugCheckParameter3)[281] == 3;
        v6[270] = 0;
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        v6[258] = 1734964085;
        v17 = *((_BYTE *)v6 + 1076);
        if ( v16 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
          Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 714));
          v18 = UsbhSyncResetDeviceInternal(DeviceObject, v7, BugCheckParameter3);
          v10 = v18;
          v19 = v6[597] + 1;
          v6[596] = 1;
          v6[597] = v19;
          if ( v19 > 0xA )
          {
            UsbhException(
              (int)DeviceObject,
              *((unsigned __int16 *)v6 + 714),
              76,
              0,
              0,
              v18,
              -1,
              usbfile_dioctl_c,
              803,
              0);
            v6[597] = 0;
          }
          if ( v10 >= 0 )
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v10, *((unsigned __int16 *)v6 + 714));
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
        }
      }
      UsbhUnlatchPdo((__int64)DeviceObject, v21, (__int64)BugCheckParameter4, 0x64545352u);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
LABEL_26:
        if ( !Usb_Disconnected(v10) )
          UsbhException((int)DeviceObject, *((unsigned __int16 *)v6 + 714), 77, 0, 0, v10, -1, usbfile_dioctl_c, 828, 0);
      }
    }
  }
  else
  {
    v10 = -1073741101;
    UsbhException(
      (int)DeviceObject,
      *((unsigned __int16 *)v6 + 714),
      69,
      0,
      0,
      -1073741101,
      -1,
      usbfile_dioctl_c,
      749,
      0);
    UsbhReleaseFdoPwrLock(DeviceObject, v7, v11, v12);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE);
  if ( *((_BYTE *)v6 + 2740) && v10 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_6755297163953fe01245bafdfc38d5a5_Traceguids);
    UsbhException((int)DeviceObject, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, 1);
    *((_QWORD *)v6 + 348) = BugCheckParameter4;
    v10 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v10;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v10;
}
