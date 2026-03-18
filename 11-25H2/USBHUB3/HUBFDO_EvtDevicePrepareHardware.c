/*
 * XREFs of HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x140001AD8 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x140002058 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pqun_EtwWriteTransfer @ 0x1400020D4 (McTemplateK0pqun_EtwWriteTransfer.c)
 *     McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer @ 0x140002164 (McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1400023C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBPARENT_GetHubSymbolicLinkName @ 0x1400075F4 (HUBPARENT_GetHubSymbolicLinkName.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddHsmEvent @ 0x14000AD40 (HUBSM_AddHsmEvent.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     HUBFDO_AssignUsb4PortMappingProperty @ 0x14007A80C (HUBFDO_AssignUsb4PortMappingProperty.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FD00 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1400804F0 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 *     HUBFDO_SetFriendlyNameForBlockedHub @ 0x140080840 (HUBFDO_SetFriendlyNameForBlockedHub.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x14008605C (HUBCONNECTOR_MapHubPorts.c)
 *     HUBREG_QueryValuesInHubHardwareKey @ 0x14008BDAC (HUBREG_QueryValuesInHubHardwareKey.c)
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x14008C050 (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008EAD4 (HUBACPI_GetAcpiPortAttributes.c)
 *     WMI_RegisterHub @ 0x1400901A0 (WMI_RegisterHub.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140090AAC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 */

__int64 __fastcall HUBFDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  const WCHAR *v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  const void *v9; // rax
  int v10; // esi
  int v11; // edx
  __int64 Pool2; // rax
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int FirmwareUpdateDevice; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  char v23; // r14
  char v24; // r13
  int v25; // eax
  int v26; // ecx
  const char *v27; // r8
  const char *v28; // rax
  const char *v29; // rdx
  int v30; // r11d
  int v31; // r15d
  int v32; // r9d
  int v33; // r10d
  __int16 v34; // r12
  char v35; // r13
  int v36; // ecx
  const char *v37; // r8
  const char *v38; // rax
  const char *v39; // rdx
  int v40; // r11d
  int v41; // r15d
  int v42; // r9d
  int v43; // r10d
  __int16 v44; // r12
  char v45; // r13
  __int64 v46; // rdx
  void *v47; // rax
  void *v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // r8
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v55; // [rsp+28h] [rbp-120h]
  __int64 *v56; // [rsp+30h] [rbp-118h]
  char v57; // [rsp+C8h] [rbp-80h]
  char v58; // [rsp+C8h] [rbp-80h]
  char v59; // [rsp+C9h] [rbp-7Fh]
  int v60; // [rsp+CCh] [rbp-7Ch]
  int v61; // [rsp+CCh] [rbp-7Ch]
  int AcpiPortAttributes; // [rsp+D0h] [rbp-78h]
  char v63; // [rsp+D4h] [rbp-74h]
  char v64; // [rsp+D8h] [rbp-70h]
  char v65; // [rsp+DCh] [rbp-6Ch]
  char v66; // [rsp+E0h] [rbp-68h]
  char v67; // [rsp+E4h] [rbp-64h]
  char v68; // [rsp+E8h] [rbp-60h]
  char v69; // [rsp+ECh] [rbp-5Ch]
  char v70; // [rsp+F0h] [rbp-58h]
  __int64 v71; // [rsp+F8h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+110h] [rbp-38h] BYREF
  __int64 v74; // [rsp+120h] [rbp-28h]
  char v75; // [rsp+170h] [rbp+28h]
  char v76; // [rsp+170h] [rbp+28h]

  SourceString = 0LL;
  v71 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C198);
  v4 = v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v2 + 248));
  HUBREG_QueryValuesInHubHardwareKey(v4);
  HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey(v4);
  v56 = &v71;
  HIDWORD(v55) = 0;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 656))(
         WdfDriverGlobals,
         a1,
         22LL);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2528),
        2u,
        3u,
        0x29u,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v56);
    }
  }
  else
  {
    DestinationString = 0LL;
    v6 = (const WCHAR *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          v71,
                          0LL);
    RtlInitUnicodeString(&DestinationString, v6);
    if ( RtlEqualUnicodeString(&DestinationString, &g_SystemContainerId, 1u) )
      *(_DWORD *)(v4 + 44) |= 0x100u;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v71);
  }
  if ( *(_BYTE *)(v4 + 240) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) + 24LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 8) + 204LL) & 0x800) == 0 )
      goto LABEL_17;
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
      v8 = ((*(_DWORD *)(v7 + 2724) - 2) & 0xFFFFFFFD) == 0;
    else
      v8 = (*(_DWORD *)(v7 + 1636) & 0x200000) == 0;
  }
  else
  {
    v8 = (*(_DWORD *)(v4 + 44) & 0x100) == 0;
  }
  if ( v8 )
    _InterlockedOr((volatile signed __int32 *)(v4 + 2504), 1u);
LABEL_17:
  KeResetEvent((PRKEVENT)(v4 + 1160));
  HUBSM_AddHsmEvent(v4, 2031);
  v9 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v4);
  HUBMISC_WaitForSignal((PVOID)(v4 + 1160), "Hub FDO PnpCallback", v9);
  v10 = *(_DWORD *)(v4 + 1184);
  AcpiPortAttributes = v10;
  if ( v10 < 0 )
    goto LABEL_44;
  if ( (*(_DWORD *)(v4 + 40) & 0x800000) != 0 )
    HUBFDO_SetFriendlyNameForBlockedHub(v4);
  RtlInitUnicodeString(&SourceString, 0LL);
  HUBPARENT_GetHubSymbolicLinkName(v4);
  if ( !SourceString.Length )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2528), v11, 3, 42, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    }
    v10 = -1073741823;
LABEL_24:
    AcpiPortAttributes = v10;
    goto LABEL_44;
  }
  Pool2 = ExAllocatePool2(64LL, 2LL * SourceString.Length, 1748191317LL);
  *(_QWORD *)(v4 + 2560) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2528), v13, 3, 43, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    }
    v10 = -1073741670;
    goto LABEL_24;
  }
  *(_WORD *)(v4 + 2552) = 0;
  *(_WORD *)(v4 + 2554) = SourceString.Length;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 2552), &SourceString);
  AcpiPortAttributes = HUBACPI_GetAcpiPortAttributes(v4);
  v10 = AcpiPortAttributes;
  if ( AcpiPortAttributes >= 0 )
  {
    HUBCONNECTOR_MapHubPorts(v4);
    HUBFDO_MapDvsecUsb4Hosts(v4);
    v15 = HUBFDO_AssignUsb4PortMappingProperty(v4);
    if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2528),
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v56);
    }
    WMI_RegisterHub(a1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 560))(*(_QWORD *)(v4 + 248)) )
      _InterlockedOr((volatile signed __int32 *)(v4 + 768), 1u);
    if ( *(_BYTE *)(v4 + 2736) == 1 )
    {
      if ( *(_BYTE *)(v4 + 240) )
      {
        if ( *(_DWORD *)(v4 + 160) )
        {
          if ( !*(_QWORD *)(v4 + 2664) )
          {
            FirmwareUpdateDevice = FWUPDATE_CreateFirmwareUpdateDevice(v4);
            if ( FirmwareUpdateDevice < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v56) = FirmwareUpdateDevice;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v4 + 2528),
                2u,
                2u,
                0x2Eu,
                (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
                v56);
            }
          }
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 2528), v14, 3, 44, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
  }
LABEL_44:
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  v74 = v17;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v17 + 32),
    0LL);
  if ( (*(_DWORD *)(v17 + 4) & 0x1000) != 0 && v10 >= 0 )
  {
    if ( *(_DWORD *)(v4 + 2224) == 1 )
    {
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
      {
        LODWORD(v55) = 71;
        McTemplateK0pnq_EtwWriteTransfer(
          v4 + 1188,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB20_HUB_INFORMATION,
          0LL,
          *(_QWORD *)(v4 + 248),
          v55,
          v4 + 1188,
          *(_DWORD *)(v4 + 2608));
      }
    }
    else
    {
      v18 = (unsigned int)(*(_DWORD *)(v4 + 2224) - 2);
      if ( *(_DWORD *)(v4 + 2224) == 2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v55) = 12;
          McTemplateK0pnq_EtwWriteTransfer(
            v4 + 1188,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_USB30_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v55,
            v4 + 1188,
            *(_DWORD *)(v4 + 2608));
        }
      }
      else if ( *(_DWORD *)(v4 + 2224) == 4 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v55) = *(_DWORD *)(v4 + 2608);
          McTemplateK0pq_EtwWriteTransfer(
            v18,
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ROOT_HUB_INFORMATION,
            0LL,
            *(_QWORD *)(v4 + 248),
            v55);
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x20) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(
          v18,
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_UNKNOWN_HUB_TYPE,
          0LL,
          *(_QWORD *)(v4 + 248));
      }
    }
    v19 = v4 + 2368;
    v20 = *(_QWORD *)(v4 + 2368);
    v21 = v20 - 248;
    if ( v4 + 2368 != v20 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 204);
        if ( (v22 & 2) != 0 )
        {
          v23 = 1;
          if ( (v22 & 0x1000) != 0 && (*(_DWORD *)(v4 + 44) & 0x200) != 0 )
          {
            v24 = 1;
            goto LABEL_64;
          }
        }
        else
        {
          v23 = 0;
        }
        v24 = 0;
LABEL_64:
        v25 = *(_DWORD *)(v21 + 1256);
        v59 = v24;
        if ( v25 == 3000 )
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
            goto LABEL_93;
          v36 = *(_DWORD *)(v4 + 168);
          if ( v36 == 2 )
          {
            v37 = (const char *)(v4 + 176);
            v38 = (const char *)(v4 + 181);
            v39 = (const char *)(v4 + 186);
            goto LABEL_82;
          }
          v39 = 0LL;
          v38 = 0LL;
          v37 = 0LL;
          if ( v36 == 1 )
          {
            v42 = *(_DWORD *)(v4 + 192);
            v43 = *(_DWORD *)(v4 + 196);
            v40 = *(_DWORD *)(v4 + 176);
            v41 = *(_DWORD *)(v4 + 180);
            v44 = *(_WORD *)(v4 + 184);
            v61 = *(_DWORD *)(v4 + 188);
          }
          else
          {
LABEL_82:
            LOBYTE(v40) = -1;
            LOBYTE(v61) = 0;
            LOBYTE(v41) = -1;
            LOBYTE(v42) = 0;
            LOBYTE(v43) = 0;
            LOBYTE(v44) = 0;
          }
          if ( v24 )
          {
            v76 = *(_BYTE *)(v21 + 1344) & 3;
            v67 = (*(_DWORD *)(v21 + 1344) & 8) != 0;
            v58 = 1;
            v68 = (*(_DWORD *)(v21 + 1344) & 0x20) != 0;
            v69 = (*(_DWORD *)(v21 + 1344) & 4) != 0;
            v70 = (*(_DWORD *)(v21 + 1344) & 0x10) != 0;
          }
          else
          {
            v76 = 0;
            v67 = 0;
            v68 = 0;
            v69 = 0;
            v70 = 0;
            v58 = 0;
          }
          if ( v23 )
            v45 = *(_BYTE *)(v21 + 1341);
          else
            v45 = 0;
          McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_20_PORT_V2,
            0LL,
            *(_QWORD *)(v4 + 248),
            *(_WORD *)(v21 + 200),
            v23,
            v45,
            v58,
            v70,
            v69,
            v68,
            v67,
            v76,
            *(_QWORD *)(v21 + 1416),
            *(_DWORD *)(v4 + 168),
            v61,
            v42,
            v43,
            v40,
            v41,
            v44,
            v37,
            v38,
            v39);
          goto LABEL_92;
        }
        if ( v25 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) == 0 )
          goto LABEL_93;
        v26 = *(_DWORD *)(v4 + 168);
        if ( v26 == 2 )
        {
          v27 = (const char *)(v4 + 176);
          v28 = (const char *)(v4 + 181);
          v29 = (const char *)(v4 + 186);
        }
        else
        {
          v29 = 0LL;
          v28 = 0LL;
          v27 = 0LL;
          if ( v26 == 1 )
          {
            v32 = *(_DWORD *)(v4 + 192);
            v33 = *(_DWORD *)(v4 + 196);
            v30 = *(_DWORD *)(v4 + 176);
            v31 = *(_DWORD *)(v4 + 180);
            v34 = *(_WORD *)(v4 + 184);
            v60 = *(_DWORD *)(v4 + 188);
            goto LABEL_70;
          }
        }
        LOBYTE(v30) = -1;
        LOBYTE(v60) = 0;
        LOBYTE(v31) = -1;
        LOBYTE(v32) = 0;
        LOBYTE(v33) = 0;
        LOBYTE(v34) = 0;
LABEL_70:
        if ( v24 )
        {
          v75 = *(_BYTE *)(v21 + 1344) & 3;
          v63 = (*(_DWORD *)(v21 + 1344) & 8) != 0;
          v57 = 1;
          v64 = (*(_DWORD *)(v21 + 1344) & 0x20) != 0;
          v65 = (*(_DWORD *)(v21 + 1344) & 4) != 0;
          v66 = (*(_DWORD *)(v21 + 1344) & 0x10) != 0;
        }
        else
        {
          v75 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v57 = 0;
        }
        if ( v23 )
          v35 = *(_BYTE *)(v21 + 1341);
        else
          v35 = 0;
        McTemplateK0pquuuuuuuuxqqqqqqqsss_EtwWriteTransfer(
          *(unsigned __int16 *)(v21 + 200),
          &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_30_PORT_V2,
          0LL,
          *(_QWORD *)(v4 + 248),
          *(_WORD *)(v21 + 200),
          v23,
          v35,
          v57,
          v66,
          v65,
          v64,
          v63,
          v75,
          *(_QWORD *)(v21 + 1416),
          *(_DWORD *)(v4 + 168),
          v60,
          v32,
          v33,
          v30,
          v31,
          v34,
          v27,
          v28,
          v29);
LABEL_92:
        v19 = v4 + 2368;
LABEL_93:
        if ( v23 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LOBYTE(v56) = v59;
          LODWORD(v55) = *(unsigned __int16 *)(v21 + 200);
          McTemplateK0pqun_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_UPC_V1,
            0LL,
            *(_QWORD *)(v4 + 248),
            v55,
            v56);
        }
        if ( (*(_DWORD *)(v21 + 204) & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
        {
          LODWORD(v55) = *(unsigned __int16 *)(v21 + 200);
          McTemplateK0pqn_EtwWriteTransfer(
            *(unsigned __int16 *)(v21 + 200),
            &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_PLD,
            0LL,
            *(_QWORD *)(v4 + 248),
            v55);
        }
        if ( (*(_DWORD *)(v21 + 204) & 0x800) != 0 )
        {
          v46 = *(_QWORD *)(v21 + 1464);
          DestinationString = 0LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
            WdfDriverGlobals,
            v46,
            &DestinationString);
          v47 = (void *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
          v48 = v47;
          if ( v47 )
          {
            memmove(v47, DestinationString.Buffer, DestinationString.Length);
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
            {
              LODWORD(v55) = *(unsigned __int16 *)(v21 + 200);
              McTemplateK0pqz_EtwWriteTransfer(
                *(unsigned __int16 *)(v21 + 200),
                &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_ACPI_DSD_USB4,
                0LL,
                *(_QWORD *)(v4 + 248),
                v55,
                v48);
            }
            ExFreePoolWithTag(v48, 0x64334855u);
          }
        }
        v49 = *(_QWORD *)(v21 + 248);
        v21 = v49 - 248;
        if ( v19 == v49 )
        {
          v10 = AcpiPortAttributes;
          v17 = v74;
          break;
        }
      }
    }
  }
  v50 = *(_QWORD **)(v17 + 24);
  v51 = (_QWORD *)(v4 + 2440);
  if ( *v50 != v17 + 16 )
    __fastfail(3u);
  *v51 = v17 + 16;
  *(_QWORD *)(v4 + 2448) = v50;
  *v50 = v51;
  *(_QWORD *)(v17 + 24) = v51;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v17 + 32));
  if ( v10 >= 0 )
  {
    v53 = HUBFDO_RegisterSleepstudyBlockerReasons(*(_QWORD *)(v4 + 24), v4);
    if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = v53;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 2528),
        2u,
        2u,
        0x2Fu,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v56);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v55) = v10;
    McTemplateK0pq_EtwWriteTransfer(
      v52,
      &USBHUB3_ETW_EVENT_HUB_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v4 + 248),
      v55);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v56) = *(_DWORD *)(v4 + 40);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 2528),
      2u,
      3u,
      0x30u,
      (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
      v56);
  }
  return (unsigned int)v10;
}
