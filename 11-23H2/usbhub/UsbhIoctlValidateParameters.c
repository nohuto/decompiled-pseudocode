/*
 * XREFs of UsbhIoctlValidateParameters @ 0x1C0041218
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003E3F8 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003EF0C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003F180 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003F448 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003FE6C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlValidateParameters(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  _DWORD *v10; // rax
  int v11; // r11d
  unsigned int v12; // r14d
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned int v15; // ebx
  int *v16; // rsi
  __int64 v17; // r14
  __int64 v19; // [rsp+28h] [rbp-51h]
  int v20[8]; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+70h] [rbp-9h]

  v20[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x30u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v10 = FdoExt(a1);
  v11 = *(_DWORD *)(a4 + 16);
  v12 = *(_DWORD *)(a4 + 8);
  v20[1] = a2;
  v20[3] = v11;
  v20[2] = v12;
  v20[4] = a5;
  v20[5] = a6;
  v20[6] = v10[610];
  v20[7] = v10[640];
  v21 = 0;
  Log(a1, 32, 1768912433, a3, (__int64)v20);
  v15 = 0;
  if ( *(_DWORD *)(v14 + 2440) == 3 )
  {
    if ( (unsigned int)v13 >= a5 )
    {
      if ( v12 < a6 )
      {
        Log(a1, 32, 1768912436, 0LL, v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            2u,
            0x33u,
            (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
        v15 = -1073741789;
        v21 = 2425;
        goto LABEL_27;
      }
      if ( a5 < 4 )
        goto LABEL_29;
      v16 = *(int **)(a3 + 24);
      v17 = v13;
      v20[0] = *v16;
      Log(a1, 32, 1768912437, (__int64)v16, v13);
      if ( *v16 )
      {
        if ( *v16 <= (unsigned int)*((unsigned __int8 *)FdoExt(a1) + 2938) )
          goto LABEL_29;
      }
      Log(a1, 32, 1768912437, (__int64)v16, v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          2u,
          0x34u,
          (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
      v21 = 2445;
    }
    else
    {
      Log(a1, 32, 1768912435, 0LL, v13);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          2u,
          0x32u,
          (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
      v21 = 2416;
    }
    v15 = -1073741811;
  }
  else
  {
    Log(a1, 32, 1768912434, 0LL, v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0x31u,
        (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
    v15 = -1073741823;
    v21 = 2407;
  }
LABEL_27:
  if ( !Usb_Disconnected(v15) )
    UsbhException(a1, 0, 90, (int)v20, 36, v15, 0, usbfile_ioctl_c, 2459, 0);
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x35u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v19);
  }
  return v15;
}
