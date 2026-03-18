/*
 * XREFs of HUBFDO_IoctlGetHubInformationEx @ 0x14007C9D8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007B820 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030444 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007ED08 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetHubInformationEx(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // edx
  char *v11; // rcx
  char *v12; // rcx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // [rsp+20h] [rbp-30h]
  __int64 v18; // [rsp+28h] [rbp-28h]
  int v19; // [rsp+28h] [rbp-28h]
  void *v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF

  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_14006C198);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
         WdfDriverGlobals,
         a2,
         a3,
         &v20,
         0LL);
  if ( v9 >= 0 )
  {
    v9 = HUBFDO_IoctlValidateParameters(v8, 0, a4, 0, 77LL, a3);
    if ( v9 >= 0 )
    {
      memset(v20, 0, a3);
      *((_WORD *)v20 + 2) = *(_WORD *)(v8 + 48);
      switch ( *(_DWORD *)(v8 + 2232) )
      {
        case 1:
          *(_DWORD *)v20 = 2;
          v12 = (char *)v20;
          *(_OWORD *)((char *)v20 + 6) = *(_OWORD *)(v8 + 1196);
          *(_OWORD *)(v12 + 22) = *(_OWORD *)(v8 + 1212);
          *(_OWORD *)(v12 + 38) = *(_OWORD *)(v8 + 1228);
          *(_OWORD *)(v12 + 54) = *(_OWORD *)(v8 + 1244);
          *(_DWORD *)(v12 + 70) = *(_DWORD *)(v8 + 1260);
          *((_WORD *)v12 + 37) = *(_WORD *)(v8 + 1264);
          v12[76] = *(_BYTE *)(v8 + 1266);
          break;
        case 2:
          *(_DWORD *)v20 = 3;
          v11 = (char *)v20;
          *(_QWORD *)((char *)v20 + 6) = *(_QWORD *)(v8 + 1196);
          *(_DWORD *)(v11 + 14) = *(_DWORD *)(v8 + 1204);
          break;
        case 4:
          *(_DWORD *)v20 = 1;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v8 + 2536),
              v10,
              4,
              73,
              (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
          }
          break;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2536),
      2u,
      3u,
      0x48u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      v19);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v15 = (const GUID *)&v21;
      LODWORD(v18) = v9;
      LODWORD(v17) = 0;
      if ( ActivityIdIrp < 0 )
        v15 = 0LL;
      McTemplateK0pqq_EtwWriteTransfer(
        v14,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_HUB_INFORMATION_EX_COMPLETE,
        v15,
        *(_QWORD *)(v8 + 248),
        v17,
        v18);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v9,
           77LL);
}
