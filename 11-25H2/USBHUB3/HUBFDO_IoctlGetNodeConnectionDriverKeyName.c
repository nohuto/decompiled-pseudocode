/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DD94
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030314 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FBD4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // rsi
  int v10; // edi
  __int64 i; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ebx
  unsigned int v15; // ecx
  int ActivityIdIrp; // eax
  __int64 v17; // rcx
  const GUID *v18; // r8
  char *v20; // [rsp+20h] [rbp-58h]
  int *v21; // [rsp+28h] [rbp-50h]
  void *v22; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+48h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_14006C198);
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v22,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters((_DWORD)v9, 4, a4, (_DWORD)v22, 10LL, a3);
    if ( v10 >= 0 )
    {
      v7 = *(unsigned __int16 *)v22;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      for ( i = 0LL; ; i = v13 )
      {
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                i,
                1LL);
        v13 = v12;
        if ( !v12
          || v12 != v9[333]
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v12,
                                     off_14006C0F8)
                                 + 48) == v7 )
        {
          break;
        }
      }
      if ( v13 )
      {
        memset(v22, 0, a3);
        v21 = &v23;
        *(_DWORD *)v22 = v7;
        v20 = (char *)v22 + 8;
        v23 = a3 - 8;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v13,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v10 = 0;
        if ( v14 != -1073741789 )
          v10 = v14;
        if ( v10 >= 0 )
        {
          v15 = v23 + 10;
          *((_DWORD *)v22 + 1) = v23 + 10;
          if ( a3 < v15 )
            *((_WORD *)v22 + 4) = 0;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2200))(WdfDriverGlobals, a2);
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v10 = -1073741811;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(v9[316], 2u, 3u, 0x40u, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v10);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v18 = (const GUID *)&v24;
      LODWORD(v21) = v10;
      LODWORD(v20) = v7;
      if ( ActivityIdIrp < 0 )
        v18 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v17,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v18,
        v9[31],
        v20,
        v21);
    }
  }
  if ( v10 < 0 && v22 && a3 >= 0xA )
  {
    *((_WORD *)v22 + 4) = 0;
    *((_DWORD *)v22 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
