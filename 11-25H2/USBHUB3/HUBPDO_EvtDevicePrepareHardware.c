/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x140082630
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x140001B54 (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetPortPath @ 0x140018EAC (HUBPDO_GetPortPath.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x140018FF4 (HUBPDO_HandlePLDRRecovery.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x14003033C (HUBMISC_GetDeviceInterfacePath.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     DereferenceDeviceResetInterface @ 0x140045138 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x14008766C (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x14008B7D0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x14008C950 (HUBREG_UpdateSqmFlags.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x14008D2BC (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D400 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     WMI_FireNotification @ 0x14008FB20 (WMI_FireNotification.c)
 *     WMI_RegisterDevice @ 0x140090068 (WMI_RegisterDevice.c)
 *     TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x140091594 (TUNNEL_AcquireUsb4HostPowerReferenceForPort.c)
 *     InitializeResetActionWorkItem @ 0x140093BCC (InitializeResetActionWorkItem.c)
 *     QueryDeviceResetInterface @ 0x140093CB0 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  _QWORD *v3; // r15
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r9d
  char v7; // di
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // r12d
  int DeviceInterfacePath; // eax
  unsigned __int16 v13; // r9
  _QWORD *v14; // rsi
  int DeviceResetInterface; // eax
  __int64 v16; // rdx
  int v17; // eax
  wchar_t *Pool2; // rax
  wchar_t *v19; // rsi
  int (__fastcall *v20)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *); // rax
  void *v21; // rax
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 v24; // r9
  unsigned __int16 *v25; // r8
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // r10d
  int v30; // eax
  const char *v31; // r8
  const char *v32; // rcx
  __int64 v33; // rax
  int v34; // r11d
  int v35; // eax
  int v36; // r9d
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // r9
  const wchar_t *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  void *v43; // rsi
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r11
  unsigned int v47; // edx
  char v48; // al
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v52; // [rsp+28h] [rbp-180h]
  __int64 v53; // [rsp+30h] [rbp-178h]
  __int64 v54; // [rsp+38h] [rbp-170h]
  __int64 v55; // [rsp+40h] [rbp-168h]
  int v56; // [rsp+48h] [rbp-160h]
  char v57[4]; // [rsp+128h] [rbp-80h] BYREF
  int v58; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v59; // [rsp+130h] [rbp-78h] BYREF
  __int64 v60; // [rsp+138h] [rbp-70h] BYREF
  int v61; // [rsp+140h] [rbp-68h]
  int v62; // [rsp+144h] [rbp-64h]
  int v63; // [rsp+148h] [rbp-60h]
  int v64; // [rsp+14Ch] [rbp-5Ch]
  int v65; // [rsp+150h] [rbp-58h]
  const wchar_t *v66; // [rsp+158h] [rbp-50h]
  wchar_t *v67; // [rsp+160h] [rbp-48h]
  __int64 v68; // [rsp+168h] [rbp-40h] BYREF
  int v69; // [rsp+170h] [rbp-38h]
  BOOL v70; // [rsp+174h] [rbp-34h]
  __int64 v71; // [rsp+178h] [rbp-30h] BYREF
  const char *v72; // [rsp+180h] [rbp-28h]
  PVOID P; // [rsp+188h] [rbp-20h]
  __int64 v74; // [rsp+190h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+198h] [rbp-10h] BYREF
  const char *v76; // [rsp+1A8h] [rbp+0h]
  const char *v77; // [rsp+1B0h] [rbp+8h]
  void *Src[2]; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 v79; // [rsp+1C8h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1D8h] [rbp+30h] BYREF
  __int64 v81; // [rsp+1E8h] [rbp+40h]
  __int64 v82; // [rsp+1F0h] [rbp+48h]
  __int128 v83; // [rsp+1F8h] [rbp+50h]
  char *v84; // [rsp+208h] [rbp+60h]
  __int64 v85; // [rsp+210h] [rbp+68h]
  int *v86; // [rsp+218h] [rbp+70h]
  __int64 v87; // [rsp+220h] [rbp+78h]
  char *v88; // [rsp+228h] [rbp+80h]
  __int64 v89; // [rsp+230h] [rbp+88h]
  _WORD *v90; // [rsp+238h] [rbp+90h]
  __int64 v91; // [rsp+240h] [rbp+98h]
  __int64 *v92; // [rsp+248h] [rbp+A0h]
  __int64 v93; // [rsp+250h] [rbp+A8h]
  int v94; // [rsp+258h] [rbp+B0h] BYREF
  char v95; // [rsp+25Ch] [rbp+B4h] BYREF
  _WORD v96[8]; // [rsp+270h] [rbp+C8h] BYREF

  v1 = a1;
  v71 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v3 = *(_QWORD **)(v2 + 24);
  v60 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, v3[3]);
  _InterlockedOr((volatile signed __int32 *)v3 + 409, 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( (*(_DWORD *)(v3[1] + 204LL) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( ((*((_DWORD *)v3 + 681) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( (*(_DWORD *)(*v3 + 44LL) & 0x80u) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 81;
LABEL_13:
            LOBYTE(v5) = 4;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v3[1] + 1432LL),
              v5,
              5,
              v6,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
            goto LABEL_14;
          }
          goto LABEL_14;
        }
        goto LABEL_15;
      }
    }
    else if ( (*((_DWORD *)v3 + 409) & 0x200000) == 0 )
    {
      if ( (*(_DWORD *)(*v3 + 44LL) & 0x80u) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 82;
          goto LABEL_13;
        }
LABEL_14:
        _InterlockedOr((volatile signed __int32 *)v3 + 411, 0x80u);
      }
LABEL_15:
      TUNNEL_AcquireUsb4HostPowerReferenceForPort(v3[1]);
    }
  }
  if ( (v3[308] & 4) != 0 && (*((_DWORD *)v3 + 617) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 310, 8LL);
    *((_DWORD *)v3 + 617) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  v7 = 1;
  if ( (v3[308] & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)&g_MsOs20Flags, 4, 4, (__int64)(v3 + 308));
  HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)L"*,", 4, 4, (__int64)(v3 + 4));
  if ( (v3[204] & 2) != 0 )
  {
    v8 = v3[1];
    if ( *(_BYTE *)(*v3 + 240LL) >= *(_BYTE *)(v8 + 202) )
    {
      *(_DWORD *)(v8 + 1424) = 7;
      WMI_FireNotification(*v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v3[1] + 1432LL),
          v9,
          3,
          83,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      }
      v11 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer(v10, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, v3[3]);
      goto LABEL_139;
    }
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_HUB,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_139;
      v13 = 84;
      goto LABEL_30;
    }
    v14 = v3 + 267;
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            v1,
                            v3 + 267,
                            0LL,
                            *(_QWORD *)(v3[1] + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_139;
      v13 = 85;
      goto LABEL_30;
    }
  }
  else
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_139;
      v13 = 86;
      goto LABEL_30;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            v1,
                            v3 + 267,
                            0LL,
                            *(_QWORD *)(v3[1] + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_139;
      v13 = 87;
      goto LABEL_30;
    }
    v14 = v3 + 267;
    if ( (*((_DWORD *)v3 + 411) & 0x4000000) != 0 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
      if ( DeviceResetInterface >= 0 )
      {
        v17 = InitializeResetActionWorkItem(v2 + 544, v16, v1);
        v11 = v17;
        if ( v17 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v3[1] + 1432LL),
              4u,
              5u,
              0x59u,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
              v17);
          DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            4u,
            5u,
            0x58u,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            DeviceResetInterface);
        v11 = 0;
      }
    }
  }
  if ( *v14 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_139;
      v13 = 90;
LABEL_30:
      LODWORD(v53) = DeviceInterfacePath;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        2u,
        5u,
        v13,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v53);
      goto LABEL_139;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*((_DWORD *)v3 + 409) & 2) != 0 )
    *(_BYTE *)v2 = 0;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0 )
  {
    HIDWORD(v80.Ptr) = 0;
    DestinationString = 0LL;
    *(_OWORD *)Src = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *v14 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v14,
        &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v67 = Pool2;
    v19 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, DestinationString.Length + 2LL);
      memmove(v19, DestinationString.Buffer, DestinationString.Length);
    }
    v68 = 0LL;
    v84 = 0LL;
    v81 = 0LL;
    v82 = 0x100000001LL;
    v80 = 0LL;
    LODWORD(v80.Ptr) = 56;
    v83 = (unsigned __int64)v1;
    v20 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 2464);
    P = 0LL;
    if ( v20(WdfDriverGlobals, 0LL, &v80, &v68) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           v1,
           v68) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v68,
        Src);
      v21 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      P = v21;
      if ( v21 )
        memmove(v21, Src[1], LOWORD(Src[0]));
    }
    v84 = 0LL;
    v81 = 0LL;
    v82 = 0x100000001LL;
    v80 = 0LL;
    LODWORD(v80.Ptr) = 56;
    v83 = (unsigned __int64)v1;
    v74 = 0LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           v1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           &v80,
           &v74) < 0 )
      v66 = 0LL;
    else
      v66 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v74,
                               0LL);
    v22 = *(_QWORD *)(v2 + 16);
    v23 = &v95;
    v24 = 5LL;
    v25 = (unsigned __int16 *)(v22 + 330);
    v94 = *(unsigned __int16 *)(v22 + 328);
    do
    {
      v26 = *v25++;
      *(_DWORD *)v23 = v26;
      v23 += 4;
      --v24;
    }
    while ( v24 );
    v27 = *(unsigned __int8 *)(v22 + 240);
    if ( (unsigned __int8)v27 < 6u )
      *(&v94 + v27) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) == 0 )
      goto LABEL_85;
    v28 = v3[1];
    v29 = *(_DWORD *)(v28 + 204) & 2;
    if ( v29 )
      v57[0] = *(_BYTE *)(v28 + 1341);
    else
      v57[0] = 0;
    v30 = *(_DWORD *)(v22 + 168);
    v69 = v30;
    if ( v30 == 2 )
    {
      v72 = (const char *)(v22 + 176);
      v31 = (const char *)(v22 + 186);
      v32 = (const char *)(v22 + 181);
    }
    else
    {
      v76 = 0LL;
      v32 = 0LL;
      v77 = 0LL;
      v31 = 0LL;
      v72 = 0LL;
      if ( v30 == 1 )
      {
        v34 = *(_DWORD *)(v22 + 180);
        v35 = *(_DWORD *)(v22 + 176);
        v36 = *(_DWORD *)(v22 + 196);
        v37 = *(_DWORD *)(v22 + 192);
        v38 = *(_DWORD *)(v22 + 188);
        v59 = *(unsigned __int16 *)(v22 + 184);
        v58 = v34;
        v61 = v35;
        v62 = v36;
        v63 = v37;
        v64 = v38;
        v72 = 0LL;
        goto LABEL_79;
      }
    }
    v77 = v32;
    v61 = 0x7FFFFFFF;
    v58 = 0x7FFFFFFF;
    v76 = v31;
    v59 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
LABEL_79:
    v70 = (*(_DWORD *)(v2 + 32) & 1) == 0;
    v33 = v3[252];
    v79 = v33;
    if ( v33 )
      v65 = *(unsigned __int16 *)(v33 + 2);
    else
      v65 = 0;
    v39 = *(_QWORD *)(v2 + 24);
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      *(unsigned __int8 *)(v39 + 2713),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
      (const GUID *)(v22 + 772),
      *(_QWORD *)(*v3 + 248LL),
      v3[3],
      *(_WORD *)(v3[1] + 200LL),
      v66,
      v67,
      v56,
      (__int64)v3 + 1988,
      v65,
      v79,
      (const wchar_t *)P,
      v70,
      *(_BYTE *)(v22 + 240) + 1,
      (__int64)&v94,
      v64,
      v63,
      v62,
      v61,
      v58,
      v59,
      *(_DWORD *)(v2 + 384),
      *((_DWORD *)v3 + 556),
      v69,
      v72,
      v77,
      v76,
      v29 != 0,
      v57[0],
      *(_QWORD *)(v3[1] + 1416LL),
      *(_BYTE *)(v39 + 2712),
      *(_BYTE *)(v39 + 2713),
      *(_DWORD *)(v39 + 2716),
      *(_DWORD *)(v39 + 2720));
    v1 = v71;
    v19 = v67;
    v7 = 1;
LABEL_85:
    if ( v19 )
      ExFreePoolWithTag(v19, 0x64334855u);
    if ( P )
      ExFreePoolWithTag(P, 0x64334855u);
    if ( v68 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v74 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  if ( (v3[204] & 6) == 0 )
    WMI_RegisterDevice(v1);
  if ( !*(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_14006C1E8)
                 + 92) )
    goto LABEL_110;
  v40 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v1);
  v41 = *(_QWORD *)(v2 + 16);
  v67 = (wchar_t *)v40;
  v42 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v41);
  v66 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v42);
  v43 = *(void **)(v60 + 96);
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006FD88 )
      v44 = qword_14006FD88(v43, v66, v67, v2 + 392);
    else
      v44 = -1073741637;
    goto LABEL_105;
  }
  if ( v43 != &SleepstudyHelperUnsupportedHandle )
  {
    v44 = qword_14006FD88 ? qword_14006FD88(v43, v66, v67, v2 + 392) : -1073741637;
    if ( v44 != -1073741637 )
    {
LABEL_105:
      if ( v44 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v53) = v44;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            2u,
            2u,
            0x5Bu,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v53);
        }
        *(_QWORD *)(v2 + 392) = 0LL;
      }
      goto LABEL_110;
    }
  }
  *(_QWORD *)(v2 + 392) = &SleepstudyHelperUnsupportedHandle;
LABEL_110:
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 1636LL) & 2) == 0 )
  {
    HUBPDO_HandlePLDRRecovery(v1, v2, (__int64)v3);
    goto LABEL_139;
  }
  HUBPDO_GetPortPath(v2, v96);
  v46 = v3[1];
  if ( *(_BYTE *)(v46 + 1476) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = *((unsigned __int16 *)v3 + 999);
      LODWORD(v53) = *((unsigned __int16 *)v3 + 998);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v46 + 1432),
        4u,
        5u,
        0x5Cu,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v53,
        v54);
    }
    if ( (unsigned int)dword_14006C1F8 > 4 )
    {
      if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
        v7 = 0;
      if ( v7 )
      {
        *((_QWORD *)&v83 + 1) = 8LL;
        *(_QWORD *)&v83 = &v60;
        *(_WORD *)v57 = *((_WORD *)v3 + 998);
        v60 = 16779264LL;
        v84 = v57;
        LOWORD(v58) = *((_WORD *)v3 + 999);
        v86 = &v58;
        LOWORD(v59) = 6;
        v88 = (char *)&v59;
        v90 = v96;
        v85 = 2LL;
        v87 = 2LL;
        v89 = 2LL;
        v91 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067BE4, 0LL, 0LL, 7u, &v80);
      }
    }
    *(_BYTE *)(v3[1] + 1476LL) = 0;
  }
  else
  {
    if ( !*(_WORD *)(v46 + 1474) )
      goto LABEL_139;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v55) = *(unsigned __int16 *)(v46 + 1474);
      LODWORD(v54) = *((unsigned __int16 *)v3 + 999);
      LODWORD(v53) = *((unsigned __int16 *)v3 + 998);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v46 + 1432),
        4u,
        v45,
        0x5Du,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v53,
        v54,
        v55);
    }
    v47 = dword_14006C1F8;
    v10 = qword_14006C210;
    if ( (unsigned int)dword_14006C1F8 > 4 )
    {
      if ( (qword_14006C208 & 0x400000000001LL) == 0
        || (v48 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
      {
        v48 = 0;
      }
      if ( v48 )
      {
        v49 = v3[1];
        *(_QWORD *)&v83 = &v60;
        LOWORD(v59) = *((_WORD *)v3 + 998);
        *((_QWORD *)&v83 + 1) = 8LL;
        v84 = (char *)&v59;
        LOWORD(v58) = *((_WORD *)v3 + 999);
        v86 = &v58;
        *(_WORD *)v57 = 6;
        v88 = v57;
        v90 = v96;
        v60 = 16779264LL;
        v85 = 2LL;
        v87 = 2LL;
        v89 = 2LL;
        v91 = 12LL;
        LODWORD(v71) = *(unsigned __int16 *)(v49 + 1474);
        v92 = &v71;
        v93 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006C1F8,
          byte_140067E7A,
          (const GUID *)(v49 + 1480),
          0LL,
          8u,
          &v80);
        v10 = qword_14006C210;
        v47 = dword_14006C1F8;
      }
    }
    if ( v47 > 4 )
    {
      if ( (qword_14006C208 & 0x400000000001LL) == 0 || (v10 & 0x400000000001LL) != v10 )
        v7 = 0;
      if ( v7 )
      {
        v50 = v3[1];
        *(_QWORD *)&v83 = &v60;
        LOWORD(v59) = *((_WORD *)v3 + 998);
        v60 = 16779264LL;
        v84 = (char *)&v59;
        LOWORD(v58) = *((_WORD *)v3 + 999);
        v86 = &v58;
        *(_WORD *)v57 = 6;
        v88 = v57;
        v90 = v96;
        *((_QWORD *)&v83 + 1) = 8LL;
        v85 = 2LL;
        v87 = 2LL;
        v89 = 2LL;
        v91 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006C1F8,
          byte_1400675F5,
          (const GUID *)(v50 + 1480),
          0LL,
          7u,
          &v80);
      }
    }
    *(_OWORD *)(v3[1] + 1480LL) = 0LL;
  }
  *(_WORD *)(v3[1] + 1474LL) = 0;
LABEL_139:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v52) = v11;
    McTemplateK0pq_EtwWriteTransfer(v10, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, v3[3], v52);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v53) = *((_DWORD *)v3 + 411);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      5u,
      0x5Eu,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v53);
  }
  return v11;
}
