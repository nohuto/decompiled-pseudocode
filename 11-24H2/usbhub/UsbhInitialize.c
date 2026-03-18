/*
 * XREFs of UsbhInitialize @ 0x14003C7C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x14000CDF0 (UsbhSyncSendInternalIoctl.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhConfigureUsbHub @ 0x14003A328 (UsbhConfigureUsbHub.c)
 *     UsbhGetExtendedHubInformation @ 0x14003BB6C (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x14003BD64 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubDeviceInformation @ 0x14003C0B0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubPowerStatus @ 0x14003C2F8 (UsbhGetHubPowerStatus.c)
 *     UsbhGetTopOfBusStack @ 0x14003C6C0 (UsbhGetTopOfBusStack.c)
 *     UsbhInitializeTtHub @ 0x14003CCEC (UsbhInitializeTtHub.c)
 *     UsbhIsHighSpeedCapable @ 0x14003CDEC (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x14003CEE8 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhCheckHubErrata @ 0x14005A3D4 (UsbhCheckHubErrata.c)
 *     UsbhRegisterPowerCallback @ 0x14005E1B0 (UsbhRegisterPowerCallback.c)
 *     UsbhQueryParentHubConfig @ 0x14005F348 (UsbhQueryParentHubConfig.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhInitialize(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v3; // r15d
  _DWORD *v5; // rsi
  unsigned int TopOfBusStack; // ebp
  char *Src; // rax
  int v8; // r9d
  _DWORD *v9; // rax
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // r10d
  int v14; // r11d
  unsigned int *v15; // r14
  _DWORD *v16; // rax
  void (__fastcall *v17)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *); // r15
  unsigned int v18; // eax
  unsigned int v19; // eax
  _DWORD *v20; // rax
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 8, 1749634633, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetRootHubPdo";
    v8 = 5505;
    goto LABEL_6;
  }
  v9 = FdoExt((__int64)DeviceObject);
  v21 = 1;
  if ( (v9[640] & 1) != 0 )
  {
    TopOfBusStack = 0;
    Log((__int64)DeviceObject, 8, 1214475858, 0LL, 0LL);
  }
  else
  {
    TopOfBusStack = UsbhSyncSendInternalIoctl((__int64)DeviceObject, 0x22001Bu, (unsigned __int64)&v21, 0LL);
  }
  Log((__int64)DeviceObject, 8, 1214475892, (int)TopOfBusStack, v21);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v8 = 5516;
    goto LABEL_6;
  }
  if ( v21 > 6 )
  {
    UsbhLogStartFailure(
      (int)DeviceObject,
      -1073741823,
      7,
      5523,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "hubCount > 6");
    return 3221225473LL;
  }
  TopOfBusStack = UsbhGetHubDeviceInformation((__int64)DeviceObject, a2);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubDeviceInformation";
    v8 = 5533;
    goto LABEL_6;
  }
  if ( v5[633] == 1 )
  {
    if ( v5[634] == 2 )
      v5[640] |= 0x40u;
    if ( (unsigned __int8)UsbhIsHighSpeedCapable(DeviceObject) )
      v5[640] |= 0x8000u;
  }
  UsbhCheckHubErrata(v5);
  TopOfBusStack = UsbhConfigureUsbHub((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) != 0xC0000000 )
  {
    do
    {
      TopOfBusStack = UsbhGetHubClassDescriptor((__int64)DeviceObject, v5 + 734);
      if ( Usb_Disconnected(TopOfBusStack) )
        return TopOfBusStack;
      v12 = v11 >> 30;
      if ( v11 >> 30 == 3 && v3 > 3 )
      {
        Src = "GetHubClassDescriptor";
        v8 = 5585;
        goto LABEL_6;
      }
      if ( v3 )
        UsbhWait((__int64)DeviceObject, 0xAu);
      ++v3;
    }
    while ( v12 == 3 );
    Log(
      (__int64)DeviceObject,
      8,
      1749634633,
      *(unsigned __int16 *)((char *)v5 + 2939),
      *((unsigned __int16 *)v5 + 1276));
    if ( *((_WORD *)v5 + 1271) >= 0x200u )
    {
      if ( (v13 & 1) != 0 )
        *((_BYTE *)v5 + 3007) = 1;
      if ( ((unsigned __int8)v13 & (unsigned __int8)v14) != 0 )
        *((_BYTE *)v5 + 3009) = 1;
      if ( (v13 & 0x80u) != 0 )
        *((_BYTE *)v5 + 3008) = 1;
      if ( (v5[640] & 0x40) != 0 )
      {
        if ( ((v13 >> 5) & 3) != 0 )
        {
          switch ( (v13 >> 5) & 3 )
          {
            case 1u:
              v5[753] = 16;
              goto LABEL_46;
            case 2u:
              v5[753] = 24;
              goto LABEL_46;
            case 3u:
              v5[753] = 32;
              goto LABEL_46;
          }
        }
        v5[753] = v14;
      }
    }
LABEL_46:
    UsbhGetHubPowerStatus((__int64)DeviceObject);
    v15 = v5 + 640;
    if ( (v5[640] & 0x40) != 0 )
    {
      TopOfBusStack = UsbhInitializeTtHub(DeviceObject, a2);
      if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
      {
        Src = "InitializeTtHub";
        v8 = 5653;
        goto LABEL_6;
      }
    }
    TopOfBusStack = UsbhGetExtendedHubInformation((__int64)DeviceObject);
    if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
    {
      Src = "Get Port attributes";
      v8 = 5664;
      goto LABEL_6;
    }
    v16 = FdoExt((__int64)DeviceObject);
    if ( *((_WORD *)v16 + 2400) == 3 )
    {
      v17 = (void (__fastcall *)(_QWORD, _DWORD *, _DWORD *, char *, _DWORD *, char *, char *, char *))*((_QWORD *)v16 + 580);
      if ( v17 )
        v17(
          *((_QWORD *)v16 + 570),
          v16 + 1306,
          v16 + 1307,
          (char *)v16 + 5230,
          v16 + 1308,
          (char *)v16 + 5233,
          (char *)v16 + 5234,
          (char *)v16 + 5235);
    }
    v18 = *v15;
    if ( dword_14006F5B8 )
      v19 = v18 & 0xFFEFFFFF;
    else
      v19 = v18 | 0x100000;
    *v15 = v19;
    FdoExt((__int64)DeviceObject)[1053] = 1;
    FdoExt((__int64)DeviceObject)[1052] = 1;
    v5[1043] = 201;
    KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
    *((_BYTE *)v5 + 4184) = 0;
    *((_QWORD *)v5 + 525) = v5 + 1048;
    *((_QWORD *)v5 + 524) = v5 + 1048;
    KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)v5 + 205, SynchronizationEvent, 1u);
    v5[1221] = 1;
    UsbhQueryParentHubConfig(DeviceObject);
    v20 = FdoExt((__int64)DeviceObject);
    UsbhSyncSendInternalIoctl((__int64)DeviceObject, 0x22043Fu, (unsigned __int64)(v20 + 1298), 0LL);
    v5[1314] = dword_14006F710;
    UsbhRegisterPowerCallback(DeviceObject);
    v5[640] |= 0x40000000u;
    return TopOfBusStack;
  }
  Src = "ConfigureUsbHub";
  v8 = 5566;
LABEL_6:
  UsbhLogStartFailure(
    (int)DeviceObject,
    TopOfBusStack,
    3,
    v8,
    (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    Src);
  return TopOfBusStack;
}
