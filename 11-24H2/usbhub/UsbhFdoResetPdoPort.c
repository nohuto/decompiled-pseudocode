/*
 * XREFs of UsbhFdoResetPdoPort @ 0x14003FC5C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14001C918 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     Usbh__TestPoint__Ulong @ 0x1400279A4 (Usbh__TestPoint__Ulong.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002F260 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  __int64 v7; // r15
  int v8; // ebx
  KIRQL CurrentIrql; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  KIRQL v13; // dl
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // [rsp+98h] [rbp+20h]

  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = PdoExt(BugCheckParameter3);
  v7 = (__int64)(v6 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START,
    0);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (KSPIN_LOCK)(v6 + 236), 134, 1936028228);
  if ( PdoExt(BugCheckParameter3)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
    CurrentIrql = KeGetCurrentIrql();
    v10 = *((unsigned __int16 *)v6 + 714);
    if ( CurrentIrql )
    {
      v8 = -1073741811;
      UsbhException((__int64)DeviceObject, v10, 68LL, 0LL, 0, -1073741811, -1, usbfile_dioctl_c, 769, 0);
    }
    else
    {
      v8 = -1073741810;
      v17 = UsbhLatchPdo((__int64)DeviceObject, v10, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 714), v17);
      if ( !v17 )
        goto LABEL_26;
      if ( BugCheckParameter3 == v17 )
      {
        UsbhAcquirePdoStateLock(v11, v7, 13);
        v12 = PdoExt(BugCheckParameter3)[281] == 3;
        v6[270] = 0;
        qword_14006F5E0 = 0LL;
        v6[258] = 1734964085;
        v13 = *((_BYTE *)v6 + 1076);
        if ( v12 )
        {
          KeReleaseSpinLock(&HubG, v13);
          Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 714));
          v14 = UsbhSyncResetDeviceInternal(DeviceObject);
          v8 = v14;
          v15 = v6[597] + 1;
          v6[596] = 1;
          v6[597] = v15;
          if ( v15 > 0xA )
          {
            UsbhException(
              (__int64)DeviceObject,
              *((unsigned __int16 *)v6 + 714),
              76LL,
              0LL,
              0,
              v14,
              -1,
              usbfile_dioctl_c,
              803,
              0);
            v6[597] = 0;
          }
          if ( v8 >= 0 )
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v8, *((unsigned __int16 *)v6 + 714));
        }
        else
        {
          KeReleaseSpinLock(&HubG, v13);
        }
      }
      UsbhUnlatchPdo((__int64)DeviceObject, v17, (__int64)BugCheckParameter4, 0x64545352u);
      if ( (v8 & 0xC0000000) == 0xC0000000 )
      {
LABEL_26:
        if ( !Usb_Disconnected(v8) )
          UsbhException(
            (__int64)DeviceObject,
            *((unsigned __int16 *)v6 + 714),
            77LL,
            0LL,
            0,
            v8,
            -1,
            usbfile_dioctl_c,
            828,
            0);
      }
    }
  }
  else
  {
    v8 = -1073741101;
    UsbhException(
      (__int64)DeviceObject,
      *((unsigned __int16 *)v6 + 714),
      69LL,
      0LL,
      0,
      -1073741101,
      -1,
      usbfile_dioctl_c,
      749,
      0);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE,
    v8);
  if ( *((_BYTE *)v6 + 2740) && v8 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_6755297163953fe01245bafdfc38d5a5_Traceguids);
    UsbhException((__int64)DeviceObject, 0LL, 62LL, 0LL, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, 1);
    *((_QWORD *)v6 + 348) = BugCheckParameter4;
    v8 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v8;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v8;
}
