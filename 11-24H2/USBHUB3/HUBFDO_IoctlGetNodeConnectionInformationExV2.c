/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007D234
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007B820 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030444 (HUBMISC_GetActivityIdIrp.c)
 *     HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher @ 0x140030D54 (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher.c)
 *     HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher @ 0x140030E14 (HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007ED08 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInformationExV2(__int64 a1, __int64 a2, size_t a3, int a4)
{
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  int v11; // ebx
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  int ActivityIdIrp; // eax
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v18; // ecx
  __int64 j; // r8
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  PWDF_DRIVER_GLOBALS v23; // rcx
  __int64 v24; // r11
  char IsDeviceSuperSpeedPlusCapableOrHigher; // al
  __int64 v26; // r11
  __int64 v27; // r10
  _DWORD *v28; // rbx
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+28h] [rbp-40h]
  void *v31; // [rsp+40h] [rbp-28h] BYREF
  __int128 v32; // [rsp+48h] [rbp-20h] BYREF

  v31 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_14006C198);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  if ( v10 >= 0 )
  {
    v10 = HUBFDO_IoctlValidateParameters(v9, 16, a4, (_DWORD)v31, 16LL, a3);
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v31 + 1) >= 0x10u )
      {
        v7 = *(unsigned __int16 *)v31;
        v11 = *((_DWORD *)v31 + 2);
        memset(v31, 0, a3);
        *(_DWORD *)v31 = v7;
        if ( (v11 & 4) != 0 )
        {
          *(_DWORD *)v31 = v7;
          *((_DWORD *)v31 + 1) = 16;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
            WdfDriverGlobals,
            a2,
            16LL);
          for ( i = *(_QWORD **)(v9 + 2376); ; i = (_QWORD *)*i )
          {
            v13 = i - 31;
            if ( (_QWORD *)(v9 + 2376) == i )
              break;
            if ( *((_WORD *)v13 + 100) == (_WORD)v7 )
            {
              if ( i == (_QWORD *)248 )
                break;
              v18 = *((_DWORD *)v13 + 52);
              if ( v18 == 512 )
              {
                *((_DWORD *)v31 + 2) |= 1u;
                if ( *(_DWORD *)(v9 + 256) == 2 || *(_DWORD *)(v9 + 2232) == 4 )
                  *((_DWORD *)v31 + 2) |= 2u;
              }
              else if ( v18 == 768 )
              {
                *((_DWORD *)v31 + 2) |= 4u;
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v30) = *((_DWORD *)v13 + 52);
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(v9 + 2536),
                  2u,
                  4u,
                  0x4Cu,
                  (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                  v30,
                  v7);
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
                WdfDriverGlobals,
                *(_QWORD *)(v9 + 16));
              for ( j = 0LL; ; j = v21 )
              {
                v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015
                                                                                               + 1080))(
                        WdfDriverGlobals,
                        *(_QWORD *)(v9 + 16),
                        j,
                        1LL);
                v21 = v20;
                if ( !v20
                  || v20 != *(_QWORD *)(v9 + 2672)
                  && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                             WdfDriverGlobals,
                                             v20,
                                             off_14006C0F8)
                                         + 48) == v7 )
                {
                  break;
                }
              }
              v22 = WdfFunctions_01015;
              v23 = WdfDriverGlobals;
              if ( v21 )
              {
                v24 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                    WdfDriverGlobals,
                                    v21,
                                    off_14006C0F8)
                                + 24);
                if ( v24 )
                {
                  if ( (*(_DWORD *)(v24 + 1640) & 0x800) != 0 )
                    *((_DWORD *)v31 + 3) |= 2u;
                  IsDeviceSuperSpeedPlusCapableOrHigher = HUBMISC_IsDeviceSuperSpeedPlusCapableOrHigher(v24);
                  *(_DWORD *)(v27 + 12) = *(_DWORD *)(v27 + 12) & 0xFFFFFFF7 | (IsDeviceSuperSpeedPlusCapableOrHigher != 0
                                                                              ? 8
                                                                              : 0);
                  if ( *((_DWORD *)v13 + 52) == 768 )
                  {
                    *((_DWORD *)v31 + 3) |= 1u;
                    v28 = v31;
                    v28[3] = v28[3] & 0xFFFFFFFB | (HUBMISC_IsDeviceOperatingAtSuperSpeedPlusOrHigher(v26) ? 4 : 0);
                  }
                }
                v22 = WdfFunctions_01015;
                v23 = WdfDriverGlobals;
              }
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v22 + 1088))(v23, *(_QWORD *)(v9 + 16));
              goto LABEL_12;
            }
          }
        }
      }
      v10 = -1073741811;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 2536),
      2u,
      3u,
      0x4Bu,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v10);
  }
LABEL_12:
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v16 = (const GUID *)&v32;
      LODWORD(v30) = v10;
      LODWORD(v29) = v7;
      if ( ActivityIdIrp < 0 )
        v16 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v15,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_V2_COMPLETE,
        v16,
        *(_QWORD *)(v9 + 248),
        v29,
        v30);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v10);
}
