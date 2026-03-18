/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1400811E8
 * Callers:
 *     HUBPDO_CreatePdo @ 0x140081124 (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1400824B8 (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x14001A4F0 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x14001A654 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CCA0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x14001DEC0 (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBIDLE_AddEvent @ 0x14003FADC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBPDO_AssignPDOIds @ 0x140080A64 (HUBPDO_AssignPDOIds.c)
 *     HUBPDO_MakePdoName @ 0x140084984 (HUBPDO_MakePdoName.c)
 *     HUBREG_SetVidPidRevForPort @ 0x14008C380 (HUBREG_SetVidPidRevForPort.c)
 *     WMI_FireNotification @ 0x14008FB20 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(_QWORD *a1, char a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // r15d
  char v5; // r12
  char v6; // r14
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  unsigned __int16 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rax
  int PdoName; // eax
  unsigned __int16 v21; // r9
  __int64 v22; // r15
  int v23; // edi
  int v24; // eax
  char v25; // cl
  int v26; // eax
  unsigned __int16 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r9
  __int16 v32; // cx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // ecx
  BOOL v40; // eax
  BOOL v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  struct _KEVENT *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  int *v48; // rdx
  __int64 v49; // rbx
  int v50; // eax
  unsigned __int16 *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // edi
  __int64 v55; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  __int64 v58; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v60; // [rsp+98h] [rbp-70h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v62[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-40h]
  void *v64; // [rsp+D8h] [rbp-30h]
  __int64 v65; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v66; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v67; // [rsp+F8h] [rbp-10h]
  __int128 v68; // [rsp+108h] [rbp+0h]
  __int128 v69; // [rsp+118h] [rbp+10h] BYREF
  __int64 v70; // [rsp+128h] [rbp+20h]
  __int128 v71; // [rsp+130h] [rbp+28h] BYREF
  __int128 v72; // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v73)(__int64, wchar_t **); // [rsp+150h] [rbp+48h]
  __int64 v74; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v75; // [rsp+160h] [rbp+58h]
  __int128 v76; // [rsp+168h] [rbp+60h] BYREF
  __int128 v77; // [rsp+178h] [rbp+70h]
  __int128 v78; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall *v79)(__int64); // [rsp+198h] [rbp+90h]
  __int64 (__fastcall *v80)(); // [rsp+1A0h] [rbp+98h]
  _QWORD v81[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v82[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v83[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v84[10]; // [rsp+328h] [rbp+220h] BYREF
  __int128 v85; // [rsp+378h] [rbp+270h] BYREF
  __int128 v86; // [rsp+388h] [rbp+280h]
  __int128 v87; // [rsp+398h] [rbp+290h]
  int v88; // [rsp+3A8h] [rbp+2A0h]
  int v89; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v90[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v91; // [rsp+3C8h] [rbp+2C0h]

  v3 = a1;
  v75 = a1;
  memset(v81, 0, 0x8CuLL);
  v76 = 0LL;
  v79 = 0LL;
  v77 = 0LL;
  LODWORD(v80) = 0;
  v78 = 0LL;
  LODWORD(v64) = 0;
  memset(v62, 0, sizeof(v62));
  v63 = 0LL;
  memset(v82, 0, sizeof(v82));
  v74 = 0LL;
  v4 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  memset(v84, 0, sizeof(v84));
  memset(v83, 0, sizeof(v83));
  v65 = 0LL;
  v5 = 0;
  v6 = 0;
  v73 = 0LL;
  v7 = 0;
  *(_QWORD *)&v68 = 0LL;
  v60 = 0LL;
  DWORD2(v68) = 0;
  LODWORD(v70) = 0;
  v8 = v3[1];
  v71 = 0LL;
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v69 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(v8 + 1336), 0xFFFFFF7F);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)v3 + 409, 2u);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) != 0 && (v3[204] & 0x20) != 0 )
      HUBREG_SetVidPidRevForPort(v3);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v3 + 409, 0xFFFFFFFD);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) == 0 || (v3[204] & 0x20) == 0 )
      WMI_FireNotification(*v3, *(unsigned __int16 *)(v3[1] + 200LL), 0LL);
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
  v61 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v9);
  if ( !v61 )
  {
    v11 = -1073741670;
    goto LABEL_39;
  }
  v6 = 1;
  memset(v81, 0, sizeof(v81));
  v81[1] = HUBPDO_EvtDeviceD0Entry;
  v81[3] = HUBPDO_EvtDeviceD0Exit;
  v81[5] = HUBPDO_EvtDevicePrepareHardware;
  v81[6] = HUBPDO_EvtDeviceReleaseHardware;
  v81[12] = HUBPDO_EvtDeviceSurpriseRemoval;
  v81[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v81[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v81[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
  v81[17] = HUBPDO_EvtDeviceUsageNotificationEx;
  v81[14] = HUBPDO_EvtDeviceQueryStop;
  v81[13] = HUBPDO_EvtDeviceQueryRemove;
  LODWORD(v81[0]) = 144;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WdfDriverGlobals,
    v61,
    v81);
  v76 = 0x40uLL;
  *((_QWORD *)&v77 + 1) = 0LL;
  *(_QWORD *)&v78 = 0LL;
  *((_QWORD *)&v78 + 1) = HUBPDO_EvtDeviceEnableWakeAtBus;
  v79 = HUBPDO_EvtDeviceDisableWakeAtBus;
  v80 = HUBPDO_EvtDeviceReportedMissing;
  *(_QWORD *)&v77 = HUBPDO_EvtDeviceResourceRequirementsQuery;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 1688))(
    WdfDriverGlobals,
    v61,
    &v76);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
    WdfDriverGlobals,
    v61,
    34LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(WdfDriverGlobals, v61, 0LL);
  LOBYTE(v12) = 15;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v61,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v12,
          0LL,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 125;
    goto LABEL_13;
  }
  LOBYTE(v14) = 14;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v61,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v14,
          0LL,
          0);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 126;
    goto LABEL_13;
  }
  v90[0] = 419564552;
  LOBYTE(v16) = 27;
  v90[1] = 336271104;
  v91 = 19;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v61,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v16,
          v90,
          9);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 127;
    goto LABEL_13;
  }
  LOBYTE(v90[0]) = 2;
  LOBYTE(v17) = 22;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v61,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v17,
          v90,
          1);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 128;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v61);
  v65 = 0x100000008LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
    WdfDriverGlobals,
    v61,
    &v65);
  v13 = HUBPDO_AssignPDOIds((__int64)v3, v61);
  v11 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v15 = 129;
LABEL_13:
    LODWORD(v58) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v15,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v58);
    v6 = 1;
    goto LABEL_39;
  }
  if ( (*((_DWORD *)v3 + 409) & 2) == 0 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
            WdfDriverGlobals,
            v61,
            &GUID_DEVCLASS_UNKNOWN);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v58) = v18;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        3u,
        2u,
        0x82u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v58);
    }
  }
  *(_QWORD *)&v62[1] = 0LL;
  v64 = off_14006C0F8;
  *((_QWORD *)&v62[0] + 1) = HUBPDO_EvtDeviceCleanup;
  v63 = 0LL;
  *(_QWORD *)&v62[0] = 56LL;
  *((_QWORD *)&v62[1] + 1) = 0x100000001LL;
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v19,
    "DSM PDO Tag",
    8901LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v7 = 1;
  while ( 1 )
  {
    PdoName = HUBPDO_MakePdoName(v3, v61, v4);
    v11 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 131;
      goto LABEL_37;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                WdfDriverGlobals,
                v61,
                &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v11 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 132;
      goto LABEL_37;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _OWORD *, unsigned __int64 *))(WdfFunctions_01015 + 600))(
                WdfDriverGlobals,
                &v61,
                v62,
                &v60);
    v11 = PdoName;
    if ( PdoName >= 0 )
      break;
    ++v4;
    if ( PdoName != -1073741771 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 133;
        goto LABEL_37;
      }
LABEL_38:
      v6 = v7;
      goto LABEL_39;
    }
  }
  v5 = 1;
  v7 = 0;
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v60,
          off_14006C0F8);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v22 + 424), 0x55535257u, 0, 0, 0x20u);
  memset((void *)(v22 + 456), 0, 0x50uLL);
  *(_BYTE *)(v22 + 536) = 0;
  v23 = *((_DWORD *)v3 + 408);
  if ( (v23 & 2) != 0 )
  {
    memset(v83, 0, sizeof(v83));
    v83[2] = HUBFDO_GetPortStatusForDebuggingComplete;
    LODWORD(v83[0]) = 66388112;
    v83[3] = HUBFDO_GetPortStatusForDebuggingComplete;
    v24 = *((_DWORD *)v3 + 43);
    v25 = *(_BYTE *)(*v3 + 240LL) + 1;
    v83[17] = 0LL;
    LODWORD(v83[6]) = v24;
    v83[5] = v3[3];
    *((_QWORD *)&v66 + 1) = v83;
    LOBYTE(v83[4]) = v25;
    *((_QWORD *)&v67 + 1) = 0LL;
    *(_QWORD *)&v67 = &GUID_HUB_PARENT_INTERFACE;
    *(_QWORD *)&v68 = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
    BYTE5(v83[6]) = (v23 & 0x1000) != 0;
    *(_QWORD *)&v66 = 48LL;
    *((_QWORD *)&v68 + 1) = 1LL;
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
            WdfDriverGlobals,
            v60,
            &v66);
    v11 = v26;
    if ( v26 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 134;
        goto LABEL_46;
      }
      goto LABEL_47;
    }
  }
  *(_QWORD *)&v72 = HUBFDO_GetPortStatusForDebuggingComplete;
  *((_QWORD *)&v67 + 1) = 0LL;
  *((_QWORD *)&v72 + 1) = HUBFDO_GetPortStatusForDebuggingComplete;
  v73 = HUBPDO_GetLocationString;
  *((_QWORD *)&v66 + 1) = &v71;
  *(_QWORD *)&v67 = &GUID_PNP_LOCATION_INTERFACE;
  v68 = 0uLL;
  *(_QWORD *)&v71 = 65576LL;
  *((_QWORD *)&v71 + 1) = v3;
  *(_QWORD *)&v66 = 48LL;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
          WdfDriverGlobals,
          v60,
          &v66);
  v11 = v26;
  if ( v26 >= 0 )
  {
    LOBYTE(v28) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v60,
      1LL,
      v28);
    LOBYTE(v29) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v60,
      2LL,
      v29);
    LOBYTE(v30) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v60,
      3LL,
      v30);
    LOBYTE(v31) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v60,
      4LL,
      v31);
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 16) = *v3;
    v32 = *(_WORD *)(v3[1] + 200LL);
    *(_DWORD *)(v22 + 388) = -1;
    *(_WORD *)(v22 + 48) = v32;
    *(_DWORD *)(v22 + 384) = 5;
    if ( a2 )
      *(_QWORD *)(v22 + 8) = *(_QWORD *)(*v3 + 2456LL);
    else
      *(_BYTE *)v22 = 1;
    v3[2] = v22;
    memset(v82, 0, sizeof(v82));
    LODWORD(v82[0]) = 96;
    BYTE5(v82[1]) = 1;
    *(_QWORD *)((char *)v82 + 4) = 1LL;
    v82[6] = HUBPDO_EvtIoInternalDeviceControl;
    v82[5] = HUBPDO_EvtIoDeviceControl;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
                WdfDriverGlobals,
                v60,
                v82,
                0LL,
                &v74);
    v11 = PdoName;
    if ( PdoName >= 0 )
    {
      v33 = *((_DWORD *)v3 + 408);
      *(_QWORD *)&v85 = 0x200000030LL;
      DWORD2(v85) = 2;
      LODWORD(v86) = 2;
      *((_QWORD *)&v86 + 1) = 2LL;
      *(_QWORD *)&v87 = 0x200000002LL;
      DWORD1(v86) = ((unsigned __int8)v33 >> 6) & 1;
      v34 = v3[1];
      HIDWORD(v85) = ((unsigned __int8)~(_BYTE)v33 >> 5) & 1;
      *((_QWORD *)&v87 + 1) = *(unsigned __int16 *)(v34 + 200) | 0xFFFFFFFF00000000uLL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 664))(
        WdfDriverGlobals,
        v60,
        &v85);
      memset(v84, 0, sizeof(v84));
      v35 = 2LL;
      v36 = (v3[204] & 0x102) == 0;
      v84[7] = 0x700000005LL;
      LODWORD(v37) = 2;
      v38 = *v3;
      *(__m128i *)((char *)&v84[3] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v84[8] = -1LL;
      v84[9] = 0x5FFFFFFFFLL;
      LODWORD(v84[0]) = 80;
      *(_QWORD *)((char *)v84 + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v84[1] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v84[2] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v84[5] + 4) = *(_QWORD *)((char *)&v84[3] + 4);
      HIDWORD(v84[6]) = _mm_cvtsi128_si32(*(__m128i *)((char *)&v84[3] + 4));
      v39 = *(_DWORD *)(v38 + 748);
      HIDWORD(v84[7]) = v39;
      LODWORD(v84[4]) = 1;
      v84[8] = 0LL;
      LODWORD(v84[9]) = 0;
      if ( v36 )
      {
        LODWORD(v84[7]) = 1;
        *(_QWORD *)((char *)&v84[1] + 4) = 1LL;
        *(_QWORD *)((char *)&v84[2] + 4) = 0LL;
        *(_QWORD *)((char *)v84 + 4) = 0LL;
        while ( 1 )
        {
          v40 = (int)v37 > v39;
          LODWORD(v37) = v37 + 1;
          *((_DWORD *)&v84[3] + ++v35) = v40 + 3;
          if ( v35 > 6 )
            break;
          v39 = HIDWORD(v84[7]);
        }
      }
      else
      {
        LODWORD(v84[7]) = 3;
        *(_QWORD *)((char *)&v84[1] + 4) = 0x100000001LL;
        *(_QWORD *)((char *)&v84[2] + 4) = 1LL;
        *(_QWORD *)((char *)v84 + 4) = 0x100000001LL;
        while ( 1 )
        {
          v41 = (int)v37 > v39;
          v37 = (unsigned int)(v37 + 1);
          *((_DWORD *)&v84[3] + ++v35) = v41 + 3;
          if ( v35 > 6 )
            break;
          v39 = HIDWORD(v84[7]);
        }
        if ( (v3[182] & 0x800) != 0 )
        {
          v64 = off_14006C310;
          v63 = v60;
          v42 = *v3;
          *(_OWORD *)((char *)v62 + 4) = 0LL;
          *(_QWORD *)((char *)&v62[1] + 4) = 0x100000000LL;
          LODWORD(v62[0]) = 56;
          HIDWORD(v62[1]) = 1;
          v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 336))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v42 + 16),
                  v37);
          v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                  WdfDriverGlobals,
                  v62,
                  v43,
                  v22 + 264);
          v11 = v44;
          if ( v44 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v58) = v44;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v3[1] + 1432LL),
                2u,
                2u,
                0x89u,
                (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
                v58);
            }
            *(_QWORD *)(v22 + 264) = 0LL;
            goto LABEL_38;
          }
          v45 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(v22 + 264),
                                    off_14006C310);
          KeInitializeEvent(v45 + 1, NotificationEvent, 0);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *))(WdfFunctions_01015 + 672))(
        WdfDriverGlobals,
        v60,
        v84);
      KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 208));
      *(_DWORD *)(v22 + 216) = 6000;
      *(_QWORD *)(v22 + 224) = &ISMStateTable;
      *(_DWORD *)(v22 + 232) = 6000;
      v64 = off_14006C2E8;
      v63 = v60;
      HIDWORD(v62[1]) = 1;
      v70 = 1LL;
      *((_QWORD *)&v69 + 1) = HUBIDLE_EvtIdleWorkItem;
      *(_OWORD *)((char *)v62 + 4) = 0LL;
      *(_QWORD *)((char *)&v62[1] + 4) = 0x100000000LL;
      LODWORD(v62[0]) = 56;
      *(_QWORD *)&v69 = 24LL;
      v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v69,
              v62,
              v22 + 256);
      v11 = v46;
      if ( v46 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v58) = v46;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            2u,
            2u,
            0x8Au,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v58);
        }
        *(_QWORD *)(v22 + 256) = 0LL;
        goto LABEL_38;
      }
      HUBIDLE_AddEvent(v22 + 72, 6009, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v22 + 32), 0x1000u);
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 1064))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*v3 + 16LL),
                  v60);
      v11 = PdoName;
      if ( PdoName >= 0 )
      {
        v47 = *(_QWORD *)(v22 + 16);
        v48 = &v89;
        v49 = 5LL;
        v50 = *(unsigned __int16 *)(v47 + 328);
        v51 = (unsigned __int16 *)(v47 + 330);
        v88 = v50;
        do
        {
          v52 = *v51++;
          *v48++ = v52;
          --v49;
        }
        while ( v49 );
        v3 = v75;
        v53 = *(unsigned __int8 *)(*(_QWORD *)(v22 + 16) + 240LL);
        if ( (unsigned __int8)v53 < 6u )
          *(&v88 + v53) = *(unsigned __int16 *)(v22 + 48);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v58) = HIDWORD(v3);
          WPP_RECORDER_SF_qDDDdddddd(
            *(_QWORD *)(v3[1] + 1432LL),
            *((unsigned __int16 *)v3 + 1000),
            *((unsigned __int16 *)v3 + 999),
            *((unsigned __int16 *)v3 + 998),
            RemlockSize[0]);
        }
        v5 = 0;
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 1u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 2u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 4u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 0x10u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 8u);
        _InterlockedOr((volatile signed __int32 *)v3 + 555, 0x20u);
        if ( (v3[204] & 2) != 0 )
          HUBPDO_RegisterForPowerSettingsForHub(v22);
        else
          HUBPDO_RegisterForPowerSettingsForDevice(v22);
        v6 = 0;
        goto LABEL_39;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 139;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v21 = 136;
    }
LABEL_37:
    LODWORD(v58) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v21,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v58);
    goto LABEL_38;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 135;
LABEL_46:
    LODWORD(v58) = v26;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v27,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v58);
  }
LABEL_47:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v60);
  v6 = 1;
LABEL_39:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v58) = *(unsigned __int16 *)(v3[1] + 200LL);
      McTemplateK0ppqq_EtwWriteTransfer(
        *(unsigned __int16 *)(v3[1] + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)((char *)v3 + 1516),
        *(_QWORD *)(*v3 + 248LL),
        v3[3],
        v58,
        v11);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v11;
    McTemplateK0pq_EtwWriteTransfer(
      v10,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)((char *)v3 + 1516),
      *(_QWORD *)(*v3 + 248LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*((_DWORD *)v3 + 409) & 0x40) != 0 )
  {
    *(_OWORD *)((char *)v3 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)v3 + 409, 0xFFFFFFBF);
  }
  v54 = (v11 >> 31) & 0xFFFFFFF4;
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v61);
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v60);
  if ( v7 )
  {
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v55,
      "DSM PDO Tag",
      9423LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v54 + 4077;
}
