/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x14007ABE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140001A94 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     RtlStringCchPrintfA @ 0x140002474 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD40 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x14000DFF4 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x140010600 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x140086B6C (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  int DeviceCapabilities; // ebx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r8d
  struct _DEVICE_OBJECT *v13; // rax
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  const void *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v32; // [rsp+28h] [rbp-E0h]
  __int64 v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall *v39)(__int64); // [rsp+70h] [rbp-98h]
  _QWORD v40[3]; // [rsp+78h] [rbp-90h]
  void *v41; // [rsp+90h] [rbp-78h]
  __int128 v42; // [rsp+98h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-60h]
  __int128 v44; // [rsp+B8h] [rbp-50h]
  void *v45; // [rsp+C8h] [rbp-40h]
  __int128 v46; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v47; // [rsp+E8h] [rbp-20h]
  __int128 v48; // [rsp+F8h] [rbp-10h]
  __int128 v49; // [rsp+108h] [rbp+0h]
  _QWORD v50[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v51[18]; // [rsp+178h] [rbp+70h] BYREF
  __int128 v52; // [rsp+208h] [rbp+100h] BYREF
  __int128 v53; // [rsp+218h] [rbp+110h]
  char pszDest[16]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v55; // [rsp+238h] [rbp+130h]
  _OWORD v56[2]; // [rsp+240h] [rbp+138h] BYREF
  __int128 v57; // [rsp+260h] [rbp+158h]
  GUID v58; // [rsp+270h] [rbp+168h] BYREF
  __int64 v59; // [rsp+280h] [rbp+178h]

  v37 = a2;
  v2 = a2;
  DWORD1(v38) = 0;
  v59 = 0LL;
  HIDWORD(v51[0]) = 0;
  v36 = 0LL;
  v58 = 0LL;
  memset(v50, 0, sizeof(v50));
  LOBYTE(v35) = 0;
  v42 = 0LL;
  LODWORD(v45) = 0;
  v43 = 0LL;
  *(_QWORD *)&v49 = 0LL;
  v44 = 0LL;
  DWORD2(v49) = 0;
  memset(v56, 0, sizeof(v56));
  v55 = 0LL;
  v57 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v37;
  }
  v41 = off_14006C198;
  *(_QWORD *)&v38 = 56LL;
  *((_QWORD *)&v38 + 1) = HUBFDO_EvtDeviceCleanupCallback;
  v40[0] = 0x100000001LL;
  v39 = HUBFDO_EvtDeviceDestroyCallback;
  v4 = 0LL;
  *(_OWORD *)&v40[1] = 0LL;
  memset(v51, 0, sizeof(v51));
  v51[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v51[0]) = 144;
  v51[3] = HUBFDO_EvtDeviceD0Exit;
  v51[5] = HUBFDO_EvtDevicePrepareHardware;
  v51[6] = HUBFDO_EvtDeviceReleaseHardware;
  v51[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v51[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v51);
  LOBYTE(v5) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v37,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v5,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v10 = 12;
    goto LABEL_6;
  }
  LOBYTE(v35) = 7;
  LOBYTE(v8) = 27;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, __int64 *, int))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v37,
                         TUNNEL_EvtIrpPreprocessQueryDevRelations,
                         v8,
                         &v35,
                         1);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_14006C1E8);
      v10 = 13;
LABEL_6:
      v11 = *(_QWORD *)(v9 + 64);
      v12 = 2;
      LODWORD(v33) = DeviceCapabilities;
LABEL_7:
      WPP_RECORDER_SF_d(v11, 2u, v12, v10, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v33);
      goto LABEL_54;
    }
    goto LABEL_54;
  }
  *((_QWORD *)&v46 + 1) = HUBFDO_EvtDeviceArmWakeFromS0;
  *(_QWORD *)&v46 = 64LL;
  *(_QWORD *)&v47 = HUBFDO_EvtDeviceDisarmWakeFromS0;
  *(_QWORD *)&v48 = HUBFDO_EvtDeviceArmWakeFromSx;
  *((_QWORD *)&v48 + 1) = HUBFDO_EvtDeviceDisarmWakeFromSx;
  *((_QWORD *)&v47 + 1) = 0LL;
  v49 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v37,
    &v46);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v37,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v37,
                         &v38,
                         &v36);
  if ( DeviceCapabilities >= 0 )
  {
    v13 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                     WdfDriverGlobals,
                                     v36);
    v14 = IoRegisterShutdownNotification(v13);
    if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006C1E8);
      LODWORD(v33) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v15 + 64),
        2u,
        2u,
        0xFu,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v33);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v36,
           off_14006C198);
    *(_QWORD *)(v4 + 16) = v36;
    *(_QWORD *)(v4 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                             WdfDriverGlobals,
                             v36);
    *(_QWORD *)v4 = &g_Usbhub3_Triage_Info;
    *(_DWORD *)(v4 + 96) = USBD_AllocateHubNumber();
    *(_QWORD *)&v52 = 56LL;
    HIDWORD(v53) = 16;
    pszDest[0] = 0;
    v55 = 0x200000002LL;
    *(_QWORD *)&v53 = v4;
    BYTE8(v53) = 1;
    *((_QWORD *)&v52 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v4 + 96));
    v16 = (__int64 *)(v4 + 2528);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v52, v4 + 2528) < 0 )
      *v16 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                           WdfDriverGlobals,
                           WdfDriverGlobals->Driver,
                           off_14006C1E8)
                       + 64);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v36,
      1LL,
      v17);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v36,
      2LL,
      v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v36,
      3LL,
      v19);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v36,
      4LL,
      v20);
    DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v36, (_DWORD *)(v4 + 704), *v16);
    if ( DeviceCapabilities < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_14006C1E8);
        v10 = 16;
        LODWORD(v33) = DeviceCapabilities;
        v12 = 2;
        v11 = *(_QWORD *)(v21 + 64);
        goto LABEL_7;
      }
      goto LABEL_54;
    }
    *((_QWORD *)&v57 + 1) = -1LL;
    LODWORD(v56[0]) = 48;
    *(__m128i *)((char *)v56 + 4) = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)((char *)&v56[1] + 4) = 0x200000002LL;
    *(_QWORD *)&v57 = 0x200000002LL;
    HIDWORD(v56[1]) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 664))(
      WdfDriverGlobals,
      v36,
      v56);
    *(_QWORD *)(v4 + 344) = v4;
    LOWORD(v33) = 1013;
    LOWORD(v32) = 144;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
            WdfDriverGlobals,
            v36,
            &GUID_HUB_PARENT_INTERFACE,
            v4 + 208,
            v32,
            v33,
            0LL);
    DeviceCapabilities = v22;
    if ( v22 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *v16;
        v10 = 17;
        LODWORD(v33) = v22;
        v12 = 3;
        goto LABEL_7;
      }
      goto LABEL_54;
    }
    if ( !*(_BYTE *)(v4 + 240) )
    {
      v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v36);
      *(_QWORD *)(v4 + 2456) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                 WdfDriverGlobals,
                                 v23);
      *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                               WdfDriverGlobals,
                               v36);
      *(_DWORD *)(v4 + 92) = 500;
    }
    *(_QWORD *)(v4 + 384) = *(_QWORD *)(v4 + 248);
    *(_QWORD *)(v4 + 392) = v4;
    *(_QWORD *)(v4 + 400) = HUBHTX_ClearTTBuffer;
    *(_QWORD *)(v4 + 544) = HUBPDO_NoPingResponse;
    LOWORD(v33) = 2000;
    LOWORD(v32) = 256;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v36,
           &GUID_HUB_CONTROLLERSTACK_INTERFACE,
           v4 + 352,
           v32,
           v33,
           0LL) >= 0
      || (LOWORD(v33) = 1000,
          LOWORD(v32) = 256,
          v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
                  WdfDriverGlobals,
                  v36,
                  &GUID_HUB_CONTROLLERSTACK_INTERFACE,
                  v4 + 352,
                  v32,
                  v33,
                  0LL),
          DeviceCapabilities = v24,
          v24 >= 0) )
    {
      if ( *(_BYTE *)(v4 + 240) )
        v34 = 0LL;
      else
        v34 = *(_QWORD *)(v4 + 248);
      LOWORD(v33) = 3;
      LOWORD(v32) = 96;
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, _DWORD, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
              WdfDriverGlobals,
              v36,
              &USB_BUS_INTERFACE_USBDI_GUID,
              v4 + 608,
              v32,
              v33,
              v34);
      DeviceCapabilities = v25;
      if ( v25 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v10 = 19;
        LODWORD(v33) = v25;
LABEL_32:
        v11 = *(_QWORD *)(v4 + 2528);
        v12 = 3;
        goto LABEL_7;
      }
      *(_QWORD *)&v43 = 0LL;
      *((_QWORD *)&v43 + 1) = 0x100000002LL;
      LODWORD(v50[0]) = 96;
      v42 = 0LL;
      LODWORD(v42) = 56;
      BYTE5(v50[1]) = 1;
      v50[5] = HUBFDO_EvtIoDeviceControl;
      v50[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
      *(_QWORD *)((char *)v50 + 4) = 1LL;
      v45 = off_14006C290;
      v44 = 0LL;
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64))(WdfFunctions_01015 + 1216))(
              WdfDriverGlobals,
              v36,
              v50,
              &v42,
              v4 + 2408);
      DeviceCapabilities = v24;
      if ( v24 >= 0 )
      {
        v58 = GUID_BUS_TYPE_USB;
        v59 = 15LL;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
          WdfDriverGlobals,
          v36,
          &v58);
        HSMMUX_InitializeHSMMuxContext(v4);
        DeviceCapabilities = HUBMISC_InitializeHsm(v4);
        if ( DeviceCapabilities < 0 )
          goto LABEL_54;
        v26 = PoDirectedDripsSetDeviceFlags(*(_QWORD *)(v4 + 24), 2LL);
        if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v33) = v26;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v4 + 2528),
            2u,
            3u,
            0x15u,
            (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
            v33);
        }
        v41 = 0LL;
        v39 = 0LL;
        v40[0] = 0x100000001LL;
        *(_OWORD *)&v40[1] = (unsigned __int64)v36;
        v38 = 0LL;
        LODWORD(v38) = 56;
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 104))(
                WdfDriverGlobals,
                &v38,
                v4 + 2744);
        DeviceCapabilities = v24;
        if ( v24 >= 0 )
        {
          v41 = 0LL;
          v39 = 0LL;
          v40[0] = 0x100000001LL;
          *(_OWORD *)&v40[1] = (unsigned __int64)v36;
          v38 = 0LL;
          LODWORD(v38) = 56;
          v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
                  WdfDriverGlobals,
                  &v38,
                  v4 + 2752);
          DeviceCapabilities = v27;
          if ( v27 >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(v4 + 40), 0x20u);
            KeResetEvent((PRKEVENT)(v4 + 1160));
            HUBSM_AddHsmEvent(v4, 2023);
            v28 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                                  WdfDriverGlobals,
                                  v4);
            HUBMISC_WaitForSignal((PVOID)(v4 + 1160), "Hub FDO PnpCallback", v28);
            DeviceCapabilities = *(_DWORD *)(v4 + 1184);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v33) = v27;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v4 + 2528),
                2u,
                3u,
                0x17u,
                (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                v33);
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
              WdfDriverGlobals,
              *(_QWORD *)(v4 + 2744));
          }
          goto LABEL_54;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v10 = 22;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v10 = 20;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v10 = 18;
    }
    LODWORD(v33) = v24;
    goto LABEL_32;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v10 = 14;
    goto LABEL_6;
  }
LABEL_54:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    if ( v4 )
      v29 = *(_QWORD *)(v4 + 248);
    else
      v29 = 0LL;
    LODWORD(v32) = DeviceCapabilities;
    McTemplateK0pq_EtwWriteTransfer(v6, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v29, v32);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v4 && *(_DWORD *)(v4 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v4 + 96) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_14006C1E8);
      LODWORD(v33) = DeviceCapabilities;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v30 + 64),
        2u,
        3u,
        0x18u,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v33);
    }
  }
  return (unsigned int)DeviceCapabilities;
}
