/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1400227C4
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002D060 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x14004B668 (UsbhHardReset_Action.c)
 *     UsbhHubStart @ 0x140050200 (UsbhHubStart.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhSyncBusResume @ 0x14001E040 (UsbhSyncBusResume.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhFdoColdStartPdo @ 0x140022D78 (UsbhFdoColdStartPdo.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFdoColdStartCheckPort @ 0x1400363A0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncPowerOnPorts @ 0x140038394 (UsbhSyncPowerOnPorts.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhResetHubUpstreamPort @ 0x14004B9E0 (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x14004BA90 (UsbhResetNotifyCompletion.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  _DWORD *v6; // r15
  int v7; // eax
  int started; // edi
  __int64 v9; // r8
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  unsigned __int16 i; // si
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PortData; // r14
  void *DeviceExtension; // rdx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int16 j; // si
  __int64 v22; // rax
  __int64 v23; // rbp
  _DWORD *v24; // r14
  unsigned __int16 k; // si
  __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rax
  _DWORD *v30; // rbp
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rax
  __int64 v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+40h] [rbp-38h]

  v6 = FdoExt((__int64)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1668246628, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  LODWORD(v38) = 0;
  LODWORD(v35) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, v35);
  if ( a3 && (v7 = UsbhResetHubUpstreamPort(DeviceObject), started = v7, (v7 & 0xC0000000) == 0xC0000000) )
  {
    if ( !Usb_Disconnected(v7) )
    {
      v9 = 54LL;
      v39 = 3281;
LABEL_8:
      UsbhException((__int64)DeviceObject, 0LL, v9, 0LL, 0, started, 0, usbfile_fdopwr_c, v39, 0);
    }
  }
  else
  {
    FdoExt((__int64)DeviceObject);
    Log((_DWORD)DeviceObject, 2048, 1346458174, 0, 0LL);
    v11 = UsbhDispatch_BusEvent(DeviceObject, a2, v10 + 10);
    Log((_DWORD)DeviceObject, 2048, 1346458172, 0, v11);
    v12 = UsbhSyncPowerOnPorts(DeviceObject);
    started = v12;
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      if ( Usb_Disconnected(v12) )
        goto LABEL_46;
      v9 = 53LL;
      v39 = 3305;
      goto LABEL_8;
    }
    UsbhWait((__int64)DeviceObject, 0x64u);
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
    {
      PortData = UsbhGetPortData((__int64)DeviceObject, i, v14, v15);
      if ( PortData )
      {
        v18 = UsbhLatchPdo((__int64)DeviceObject, i, 0LL, 0x434F4C44u);
        v19 = *(unsigned __int16 *)(PortData + 4);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( DeviceObject )
          {
            DeviceExtension = DeviceObject->DeviceExtension;
            if ( DeviceExtension )
            {
              v20 = *((_QWORD *)DeviceExtension + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
              *(_DWORD *)v20 = 828664931;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 16) = v19;
              *(_QWORD *)(v20 + 24) = v18;
            }
          }
        }
        if ( v18 )
        {
          started = UsbhFdoColdStartPdo(DeviceObject, a2, v18, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v18, 0LL, 0x434F4C44u);
            break;
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v18, 0LL, 0x434F4C44u);
        }
        else
        {
          started = UsbhFdoColdStartCheckPort(DeviceObject, DeviceExtension, PortData);
          if ( (started & 0xC0000000) == 0xC0000000 )
            break;
        }
      }
    }
    UsbhSyncBusResume((__int64)DeviceObject, a2);
    if ( *((_BYTE *)v6 + 5268) )
    {
      for ( j = 1; j <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++j )
      {
        v22 = UsbhLatchPdo((__int64)DeviceObject, j, 0LL, 0x434C4432u);
        v23 = v22;
        if ( v22 )
        {
          v24 = PdoExt(v22);
          if ( *((_BYTE *)v24 + 2740) )
          {
            started = UsbhSyncResetDeviceInternal(DeviceObject);
            if ( started < 0 )
            {
              UsbhQueueSoftConnectChange(DeviceObject, j, a2, 1LL);
              v24[355] &= ~0x4000u;
              LODWORD(v36) = 0;
              UsbhEtwLogHubIrpEvent(
                (__int64)DeviceObject,
                0LL,
                0LL,
                &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE,
                v36,
                started);
              UsbhUnlatchPdo((__int64)DeviceObject, v23, 0LL, 0x434C4432u);
              return (unsigned int)started;
            }
            UsbhResetNotifyCompletion(*(_QWORD *)(a2 + 8));
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v23, 0LL, 0x434C4432u);
        }
      }
    }
    for ( k = 1; k <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++k )
    {
      v26 = UsbhLatchPdo((__int64)DeviceObject, k, 0LL, 0x434C4432u);
      Log((_DWORD)DeviceObject, 16, 1919249969, k, v26);
      if ( v26 )
      {
        v29 = PdoExt(v26);
        v30 = v29;
        if ( !*((_BYTE *)v29 + 2740) && (v29[355] & 0x4000) != 0 )
        {
          Log((_DWORD)DeviceObject, 16, 1346654803, 0, 0LL);
          LODWORD(v38) = v31 & v38;
          LODWORD(v37) = *((unsigned __int16 *)v30 + 714);
          UsbhEtwLogHubIrpEvent(
            (__int64)DeviceObject,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            v37);
          v32 = UsbhSyncResetDeviceInternal(DeviceObject);
          started = v32;
          if ( (v32 & 0xC0000000) == 0xC0000000 )
          {
            Log((_DWORD)DeviceObject, 16, 1919249970, 0, v32);
            UsbhQueueSoftConnectChange(DeviceObject, k, a2, 1LL);
            v30[355] &= ~0x4000u;
            UsbhException((__int64)DeviceObject, 0LL, 88LL, 0LL, 0, started, 0, usbfile_fdopwr_c, 3452, 0);
            started = 0;
          }
          else
          {
            v30[355] &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v26, 0LL, 0x434C4432u);
      }
      else
      {
        v33 = UsbhGetPortData((__int64)DeviceObject, k, v27, v28);
        if ( *(_BYTE *)(v33 + 2841) )
        {
          *(_BYTE *)(v33 + 2841) = 0;
          UsbhQueueSoftConnectChange(DeviceObject, k, a2, 0LL);
        }
      }
    }
  }
LABEL_46:
  LODWORD(v38) = started;
  LODWORD(v36) = 0;
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, v36, v38);
  return (unsigned int)started;
}
