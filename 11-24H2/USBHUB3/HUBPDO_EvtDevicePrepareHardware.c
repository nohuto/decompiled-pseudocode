/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1400815B0
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
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014AD8 (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_GetPortPath @ 0x140018ECC (HUBPDO_GetPortPath.c)
 *     HUBPDO_HandlePLDRRecovery @ 0x140019014 (HUBPDO_HandlePLDRRecovery.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x14003046C (HUBMISC_GetDeviceInterfacePath.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140045730 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     DereferenceDeviceResetInterface @ 0x140045978 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memmove @ 0x140046600 (memmove.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1400865B4 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x14008A720 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x14008B8A0 (HUBREG_UpdateSqmFlags.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x14008C20C (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008C350 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     WMI_FireNotification @ 0x14008EA70 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x14008F14C (WMI_FireNotificationOld.c)
 *     WMI_RegisterDevice @ 0x14008F698 (WMI_RegisterDevice.c)
 *     TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x140090BC4 (TUNNEL_AcquireUsb4HostPowerReferenceForPort.c)
 *     InitializeResetActionWorkItem @ 0x1400931FC (InitializeResetActionWorkItem.c)
 *     QueryDeviceResetInterface @ 0x1400932E0 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  volatile signed __int32 *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r10
  _UNKNOWN **v6; // rdx
  char v7; // si
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r13d
  int DeviceInterfacePath; // eax
  unsigned __int16 v13; // r9
  int DeviceResetInterface; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  wchar_t *Pool2; // rax
  wchar_t *v18; // r14
  int (__fastcall *v19)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *); // rax
  void *v20; // rax
  __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // r9
  unsigned __int16 *v24; // r8
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // r10d
  int v29; // eax
  const char *v30; // r8
  const char *v31; // rcx
  __int64 v32; // rax
  int v33; // r11d
  int v34; // eax
  int v35; // r9d
  int v36; // r8d
  int v37; // ecx
  __int64 v38; // r9
  const wchar_t *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  void *v42; // r14
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r11
  unsigned int v46; // edx
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v51; // [rsp+28h] [rbp-180h]
  __int64 v52; // [rsp+30h] [rbp-178h]
  __int64 v53; // [rsp+38h] [rbp-170h]
  __int64 v54; // [rsp+40h] [rbp-168h]
  int v55; // [rsp+48h] [rbp-160h]
  char v56[4]; // [rsp+128h] [rbp-80h] BYREF
  int v57; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v58; // [rsp+130h] [rbp-78h] BYREF
  __int64 v59; // [rsp+138h] [rbp-70h] BYREF
  int v60; // [rsp+140h] [rbp-68h]
  int v61; // [rsp+144h] [rbp-64h]
  int v62; // [rsp+148h] [rbp-60h]
  int v63; // [rsp+14Ch] [rbp-5Ch]
  int v64; // [rsp+150h] [rbp-58h]
  const wchar_t *v65; // [rsp+158h] [rbp-50h]
  wchar_t *v66; // [rsp+160h] [rbp-48h]
  __int64 v67; // [rsp+168h] [rbp-40h] BYREF
  __int64 v68; // [rsp+170h] [rbp-38h] BYREF
  int v69; // [rsp+178h] [rbp-30h]
  BOOL v70; // [rsp+17Ch] [rbp-2Ch]
  const char *v71; // [rsp+180h] [rbp-28h]
  PVOID P; // [rsp+188h] [rbp-20h]
  __int64 v73; // [rsp+190h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+198h] [rbp-10h] BYREF
  const char *v75; // [rsp+1A8h] [rbp+0h]
  const char *v76; // [rsp+1B0h] [rbp+8h]
  void *Src[2]; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 v78; // [rsp+1C8h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1D8h] [rbp+30h] BYREF
  __int64 v80; // [rsp+1E8h] [rbp+40h]
  __int64 v81; // [rsp+1F0h] [rbp+48h]
  __int128 v82; // [rsp+1F8h] [rbp+50h]
  char *v83; // [rsp+208h] [rbp+60h]
  __int64 v84; // [rsp+210h] [rbp+68h]
  int *v85; // [rsp+218h] [rbp+70h]
  __int64 v86; // [rsp+220h] [rbp+78h]
  char *v87; // [rsp+228h] [rbp+80h]
  __int64 v88; // [rsp+230h] [rbp+88h]
  _QWORD *v89; // [rsp+238h] [rbp+90h]
  __int64 v90; // [rsp+240h] [rbp+98h]
  __int64 *v91; // [rsp+248h] [rbp+A0h]
  __int64 v92; // [rsp+250h] [rbp+A8h]
  int v93; // [rsp+258h] [rbp+B0h] BYREF
  char v94; // [rsp+25Ch] [rbp+B4h] BYREF
  _QWORD v95[2]; // [rsp+270h] [rbp+C8h] BYREF

  v1 = a1;
  v95[0] = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v3 = *(volatile signed __int32 **)(v2 + 24);
  v67 = v2;
  v59 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, *((_QWORD *)v3 + 3));
  _InterlockedOr(v3 + 411, 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  v5 = *((_QWORD *)v3 + 1);
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( (*(_DWORD *)(v5 + 204) & 0x800) != 0 && ((*((_DWORD *)v3 + 683) - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 44LL) & 0x80u) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(v5 + 1432),
          (_DWORD)v6,
          5,
          79,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      _InterlockedOr(v3 + 413, 0x80u);
    }
    TUNNEL_AcquireUsb4HostPowerReferenceForPort(*((_QWORD *)v3 + 1), v6);
  }
  if ( (v3[618] & 4) != 0 && (v3[619] & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 622, 8LL);
    *((_DWORD *)v3 + 619) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  v7 = 1;
  if ( (v3[618] & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)&g_MsOs20Flags, 4, 4, (__int64)(v3 + 618));
  HUBREG_WriteValueToDeviceHardwareKey((_DWORD)v3, (unsigned int)L"*,", 4, 4, (__int64)(v3 + 8));
  if ( (v3[410] & 2) != 0 )
  {
    v8 = *((_QWORD *)v3 + 1);
    if ( *(_BYTE *)(*(_QWORD *)v3 + 240LL) >= *(_BYTE *)(v8 + 202) )
    {
      *(_DWORD *)(v8 + 1424) = 7;
      if ( (unsigned int)Feature_UH3WET__private_IsEnabledDeviceUsageNoInline() )
        WMI_FireNotification(*((_QWORD *)v3 + 1), 10LL);
      else
        WMI_FireNotificationOld(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
          v9,
          3,
          80,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      }
      v11 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p_EtwWriteTransfer(
          v10,
          &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP,
          0LL,
          *((_QWORD *)v3 + 3));
      goto LABEL_136;
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
        goto LABEL_136;
      v13 = 81;
      goto LABEL_27;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            v1,
                            (_QWORD *)v3 + 268,
                            0LL,
                            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v13 = 82;
      goto LABEL_27;
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
        goto LABEL_136;
      v13 = 83;
      goto LABEL_27;
    }
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            v1,
                            (_QWORD *)v3 + 268,
                            0LL,
                            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL));
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v13 = 84;
      goto LABEL_27;
    }
    if ( (v3[413] & 0x4000000) != 0 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
      if ( DeviceResetInterface >= 0 )
      {
        v11 = InitializeResetActionWorkItem(v2 + 544, v15, v1);
        if ( v11 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
              4u,
              5u,
              0x56u,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v11);
          DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
            4u,
            5u,
            0x55u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            DeviceResetInterface);
        v11 = 0;
      }
    }
  }
  if ( *((_QWORD *)v3 + 268) )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_136;
      v13 = 87;
LABEL_27:
      LODWORD(v52) = DeviceInterfacePath;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
        2u,
        5u,
        v13,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v52);
      goto LABEL_136;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (v3[411] & 2) != 0 )
    *(_BYTE *)v2 = 0;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0 )
  {
    HIDWORD(v79.Ptr) = 0;
    DestinationString = 0LL;
    *(_OWORD *)Src = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v16 = *((_QWORD *)v3 + 268);
    if ( v16 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v16,
        &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v66 = Pool2;
    v18 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, DestinationString.Length + 2LL);
      memmove(v18, DestinationString.Buffer, DestinationString.Length);
    }
    v68 = 0LL;
    v83 = 0LL;
    v80 = 0LL;
    v81 = 0x100000001LL;
    v79 = 0LL;
    LODWORD(v79.Ptr) = 56;
    v82 = (unsigned __int64)v1;
    v19 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 2464);
    P = 0LL;
    if ( v19(WdfDriverGlobals, 0LL, &v79, &v68) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           v1,
           v68) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v68,
        Src);
      v20 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
      P = v20;
      if ( v20 )
        memmove(v20, Src[1], LOWORD(Src[0]));
    }
    v83 = 0LL;
    v80 = 0LL;
    v81 = 0x100000001LL;
    v79 = 0LL;
    LODWORD(v79.Ptr) = 56;
    v82 = (unsigned __int64)v1;
    v73 = 0LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, struct _EVENT_DATA_DESCRIPTOR *, __int64 *))(WdfFunctions_01015 + 656))(
           WdfDriverGlobals,
           v1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           &v79,
           &v73) < 0 )
      v65 = 0LL;
    else
      v65 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v73,
                               0LL);
    v21 = *(_QWORD *)(v2 + 16);
    v22 = &v94;
    v23 = 5LL;
    v24 = (unsigned __int16 *)(v21 + 330);
    v93 = *(unsigned __int16 *)(v21 + 328);
    do
    {
      v25 = *v24++;
      *(_DWORD *)v22 = v25;
      v22 += 4;
      --v23;
    }
    while ( v23 );
    v26 = *(unsigned __int8 *)(v21 + 240);
    if ( (unsigned __int8)v26 < 6u )
      *(&v93 + v26) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) == 0 )
      goto LABEL_82;
    v27 = *((_QWORD *)v3 + 1);
    v28 = *(_DWORD *)(v27 + 204) & 2;
    if ( v28 )
      v56[0] = *(_BYTE *)(v27 + 1341);
    else
      v56[0] = 0;
    v29 = *(_DWORD *)(v21 + 168);
    v69 = v29;
    if ( v29 == 2 )
    {
      v71 = (const char *)(v21 + 176);
      v30 = (const char *)(v21 + 186);
      v31 = (const char *)(v21 + 181);
    }
    else
    {
      v75 = 0LL;
      v31 = 0LL;
      v76 = 0LL;
      v30 = 0LL;
      v71 = 0LL;
      if ( v29 == 1 )
      {
        v33 = *(_DWORD *)(v21 + 180);
        v34 = *(_DWORD *)(v21 + 176);
        v35 = *(_DWORD *)(v21 + 196);
        v36 = *(_DWORD *)(v21 + 192);
        v37 = *(_DWORD *)(v21 + 188);
        v58 = *(unsigned __int16 *)(v21 + 184);
        v57 = v33;
        v60 = v34;
        v61 = v35;
        v62 = v36;
        v63 = v37;
        v71 = 0LL;
        goto LABEL_76;
      }
    }
    v76 = v31;
    v60 = 0x7FFFFFFF;
    v57 = 0x7FFFFFFF;
    v75 = v30;
    v58 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
LABEL_76:
    v70 = (*(_DWORD *)(v2 + 32) & 1) == 0;
    v32 = *((_QWORD *)v3 + 253);
    v78 = v32;
    if ( v32 )
      v64 = *(unsigned __int16 *)(v32 + 2);
    else
      v64 = 0;
    v38 = *(_QWORD *)(v2 + 24);
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      *(unsigned __int8 *)(v38 + 2721),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
      (const GUID *)(v21 + 780),
      *(_QWORD *)(*(_QWORD *)v3 + 248LL),
      *((_QWORD *)v3 + 3),
      *(_WORD *)(*((_QWORD *)v3 + 1) + 200LL),
      v65,
      v66,
      v55,
      (__int64)(v3 + 499),
      v64,
      v78,
      (const wchar_t *)P,
      v70,
      *(_BYTE *)(v21 + 240) + 1,
      (__int64)&v93,
      v63,
      v62,
      v61,
      v60,
      v57,
      v58,
      *(_DWORD *)(v67 + 384),
      *((_DWORD *)v3 + 558),
      v69,
      v71,
      v76,
      v75,
      v28 != 0,
      v56[0],
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 1416LL),
      *(_BYTE *)(v38 + 2720),
      *(_BYTE *)(v38 + 2721),
      *(_DWORD *)(v38 + 2724),
      *(_DWORD *)(v38 + 2728));
    v2 = v67;
    v7 = 1;
    v1 = v95[0];
    v18 = v66;
LABEL_82:
    if ( v18 )
      ExFreePoolWithTag(v18, 0x64334855u);
    if ( P )
      ExFreePoolWithTag(P, 0x64334855u);
    if ( v68 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v73 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  if ( (v3[410] & 6) == 0 )
    WMI_RegisterDevice(v1);
  if ( !*(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_14006C1E8)
                 + 92) )
    goto LABEL_107;
  v39 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v1);
  v40 = *(_QWORD *)(v2 + 16);
  v66 = (wchar_t *)v39;
  v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v40);
  v65 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v41);
  v42 = *(void **)(v59 + 96);
  if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_14006FD78 )
      v43 = qword_14006FD78(v42, v65, v66, v2 + 392);
    else
      v43 = -1073741637;
    goto LABEL_102;
  }
  if ( v42 != &SleepstudyHelperUnsupportedHandle )
  {
    v43 = qword_14006FD78 ? qword_14006FD78(v42, v65, v66, v2 + 392) : -1073741637;
    if ( v43 != -1073741637 )
    {
LABEL_102:
      if ( v43 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v52) = v43;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
            2u,
            2u,
            0x58u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v52);
        }
        *(_QWORD *)(v2 + 392) = 0LL;
      }
      goto LABEL_107;
    }
  }
  *(_QWORD *)(v2 + 392) = &SleepstudyHelperUnsupportedHandle;
LABEL_107:
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 1644LL) & 2) == 0 )
  {
    HUBPDO_HandlePLDRRecovery(v1, v2, (__int64)v3);
    goto LABEL_136;
  }
  HUBPDO_GetPortPath(v2, v95);
  v45 = *((_QWORD *)v3 + 1);
  if ( *(_BYTE *)(v45 + 1476) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v53) = *((unsigned __int16 *)v3 + 1003);
      LODWORD(v52) = *((unsigned __int16 *)v3 + 1002);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v45 + 1432),
        4u,
        5u,
        0x59u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v52,
        v53);
    }
    if ( (unsigned int)dword_14006C1F8 > 4 )
    {
      if ( (qword_14006C208 & 0x400000000001LL) == 0 || (qword_14006C210 & 0x400000000001LL) != qword_14006C210 )
        v7 = 0;
      if ( v7 )
      {
        *((_QWORD *)&v82 + 1) = 8LL;
        *(_QWORD *)&v82 = &v59;
        *(_WORD *)v56 = *((_WORD *)v3 + 1002);
        v59 = 16779264LL;
        v83 = v56;
        LOWORD(v57) = *((_WORD *)v3 + 1003);
        v85 = &v57;
        LOWORD(v58) = 6;
        v87 = (char *)&v58;
        v89 = v95;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v90 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006C1F8, byte_140067772, 0LL, 0LL, 7u, &v79);
      }
    }
    *(_BYTE *)(*((_QWORD *)v3 + 1) + 1476LL) = 0;
  }
  else
  {
    if ( !*(_WORD *)(v45 + 1474) )
      goto LABEL_136;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = *(unsigned __int16 *)(v45 + 1474);
      LODWORD(v53) = *((unsigned __int16 *)v3 + 1003);
      LODWORD(v52) = *((unsigned __int16 *)v3 + 1002);
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(v45 + 1432),
        4u,
        v44,
        0x5Au,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v52,
        v53,
        v54);
    }
    v46 = dword_14006C1F8;
    v10 = qword_14006C210;
    if ( (unsigned int)dword_14006C1F8 > 4 )
    {
      if ( (qword_14006C208 & 0x400000000001LL) == 0
        || (v47 = 1, (qword_14006C210 & 0x400000000001LL) != qword_14006C210) )
      {
        v47 = 0;
      }
      if ( v47 )
      {
        v48 = *((_QWORD *)v3 + 1);
        *(_QWORD *)&v82 = &v59;
        LOWORD(v58) = *((_WORD *)v3 + 1002);
        *((_QWORD *)&v82 + 1) = 8LL;
        v83 = (char *)&v58;
        LOWORD(v57) = *((_WORD *)v3 + 1003);
        v85 = &v57;
        *(_WORD *)v56 = 6;
        v87 = v56;
        v89 = v95;
        v59 = 16779264LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v90 = 12LL;
        LODWORD(v67) = *(unsigned __int16 *)(v48 + 1474);
        v91 = &v67;
        v92 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006C1F8,
          byte_140067C36,
          (const GUID *)(v48 + 1480),
          0LL,
          8u,
          &v79);
        v10 = qword_14006C210;
        v46 = dword_14006C1F8;
      }
      if ( v46 > 4 )
      {
        if ( (qword_14006C208 & 0x400000000001LL) == 0 || (v10 & 0x400000000001LL) != v10 )
          v7 = 0;
        if ( v7 )
        {
          v49 = *((_QWORD *)v3 + 1);
          *(_QWORD *)&v82 = &v59;
          LOWORD(v58) = *((_WORD *)v3 + 1002);
          v59 = 16779264LL;
          v83 = (char *)&v58;
          LOWORD(v57) = *((_WORD *)v3 + 1003);
          v85 = &v57;
          *(_WORD *)v56 = 6;
          v87 = v56;
          v89 = v95;
          *((_QWORD *)&v82 + 1) = 8LL;
          v84 = 2LL;
          v86 = 2LL;
          v88 = 2LL;
          v90 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_14006C1F8,
            byte_140067843,
            (const GUID *)(v49 + 1480),
            0LL,
            7u,
            &v79);
        }
      }
    }
    *(_OWORD *)(*((_QWORD *)v3 + 1) + 1480LL) = 0LL;
  }
  *(_WORD *)(*((_QWORD *)v3 + 1) + 1474LL) = 0;
LABEL_136:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v51) = v11;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *((_QWORD *)v3 + 3),
      v51);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v52) = *((_DWORD *)v3 + 413);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*((_QWORD *)v3 + 1) + 1432LL),
      2u,
      5u,
      0x5Bu,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v52);
  }
  return (unsigned int)v11;
}
