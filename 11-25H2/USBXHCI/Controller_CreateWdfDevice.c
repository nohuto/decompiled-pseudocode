/*
 * XREFs of Controller_CreateWdfDevice @ 0x140075CAC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Device_IsSecureDevice @ 0x140043E88 (Device_IsSecureDevice.c)
 *     Device_QueryCapabilities @ 0x140043E98 (Device_QueryCapabilities.c)
 *     RtlUnicodeStringPrintf @ 0x140044A10 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x140044C2C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // r9
  int v9; // eax
  int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // r9d
  NTSTATUS i; // eax
  int v15; // eax
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  NTSTATUS v22; // eax
  int v23; // edx
  int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // edx
  char *v31; // [rsp+20h] [rbp-E0h]
  char v32; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+70h] [rbp-90h]
  void *v38; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v40; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+ACh] [rbp-54h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  __int64 (__fastcall *v44)(); // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  __int128 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  void *v53; // [rsp+120h] [rbp+20h]
  unsigned int *v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+130h] [rbp+30h] BYREF
  int v56; // [rsp+134h] [rbp+34h]
  __int64 (__fastcall *v57)(__int64); // [rsp+138h] [rbp+38h]
  _UNKNOWN **(__fastcall *v58)(__int64); // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v59)(__int64); // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v60)(__int64); // [rsp+150h] [rbp+50h]
  _UNKNOWN **(__fastcall *v61)(__int64); // [rsp+158h] [rbp+58h]
  __int128 v62; // [rsp+160h] [rbp+60h]
  _QWORD v63[18]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v64[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v65; // [rsp+220h] [rbp+120h]
  GUID v66; // [rsp+230h] [rbp+130h] BYREF
  __int64 v67; // [rsp+240h] [rbp+140h]
  char v68; // [rsp+250h] [rbp+150h] BYREF
  char v69; // [rsp+2A0h] [rbp+1A0h] BYREF

  v34 = a1;
  v54 = a4;
  LODWORD(v38) = 0;
  LODWORD(v53) = 0;
  v67 = 0LL;
  v48 = 0;
  v42 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v68;
  v43 = 0;
  v40.Buffer = (wchar_t *)&v69;
  LODWORD(v45) = 0;
  v56 = 0;
  v35 = 0LL;
  *(_QWORD *)&v62 = 0LL;
  v7 = 0;
  v36 = 0LL;
  DWORD2(v62) = 0;
  v37 = 0LL;
  v33 = 2;
  v50 = 0LL;
  *(_QWORD *)&DestinationString.Length = 5242880LL;
  v51 = 0LL;
  *(_QWORD *)&v40.Length = 5242880LL;
  v52 = 0LL;
  v66 = 0LL;
  memset(v64, 0, sizeof(v64));
  v65 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x29 )
      LODWORD(v63[0]) = -1;
    else
      LODWORD(v63[0]) = *(_DWORD *)(WdfStructures + 328);
  }
  else
  {
    LODWORD(v63[0]) = 144;
  }
  v63[5] = Controller_WdfEvtDevicePrepareHardware;
  v63[6] = Controller_WdfEvtDeviceReleaseHardware;
  v63[15] = Controller_WdfEvtDeviceUsageNotification;
  v63[1] = Controller_WdfEvtDeviceD0Entry;
  v63[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v63[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v63[3] = Controller_WdfEvtDeviceD0Exit;
  v63[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v63[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01033 + 440))(WdfDriverGlobals, a1, v63);
  v62 = 0LL;
  v56 = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x2B )
      v55 = -1;
    else
      v55 = *(_DWORD *)(WdfStructures + 344);
  }
  else
  {
    v55 = 64;
  }
  v57 = Controller_WdfEvtDeviceArmWakeFromS0;
  v58 = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v59 = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v60 = Controller_WdfEvtDeviceArmWakeFromSx;
  v61 = Controller_WdfEvtDeviceDisarmWakeFromSx;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01033 + 448))(WdfDriverGlobals, v34, &v55);
  v42 = 0LL;
  v43 = 0;
  v45 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x1B )
      v41 = -1;
    else
      v41 = *(_DWORD *)(WdfStructures + 216);
  }
  else
  {
    v41 = 32;
  }
  v44 = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01033 + 1024))(WdfDriverGlobals, v34, &v41);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 3440))(
    WdfDriverGlobals,
    v34,
    2LL);
  LOBYTE(v8) = 22;
  v31 = &v33;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01033 + 584))(
         WdfDriverGlobals,
         v34,
         Controller_WdfEvtPreprocessSetPowerIrp,
         v8);
  v12 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 36;
LABEL_19:
      v32 = v9;
LABEL_54:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a2, v10, 4, v13, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v32);
      goto LABEL_55;
    }
    goto LABEL_55;
  }
  if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v31) = 0;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01033 + 584))(
           WdfDriverGlobals,
           v34,
           Controller_EvtIoInternalDeviceControl,
           v11);
    v12 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 37;
        goto LABEL_19;
      }
LABEL_55:
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
      goto LABEL_56;
    }
  }
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x1C )
      LODWORD(v46) = -1;
    else
      LODWORD(v46) = *(_DWORD *)(WdfStructures + 224);
  }
  else
  {
    LODWORD(v46) = 40;
  }
  *(_QWORD *)&v47 = 0LL;
  v48 = 0;
  *((_QWORD *)&v46 + 1) = Controller_EvtDeviceFileCreate;
  *((_QWORD *)&v47 + 1) = Controller_EvtDeviceFileClose;
  v49 = -2147483644;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006B218;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int128 *))(WdfFunctions_01033 + 568))(
    WdfDriverGlobals,
    v34,
    &v46,
    &v35);
  v35 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006B240;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  *((_QWORD *)&v35 + 1) = Device_WdfEvtCleanupCallback;
  for ( i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
        ;
        i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v7) )
  {
    v12 = i;
    if ( i < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v13 = 38;
      v32 = i;
      goto LABEL_54;
    }
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01033 + 536))(
            WdfDriverGlobals,
            v34,
            &DestinationString);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v13 = 39;
      goto LABEL_60;
    }
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01033 + 544))(
            WdfDriverGlobals,
            v34,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v13 = 40;
LABEL_60:
      v32 = v15;
      goto LABEL_54;
    }
    v50 = 0LL;
    v53 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
      LODWORD(v50) = (unsigned int)WdfStructureCount <= 0x26 ? -1 : *(_DWORD *)(WdfStructures + 304);
    else
      LODWORD(v50) = 56;
    *((_QWORD *)&v51 + 1) = 0x100000001LL;
    v53 = off_14006AE88;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01033 + 576))(
      WdfDriverGlobals,
      v34,
      &v50);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, _QWORD *))(WdfFunctions_01033 + 600))(
            WdfDriverGlobals,
            &v34,
            &v35,
            a3);
    v12 = v15;
    if ( v15 != -1073741771 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(a2, v10, 4, 41, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v7);
    }
    ++v7;
  }
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v13 = 42;
    goto LABEL_60;
  }
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_14006B240);
  *(_QWORD *)(v17 + 16) = a2;
  *(_QWORD *)(v17 + 88) = *a3;
  Device_QueryCapabilities(v17);
  if ( !Device_IsSecureDevice(v17) )
  {
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      1LL,
      v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      2LL,
      v19);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      3LL,
      v20);
    LOBYTE(v21) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 392))(
      WdfDriverGlobals,
      *a3,
      4LL,
      v21);
  }
  v22 = RtlUnicodeStringPrintf(&v40, L"%ws%d", L"\\DosDevices\\HCD", v7);
  v12 = v22;
  if ( v22 >= 0 )
  {
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01033 + 640))(
            WdfDriverGlobals,
            *a3,
            &v40);
    v12 = v22;
    if ( v22 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(a2, 4u, v25, 0x2Du, (int)v31, v40.Buffer);
      v26 = *a3;
      v66 = GUID_BUS_TYPE_USB;
      v67 = 15LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01033 + 680))(
        WdfDriverGlobals,
        v26,
        &v66);
      v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01033 + 616))(
              WdfDriverGlobals,
              *a3,
              &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
              0LL);
      v12 = v22;
      if ( v22 >= 0 )
      {
        if ( WdfClientVersionHigherThanFramework )
        {
          if ( (unsigned int)WdfStructureCount <= 0xC )
            LODWORD(v64[0]) = -1;
          else
            LODWORD(v64[0]) = *(_DWORD *)(WdfStructures + 96);
        }
        else
        {
          LODWORD(v64[0]) = 48;
        }
        HIDWORD(v65) = -1;
        v27 = *a3;
        *(__m128i *)((char *)v64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
        *(_QWORD *)((char *)&v64[1] + 4) = 0x200000002LL;
        LODWORD(v65) = 2;
        *(_QWORD *)((char *)&v65 + 4) = 0xFFFFFFFF00000002uLL;
        HIDWORD(v64[1]) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 664))(
          WdfDriverGlobals,
          v27,
          v64);
        v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a3);
        v29 = PoDirectedDripsSetDeviceFlags(v28, 2LL);
        v12 = v29;
        if ( v29 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_d(a2, v30, 4, 47, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v29);
          }
          v12 = 0;
        }
        goto LABEL_56;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v24 = 46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v24 = 44;
    }
LABEL_66:
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_d(a2, v23, 4, v24, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, v22);
    goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = 43;
    goto LABEL_66;
  }
LABEL_56:
  *v54 = v7;
  return v12;
}
