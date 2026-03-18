/*
 * XREFs of HUBHTX_HubControlTransferComplete @ 0x140005370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006824 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHTX_HubControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]
  _DWORD v14[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+4Ch] [rbp-1Ch]
  int v16; // [rsp+54h] [rbp-14h]

  v15 = 0LL;
  v16 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 844);
  v14[0] = 24;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v14);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v12 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v12);
  }
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v6;
      LODWORD(v11) = v5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2536),
        2u,
        3u,
        0xAu,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        v11,
        v13);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq_EtwWriteTransfer(
        v7,
        (unsigned int)&USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0,
        *(_QWORD *)(a4 + 248),
        0,
        v6,
        v5);
    if ( (*(_DWORD *)(a4 + 2608) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1280);
    *(_DWORD *)(a4 + 2612) = 1073872897;
  }
  return HUBSM_AddEvent(a4 + 1280, ((v5 >> 31) & 0xFFFFFFFC) + 2008);
}
