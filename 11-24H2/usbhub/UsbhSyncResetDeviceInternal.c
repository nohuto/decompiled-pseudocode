/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x140047A14
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x140005410 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039520 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14001C918 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x14002BFA0 (UsbhQueueWorkItemEx.c)
 *     UsbhWaitForBootDevice @ 0x140038CB8 (UsbhWaitForBootDevice.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14003E19C (WPP_RECORDER_SF_qd.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400434E0 (UsbhPCE_QueueDriverReset.c)
 *     Usbh_HubRestoreDevice @ 0x1400488A4 (Usbh_HubRestoreDevice.c)
 *     UsbhLinkPdoDeviceHandle @ 0x14005C2F0 (UsbhLinkPdoDeviceHandle.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  bool v4; // r14
  _DWORD *v6; // rbp
  __int64 v7; // r8
  _DWORD *v8; // r15
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // bl
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned __int16 v13; // dx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PortData; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rbx
  int v25; // r10d
  KIRQL v26; // al
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v30; // [rsp+28h] [rbp-90h]
  __int64 v31; // [rsp+30h] [rbp-88h]
  KSPIN_LOCK *v32; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x47u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v7,
        0x48u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        *((unsigned __int16 *)v6 + 714),
        a3);
  }
  v8 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  v32 = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *((_QWORD *)v6 + 108) )
  {
    Log((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v6 + 108));
    KeReleaseSpinLock(v9, v10);
    LODWORD(v19) = -2147483631;
    goto LABEL_56;
  }
  v6[218] = -1;
  *((_QWORD *)v6 + 108) = &Event;
  *((_QWORD *)v6 + 110) = KeGetCurrentThread();
  KeReleaseSpinLock(v9, v10);
  v11 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x48446C6Fu);
  UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740898, 0);
  Log((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
  Usbh_SSH_Event((__int64)DeviceObject, (unsigned int)(v12 + 6), a2, v12);
  v13 = *((_WORD *)v6 + 714);
  v6[355] &= ~0x8000u;
  UsbhPCE_QueueDriverReset((__int64)DeviceObject, v13, 0x20000LL, a2, a3);
  Log((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((unsigned __int16 *)v6 + 714), v14, v15);
  UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, PortData);
  v19 = (int)v6[218];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v31) = v6[218];
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      0x49u,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a3,
      v31);
  }
  if ( (v19 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)DeviceObject, 4, 1380214124, 0LL, v19);
    UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740856, 1);
    if ( v11 )
    {
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
    }
    if ( !Usb_Disconnected(v19) )
      UsbhException(
        (__int64)DeviceObject,
        *((unsigned __int16 *)v6 + 714),
        67LL,
        0LL,
        0,
        v19,
        -1,
        usbfile_bus_c,
        6928,
        0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v31) = v19;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        v21,
        0x4Au,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a3,
        v31);
    }
  }
  else
  {
    UsbhAcquireEnumBusLock((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v36 = UsbhRefPdoDeviceHandle((__int64)DeviceObject, a3, a3, 0x4844776Eu);
    if ( v36 )
    {
      if ( v11 )
      {
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
        Log((__int64)DeviceObject, 4, 1381192786, v11, v36);
        v22 = Usbh_HubRestoreDevice(DeviceObject, a3, v11, v36);
        v23 = v22;
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( v22 < 0 )
          {
            v4 = v22 == -1073741823;
          }
          else if ( (v6[355] & 0x204) == 0x200 )
          {
            *(_OWORD *)Length = 0LL;
            UsbhGetSerialNumber((__int64)DeviceObject, a3, (__int64)Length);
            if ( HIDWORD(Length[0]) == v6[533] )
            {
              if ( Length[1] )
              {
                v24 = HIDWORD(Length[0]);
                if ( RtlCompareMemory((const void *)Length[1], *((const void **)v6 + 267), HIDWORD(Length[0])) != v24 )
                  v4 = 1;
              }
            }
            else
            {
              v4 = 1;
            }
            UsbhFreeID((__int64)Length);
          }
        }
        Log((__int64)DeviceObject, 4, 1380217445, 0LL, v23);
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v36, a3, 0x4844776Eu);
        if ( (v23 & 0xC0000000) == 0xC0000000 )
        {
          UsbhException(
            (__int64)DeviceObject,
            *((unsigned __int16 *)v6 + 714),
            66LL,
            0LL,
            0,
            v23,
            -1,
            usbfile_bus_c,
            7007,
            0);
          UsbhUnlinkPdoDeviceHandle((__int64)DeviceObject, a3, 2017740899, 1);
          UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 4, 1380216684, 0LL, v19);
        LODWORD(v23) = v25;
        UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v36, a3, 0x4844776Eu);
      }
      LODWORD(v19) = v23;
      if ( (int)v23 >= 0 )
      {
        if ( *((_BYTE *)v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_14006F708 )
            {
              if ( (v6[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v19) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (__int64)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_14006F708,
                                 *((unsigned __int16 *)v6 + 714),
                                 0x774D5153u,
                                 0LL);
                if ( (v19 & 0xC0000000) == 0xC0000000 )
                {
                  byte_14006F708 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LODWORD(v30) = v19;
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1u,
                        0x4Bu,
                        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                        v30);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      Log((__int64)DeviceObject, 4, 1380200497, 0LL, v11);
      UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
      UsbhDerefPdoDeviceHandle((__int64)DeviceObject, v11, a3, 0x48446C6Fu);
      LODWORD(v19) = -1073741823;
    }
    UsbhReleaseEnumBusLockEx((__int64)DeviceObject, a2, *((_WORD *)v6 + 714));
    v9 = v32;
  }
  v26 = KeAcquireSpinLockRaiseToDpc(v9);
  *((_QWORD *)v6 + 108) = 0LL;
  KeReleaseSpinLock(v9, v26);
  if ( !v4 )
    goto LABEL_52;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v27,
      3u,
      0x4Cu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      DeviceObject);
  Log((__int64)DeviceObject, 4, 1397905220, (int)v19, (__int64)DeviceObject);
  UsbhWaitForBootDevice((char)DeviceObject, a3, -1, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v28,
        3u,
        0x4Du,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        DeviceObject);
LABEL_52:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v30) = v19;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x4Eu,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v30);
    }
  }
LABEL_56:
  UsbhEtwLogDeviceIrpEvent((__int64)v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, v19);
  return (unsigned int)v19;
}
