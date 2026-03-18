/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007DA34
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007B820 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030444 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x140030D54 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007ED08 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation(__int64 a1, __int64 a2, size_t a3, int a4)
{
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ebx
  int ActivityIdIrp; // eax
  __int64 v13; // rcx
  const GUID *v14; // r8
  _QWORD *i; // rax
  __int64 j; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  PWDF_DRIVER_GLOBALS v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  void *v27; // r8
  __int64 v28; // r10
  int v29; // edx
  char v30; // r11
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  char v36; // [rsp+30h] [rbp-38h]
  void *v37; // [rsp+38h] [rbp-30h] BYREF
  int v38; // [rsp+40h] [rbp-28h]
  __int128 v39; // [rsp+48h] [rbp-20h] BYREF

  v37 = 0LL;
  v38 = 0;
  v7 = 0;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006C198);
  v36 = *(_BYTE *)(v10 + 240);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v37,
          0LL);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 2536),
        2u,
        3u,
        0x4Du,
        (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
        v11);
    goto LABEL_4;
  }
  v11 = HUBFDO_IoctlValidateParameters(v10, 24, a4, (_DWORD)v37, 24LL, a3);
  if ( v11 < 0 )
    goto LABEL_4;
  if ( *((_DWORD *)v37 + 1) < 0x18u )
  {
LABEL_12:
    v11 = -1073741811;
    goto LABEL_4;
  }
  v8 = *(unsigned __int16 *)v37;
  memset(v37, 0, a3);
  *(_DWORD *)v37 = v8;
  *((_DWORD *)v37 + 1) = 24;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
    WdfDriverGlobals,
    a2,
    24LL);
  for ( i = *(_QWORD **)(v10 + 2376); ; i = (_QWORD *)*i )
  {
    if ( (_QWORD *)(v10 + 2376) == i )
      goto LABEL_12;
    if ( *((_WORD *)i - 24) == (_WORD)v8 )
      break;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 16));
  for ( j = 0LL; ; j = v19 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            *(_QWORD *)(v10 + 16),
            j,
            1LL);
    v19 = v18;
    if ( !v18
      || v18 != *(_QWORD *)(v10 + 2672)
      && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                                 WdfDriverGlobals,
                                 v18,
                                 off_14006C0F8)
                             + 48) == v8 )
    {
      break;
    }
  }
  v20 = WdfFunctions_01015;
  v21 = WdfDriverGlobals;
  if ( !v19 )
  {
LABEL_24:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v20 + 1088))(v21, *(_QWORD *)(v10 + 16));
    v11 = -1073741811;
    goto LABEL_4;
  }
  v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v19,
          off_14006C0F8);
  v23 = *(_QWORD *)(v22 + 24);
  if ( !v23 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      *(_QWORD *)(v10 + 16));
    v11 = -1073741823;
    goto LABEL_4;
  }
  if ( !HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(*(_QWORD *)(v22 + 24)) )
  {
    v20 = WdfFunctions_01015;
    v21 = WdfDriverGlobals;
    goto LABEL_24;
  }
  *((_DWORD *)v37 + 3) = (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 188LL) >> 8) & 0xF;
  v24 = 0LL;
  v25 = *(_QWORD *)(v23 + 8);
  v26 = *(unsigned int *)(v25 + 232);
  v27 = (void *)(*(_DWORD *)(v25 + 188) & 0xF);
  v28 = *(_QWORD *)(v25 + 224);
  if ( *(_DWORD *)(v25 + 232) )
  {
    while ( 1 )
    {
      v29 = *(_DWORD *)(v28 + 4 * v24);
      if ( (v29 & 0xF) == (_DWORD)v27 && (v29 & 0x80u) == 0 )
        break;
      if ( ++v24 >= v26 )
        goto LABEL_33;
    }
    v30 = v36;
    *((_DWORD *)v37 + 2) = v29;
    if ( !v36 )
    {
      v27 = v37;
      v32 = *((_DWORD *)v37 + 3);
      if ( v32 )
        *((_WORD *)v37 + 5) = *((unsigned __int16 *)v37 + 5) / (unsigned int)(v32 + 1);
    }
    v38 = 1;
  }
  else
  {
LABEL_33:
    v30 = v36;
  }
  *((_DWORD *)v37 + 5) = (unsigned __int8)HIBYTE(*(_WORD *)(*(_QWORD *)(v23 + 8) + 188LL)) >> 4;
  v31 = 0LL;
  if ( v26 )
  {
    while ( 1 )
    {
      v27 = (void *)*(unsigned int *)(v28 + 4 * v31);
      if ( (*(_DWORD *)(v28 + 4 * v31) & 0xF) == ((*(_DWORD *)(*(_QWORD *)(v23 + 8) + 188LL) >> 4) & 0xF)
        && (char)v27 < 0 )
      {
        break;
      }
      if ( ++v31 >= v26 )
        goto LABEL_47;
    }
    *((_DWORD *)v37 + 4) = (_DWORD)v27;
    if ( !v30 )
    {
      v27 = v37;
      v33 = *((_DWORD *)v37 + 5);
      if ( v33 )
        *((_WORD *)v37 + 9) = *((unsigned __int16 *)v37 + 9) / (unsigned int)(v33 + 1);
    }
    v7 = 1;
  }
LABEL_47:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1088))(
    WdfDriverGlobals,
    *(_QWORD *)(v10 + 16),
    v27);
  if ( !v38 || !v7 )
  {
    memset(v37, 0, a3);
    v11 = -1073741216;
    *(_DWORD *)v37 = v8;
    *((_DWORD *)v37 + 1) = 24;
  }
LABEL_4:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v14 = (const GUID *)&v39;
      LODWORD(v35) = v11;
      LODWORD(v34) = v8;
      if ( ActivityIdIrp < 0 )
        v14 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v13,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_SUPERSPEEDPLUS_INFORMATION_COMPLETE,
        v14,
        *(_QWORD *)(v10 + 248),
        v34,
        v35);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
