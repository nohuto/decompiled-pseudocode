/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x14008014C
 * Callers:
 *     HUBPDO_CreatePdo @ 0x140080088 (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x140081430 (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014AD8 (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x14001A510 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x14001A674 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x14001CCE0 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x14001DF00 (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBIDLE_AddEvent @ 0x140040318 (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBPDO_AssignPDOIds @ 0x14007FAA4 (HUBPDO_AssignPDOIds.c)
 *     HUBPDO_MakePdoName @ 0x1400838B4 (HUBPDO_MakePdoName.c)
 *     HUBREG_SetVidPidRevForPort @ 0x14008B2D0 (HUBREG_SetVidPidRevForPort.c)
 *     WMI_FireNotification @ 0x14008EA70 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x14008F14C (WMI_FireNotificationOld.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(_QWORD *a1, char a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // r15d
  char v5; // r12
  char v6; // r14
  char v7; // r13
  __int64 v8; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r9
  unsigned __int16 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rax
  int PdoName; // eax
  unsigned __int16 v23; // r9
  __int64 v24; // r15
  int v25; // edi
  int v26; // eax
  char v27; // cl
  int v28; // eax
  unsigned __int16 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  __int16 v34; // cx
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // ecx
  BOOL v42; // eax
  BOOL v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  struct _KEVENT *v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  int *v50; // rdx
  __int64 v51; // rbx
  int v52; // eax
  unsigned __int16 *v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  unsigned int v56; // edi
  __int64 v57; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v62; // [rsp+98h] [rbp-70h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v64[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-40h]
  void *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v68; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v69; // [rsp+F8h] [rbp-10h]
  __int128 v70; // [rsp+108h] [rbp+0h]
  __int128 v71; // [rsp+118h] [rbp+10h] BYREF
  __int64 v72; // [rsp+128h] [rbp+20h]
  __int128 v73; // [rsp+130h] [rbp+28h] BYREF
  __int128 v74; // [rsp+140h] [rbp+38h]
  __int64 (__fastcall *v75)(__int64, wchar_t **); // [rsp+150h] [rbp+48h]
  __int64 v76; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v77; // [rsp+160h] [rbp+58h]
  __int128 v78; // [rsp+168h] [rbp+60h] BYREF
  __int128 v79; // [rsp+178h] [rbp+70h]
  __int128 v80; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall *v81)(__int64); // [rsp+198h] [rbp+90h]
  __int64 (__fastcall *v82)(); // [rsp+1A0h] [rbp+98h]
  _QWORD v83[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v84[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v85[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v86[10]; // [rsp+328h] [rbp+220h] BYREF
  __int128 v87; // [rsp+378h] [rbp+270h] BYREF
  __int128 v88; // [rsp+388h] [rbp+280h]
  __int128 v89; // [rsp+398h] [rbp+290h]
  int v90; // [rsp+3A8h] [rbp+2A0h]
  int v91; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v92[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v93; // [rsp+3C8h] [rbp+2C0h]

  v3 = a1;
  v77 = a1;
  memset(v83, 0, 0x8CuLL);
  v78 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  LODWORD(v82) = 0;
  v80 = 0LL;
  LODWORD(v66) = 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0LL;
  memset(v84, 0, sizeof(v84));
  v76 = 0LL;
  v4 = 0;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  memset(v86, 0, sizeof(v86));
  memset(v85, 0, sizeof(v85));
  v67 = 0LL;
  v5 = 0;
  v6 = 0;
  v75 = 0LL;
  v7 = 0;
  *(_QWORD *)&v70 = 0LL;
  v62 = 0LL;
  DWORD2(v70) = 0;
  LODWORD(v72) = 0;
  v8 = v3[1];
  v73 = 0LL;
  v74 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(v8 + 1336), 0xFFFFFF7F);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)v3 + 411, 2u);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) != 0 && (v3[205] & 0x20) != 0 )
      HUBREG_SetVidPidRevForPort(v3);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v3 + 411, 0xFFFFFFFD);
    if ( (*(_DWORD *)(*v3 + 40LL) & 0x40000) == 0 || (v3[205] & 0x20) == 0 )
    {
      IsEnabledDeviceUsageNoInline = Feature_UH3WET__private_IsEnabledDeviceUsageNoInline();
      v10 = v3[1];
      if ( IsEnabledDeviceUsageNoInline )
        WMI_FireNotification(v10, 0LL);
      else
        WMI_FireNotificationOld(*v3, *(unsigned __int16 *)(v10 + 200), 0LL);
    }
  }
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
  v63 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v11);
  if ( !v63 )
  {
    v13 = -1073741670;
    goto LABEL_41;
  }
  v6 = 1;
  memset(v83, 0, sizeof(v83));
  v83[1] = HUBPDO_EvtDeviceD0Entry;
  v83[3] = HUBPDO_EvtDeviceD0Exit;
  v83[5] = HUBPDO_EvtDevicePrepareHardware;
  v83[6] = HUBPDO_EvtDeviceReleaseHardware;
  v83[12] = HUBPDO_EvtDeviceSurpriseRemoval;
  v83[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v83[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
  v83[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
  v83[17] = HUBPDO_EvtDeviceUsageNotificationEx;
  v83[14] = HUBPDO_EvtDeviceQueryStop;
  v83[13] = HUBPDO_EvtDeviceQueryRemove;
  LODWORD(v83[0]) = 144;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WdfDriverGlobals,
    v63,
    v83);
  v78 = 0x40uLL;
  *((_QWORD *)&v79 + 1) = 0LL;
  *(_QWORD *)&v80 = 0LL;
  *((_QWORD *)&v80 + 1) = HUBPDO_EvtDeviceEnableWakeAtBus;
  v81 = HUBPDO_EvtDeviceDisableWakeAtBus;
  v82 = HUBPDO_EvtDeviceReportedMissing;
  *(_QWORD *)&v79 = HUBPDO_EvtDeviceResourceRequirementsQuery;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 1688))(
    WdfDriverGlobals,
    v63,
    &v78);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
    WdfDriverGlobals,
    v63,
    34LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(WdfDriverGlobals, v63, 0LL);
  LOBYTE(v14) = 15;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v63,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v14,
          0LL,
          0);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v17 = 120;
    goto LABEL_15;
  }
  LOBYTE(v16) = 14;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v63,
          HUBPDO_EvtDeviceWdmIrpPreprocess,
          v16,
          0LL,
          0);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v17 = 121;
    goto LABEL_15;
  }
  v92[0] = 419564552;
  LOBYTE(v18) = 27;
  v92[1] = 336271104;
  v93 = 19;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v63,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v18,
          v92,
          9);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v17 = 122;
    goto LABEL_15;
  }
  LOBYTE(v92[0]) = 2;
  LOBYTE(v19) = 22;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v63,
          HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
          v19,
          v92,
          1);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v17 = 123;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v63);
  v67 = 0x100000008LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
    WdfDriverGlobals,
    v63,
    &v67);
  v15 = HUBPDO_AssignPDOIds((__int64)v3, v63);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_41;
    v17 = 124;
LABEL_15:
    LODWORD(v60) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v17,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v60);
    v6 = 1;
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v3 + 411) & 2) == 0 )
  {
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
            WdfDriverGlobals,
            v63,
            &GUID_DEVCLASS_UNKNOWN);
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v60) = v20;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        3u,
        2u,
        0x7Du,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v60);
    }
  }
  *(_QWORD *)&v64[1] = 0LL;
  v66 = off_14006C0F8;
  *((_QWORD *)&v64[0] + 1) = HUBPDO_EvtDeviceCleanup;
  v65 = 0LL;
  *(_QWORD *)&v64[0] = 56LL;
  *((_QWORD *)&v64[1] + 1) = 0x100000001LL;
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v21,
    "DSM PDO Tag",
    8742LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v7 = 1;
  while ( 1 )
  {
    PdoName = HUBPDO_MakePdoName(v3, v63, v4);
    v13 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v23 = 126;
      goto LABEL_39;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                WdfDriverGlobals,
                v63,
                &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v13 = PdoName;
    if ( PdoName < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v23 = 127;
      goto LABEL_39;
    }
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _OWORD *, unsigned __int64 *))(WdfFunctions_01015 + 600))(
                WdfDriverGlobals,
                &v63,
                v64,
                &v62);
    v13 = PdoName;
    if ( PdoName >= 0 )
      break;
    ++v4;
    if ( PdoName != -1073741771 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 128;
        goto LABEL_39;
      }
LABEL_40:
      v6 = v7;
      goto LABEL_41;
    }
  }
  v5 = 1;
  v7 = 0;
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v62,
          off_14006C0F8);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v24 + 424), 0x55535257u, 0, 0, 0x20u);
  memset((void *)(v24 + 456), 0, 0x50uLL);
  *(_BYTE *)(v24 + 536) = 0;
  v25 = *((_DWORD *)v3 + 410);
  if ( (v25 & 2) != 0 )
  {
    memset(v85, 0, sizeof(v85));
    v85[2] = HUBFDO_GetPortStatusForDebuggingComplete;
    LODWORD(v85[0]) = 66388112;
    v85[3] = HUBFDO_GetPortStatusForDebuggingComplete;
    v26 = *((_DWORD *)v3 + 43);
    v27 = *(_BYTE *)(*v3 + 240LL) + 1;
    v85[17] = 0LL;
    LODWORD(v85[6]) = v26;
    v85[5] = v3[3];
    *((_QWORD *)&v68 + 1) = v85;
    LOBYTE(v85[4]) = v27;
    *((_QWORD *)&v69 + 1) = 0LL;
    *(_QWORD *)&v69 = &GUID_HUB_PARENT_INTERFACE;
    *(_QWORD *)&v70 = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
    BYTE5(v85[6]) = (v25 & 0x1000) != 0;
    *(_QWORD *)&v68 = 48LL;
    *((_QWORD *)&v70 + 1) = 1LL;
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
            WdfDriverGlobals,
            v62,
            &v68);
    v13 = v28;
    if ( v28 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = 129;
        goto LABEL_48;
      }
      goto LABEL_49;
    }
  }
  *(_QWORD *)&v74 = HUBFDO_GetPortStatusForDebuggingComplete;
  *((_QWORD *)&v69 + 1) = 0LL;
  *((_QWORD *)&v74 + 1) = HUBFDO_GetPortStatusForDebuggingComplete;
  v75 = HUBPDO_GetLocationString;
  *((_QWORD *)&v68 + 1) = &v73;
  *(_QWORD *)&v69 = &GUID_PNP_LOCATION_INTERFACE;
  v70 = 0uLL;
  *(_QWORD *)&v73 = 65576LL;
  *((_QWORD *)&v73 + 1) = v3;
  *(_QWORD *)&v68 = 48LL;
  v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 1824))(
          WdfDriverGlobals,
          v62,
          &v68);
  v13 = v28;
  if ( v28 >= 0 )
  {
    LOBYTE(v30) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v62,
      1LL,
      v30);
    LOBYTE(v31) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v62,
      2LL,
      v31);
    LOBYTE(v32) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v62,
      3LL,
      v32);
    LOBYTE(v33) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v62,
      4LL,
      v33);
    *(_QWORD *)(v24 + 24) = v3;
    *(_QWORD *)(v24 + 16) = *v3;
    v34 = *(_WORD *)(v3[1] + 200LL);
    *(_DWORD *)(v24 + 388) = -1;
    *(_WORD *)(v24 + 48) = v34;
    *(_DWORD *)(v24 + 384) = 5;
    if ( a2 )
      *(_QWORD *)(v24 + 8) = *(_QWORD *)(*v3 + 2464LL);
    else
      *(_BYTE *)v24 = 1;
    v3[2] = v24;
    memset(v84, 0, sizeof(v84));
    LODWORD(v84[0]) = 96;
    BYTE5(v84[1]) = 1;
    *(_QWORD *)((char *)v84 + 4) = 1LL;
    v84[6] = HUBPDO_EvtIoInternalDeviceControl;
    v84[5] = HUBPDO_EvtIoDeviceControl;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1216))(
                WdfDriverGlobals,
                v62,
                v84,
                0LL,
                &v76);
    v13 = PdoName;
    if ( PdoName >= 0 )
    {
      v35 = *((_DWORD *)v3 + 410);
      *(_QWORD *)&v87 = 0x200000030LL;
      DWORD2(v87) = 2;
      LODWORD(v88) = 2;
      *((_QWORD *)&v88 + 1) = 2LL;
      *(_QWORD *)&v89 = 0x200000002LL;
      DWORD1(v88) = ((unsigned __int8)v35 >> 6) & 1;
      v36 = v3[1];
      HIDWORD(v87) = ((unsigned __int8)~(_BYTE)v35 >> 5) & 1;
      *((_QWORD *)&v89 + 1) = *(unsigned __int16 *)(v36 + 200) | 0xFFFFFFFF00000000uLL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int128 *))(WdfFunctions_01015 + 664))(
        WdfDriverGlobals,
        v62,
        &v87);
      memset(v86, 0, sizeof(v86));
      v37 = 2LL;
      v38 = (v3[205] & 0x102) == 0;
      v86[7] = 0x700000005LL;
      LODWORD(v39) = 2;
      v40 = *v3;
      *(__m128i *)((char *)&v86[3] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v86[8] = -1LL;
      v86[9] = 0x5FFFFFFFFLL;
      LODWORD(v86[0]) = 80;
      *(_QWORD *)((char *)v86 + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v86[1] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v86[2] + 4) = 0x200000002LL;
      *(_QWORD *)((char *)&v86[5] + 4) = *(_QWORD *)((char *)&v86[3] + 4);
      HIDWORD(v86[6]) = _mm_cvtsi128_si32(*(__m128i *)((char *)&v86[3] + 4));
      v41 = *(_DWORD *)(v40 + 756);
      HIDWORD(v86[7]) = v41;
      LODWORD(v86[4]) = 1;
      v86[8] = 0LL;
      LODWORD(v86[9]) = 0;
      if ( v38 )
      {
        LODWORD(v86[7]) = 1;
        *(_QWORD *)((char *)&v86[1] + 4) = 1LL;
        *(_QWORD *)((char *)&v86[2] + 4) = 0LL;
        *(_QWORD *)((char *)v86 + 4) = 0LL;
        while ( 1 )
        {
          v42 = (int)v39 > v41;
          LODWORD(v39) = v39 + 1;
          *((_DWORD *)&v86[3] + ++v37) = v42 + 3;
          if ( v37 > 6 )
            break;
          v41 = HIDWORD(v86[7]);
        }
      }
      else
      {
        LODWORD(v86[7]) = 3;
        *(_QWORD *)((char *)&v86[1] + 4) = 0x100000001LL;
        *(_QWORD *)((char *)&v86[2] + 4) = 1LL;
        *(_QWORD *)((char *)v86 + 4) = 0x100000001LL;
        while ( 1 )
        {
          v43 = (int)v39 > v41;
          v39 = (unsigned int)(v39 + 1);
          *((_DWORD *)&v86[3] + ++v37) = v43 + 3;
          if ( v37 > 6 )
            break;
          v41 = HIDWORD(v86[7]);
        }
        if ( (v3[183] & 0x800) != 0 )
        {
          v66 = off_14006C310;
          v65 = v62;
          v44 = *v3;
          *(_OWORD *)((char *)v64 + 4) = 0LL;
          *(_QWORD *)((char *)&v64[1] + 4) = 0x100000000LL;
          LODWORD(v64[0]) = 56;
          HIDWORD(v64[1]) = 1;
          v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 336))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v44 + 16),
                  v39);
          v46 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _OWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                  WdfDriverGlobals,
                  v64,
                  v45,
                  v24 + 264);
          v13 = v46;
          if ( v46 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v60) = v46;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v3[1] + 1432LL),
                2u,
                2u,
                0x84u,
                (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
                v60);
            }
            *(_QWORD *)(v24 + 264) = 0LL;
            goto LABEL_40;
          }
          v47 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(v24 + 264),
                                    off_14006C310);
          KeInitializeEvent(v47 + 1, NotificationEvent, 0);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, _QWORD *))(WdfFunctions_01015 + 672))(
        WdfDriverGlobals,
        v62,
        v86);
      KeInitializeSpinLock((PKSPIN_LOCK)(v24 + 208));
      *(_DWORD *)(v24 + 216) = 6000;
      *(_QWORD *)(v24 + 224) = &ISMStateTable;
      *(_DWORD *)(v24 + 232) = 6000;
      v66 = off_14006C2E8;
      v65 = v62;
      HIDWORD(v64[1]) = 1;
      v72 = 1LL;
      *((_QWORD *)&v71 + 1) = HUBIDLE_EvtIdleWorkItem;
      *(_OWORD *)((char *)v64 + 4) = 0LL;
      *(_QWORD *)((char *)&v64[1] + 4) = 0x100000000LL;
      LODWORD(v64[0]) = 56;
      *(_QWORD *)&v71 = 24LL;
      v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v71,
              v64,
              v24 + 256);
      v13 = v48;
      if ( v48 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v60) = v48;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v3[1] + 1432LL),
            2u,
            2u,
            0x85u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v60);
        }
        *(_QWORD *)(v24 + 256) = 0LL;
        goto LABEL_40;
      }
      HUBIDLE_AddEvent(v24 + 72, 6009, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v24 + 32), 0x1000u);
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64))(WdfFunctions_01015 + 1064))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*v3 + 16LL),
                  v62);
      v13 = PdoName;
      if ( PdoName >= 0 )
      {
        v49 = *(_QWORD *)(v24 + 16);
        v50 = &v91;
        v51 = 5LL;
        v52 = *(unsigned __int16 *)(v49 + 328);
        v53 = (unsigned __int16 *)(v49 + 330);
        v90 = v52;
        do
        {
          v54 = *v53++;
          *v50++ = v54;
          --v51;
        }
        while ( v51 );
        v3 = v77;
        v55 = *(unsigned __int8 *)(*(_QWORD *)(v24 + 16) + 240LL);
        if ( (unsigned __int8)v55 < 6u )
          *(&v90 + v55) = *(unsigned __int16 *)(v24 + 48);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v60) = HIDWORD(v3);
          WPP_RECORDER_SF_qDDDdddddd(
            *(_QWORD *)(v3[1] + 1432LL),
            *((unsigned __int16 *)v3 + 1004),
            *((unsigned __int16 *)v3 + 1003),
            *((unsigned __int16 *)v3 + 1002),
            RemlockSize[0]);
        }
        v5 = 0;
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 1u);
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 2u);
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 4u);
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 0x10u);
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 8u);
        _InterlockedOr((volatile signed __int32 *)v3 + 557, 0x20u);
        if ( (v3[205] & 2) != 0 )
          HUBPDO_RegisterForPowerSettingsForHub(v24);
        else
          HUBPDO_RegisterForPowerSettingsForDevice(v24);
        v6 = 0;
        goto LABEL_41;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v23 = 134;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v23 = 131;
    }
LABEL_39:
    LODWORD(v60) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v23,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v60);
    goto LABEL_40;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = 130;
LABEL_48:
    LODWORD(v60) = v28;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      2u,
      v29,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v60);
  }
LABEL_49:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v62);
  v6 = 1;
LABEL_41:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v60) = *(unsigned __int16 *)(v3[1] + 200LL);
      McTemplateK0ppqq_EtwWriteTransfer(
        *(unsigned __int16 *)(v3[1] + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)((char *)v3 + 1524),
        *(_QWORD *)(*v3 + 248LL),
        v3[3],
        v60,
        v13);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v13;
    McTemplateK0pq_EtwWriteTransfer(
      v12,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)((char *)v3 + 1524),
      *(_QWORD *)(*v3 + 248LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*((_DWORD *)v3 + 411) & 0x40) != 0 )
  {
    *(_OWORD *)((char *)v3 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)v3 + 411, 0xFFFFFFBF);
  }
  v56 = (v13 >> 31) & 0xFFFFFFF4;
  if ( v6 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v63);
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v62);
  if ( v7 )
  {
    v57 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v57,
      "DSM PDO Tag",
      9264LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v56 + 4077;
}
