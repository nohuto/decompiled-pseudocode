/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x140008210
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x140009F70 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CA10 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  PURB v4; // r15
  struct _USB_CONFIGURATION_DESCRIPTOR *v5; // rbx
  int v6; // ecx
  int v7; // ecx
  __int64 *v8; // rsi
  struct _USB_INTERFACE_DESCRIPTOR *v9; // rax
  __int64 *v10; // r14
  int v11; // edx
  _UNKNOWN **result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // [rsp+28h] [rbp-A1h]
  __int64 v19; // [rsp+50h] [rbp-79h] BYREF
  __int128 v20; // [rsp+58h] [rbp-71h] BYREF
  __int128 v21; // [rsp+68h] [rbp-61h]
  __int128 v22; // [rsp+78h] [rbp-51h]
  __int64 v23; // [rsp+88h] [rbp-41h]
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-39h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-29h]
  _QWORD v26[9]; // [rsp+B0h] [rbp-19h] BYREF

  LODWORD(v23) = 0;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v26, 0, sizeof(v26));
  v3 = *(_DWORD *)(a1 + 256);
  v4 = 0LL;
  v19 = 0LL;
  v5 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1272);
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_9;
    }
    else
    {
      v8 = (__int64 *)(a1 + 2536);
      v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v5,
                                                 (_DWORD)v5,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 2,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2536));
      if ( v9 )
        goto LABEL_11;
    }
  }
  v10 = (__int64 *)(a1 + 2536);
  v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                             (_DWORD)v5,
                                             (_DWORD)v5,
                                             -1,
                                             -1,
                                             9,
                                             -1,
                                             1,
                                             0LL,
                                             *(_QWORD *)(a1 + 2536));
  v8 = (__int64 *)(a1 + 2536);
  if ( !v9 )
  {
    v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v5,
                                               (_DWORD)v5,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               0,
                                               0LL,
                                               *v10);
    if ( !v9 )
    {
      v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v5,
                                                 (_DWORD)v5,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 -1,
                                                 0LL,
                                                 *v10);
      if ( !v9 )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v2) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v2, 3, 12, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
        }
        goto LABEL_23;
      }
    }
  }
LABEL_11:
  if ( v9->bInterfaceClass != 9 || !v9->bNumEndpoints )
  {
LABEL_23:
    if ( v19 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1280, 2006LL);
  }
  v25 = 0LL;
  InterfaceList.InterfaceDescriptor = v9;
  v4 = USBD_CreateConfigurationRequestEx(v5, &InterfaceList);
  if ( v4 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v14 = *(_QWORD *)(a1 + 16);
    v15 = v13;
    *(_QWORD *)&v21 = 0LL;
    v23 = 0LL;
    v22 = v14;
    v20 = 0LL;
    LODWORD(v20) = 56;
    *((_QWORD *)&v21 + 1) = 0x100000001LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v20,
            v13,
            &v19);
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v16;
        WPP_RECORDER_SF_d(*v8, 2u, 3u, 0xEu, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids, v18);
      }
      goto LABEL_23;
    }
    LOBYTE(v26[0]) = 15;
    LODWORD(v26[3]) = 2228227;
    v26[1] = v4;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v19,
      v26);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, PURB))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v19,
      &HUBPARENT_SetHubConfigurationComplete,
      v4);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                            WdfDriverGlobals,
                            v19,
                            v15,
                            0LL);
    if ( !(_BYTE)result )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v19);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v17;
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *v8,
                                2u,
                                3u,
                                0xFu,
                                (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                                v18);
      }
      if ( v17 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(*v8, v11, 3, 13, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
    }
  }
  return result;
}
