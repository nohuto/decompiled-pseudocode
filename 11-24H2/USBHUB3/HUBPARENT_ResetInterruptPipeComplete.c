/*
 * XREFs of HUBPARENT_ResetInterruptPipeComplete @ 0x140008090
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

__int64 __fastcall HUBPARENT_ResetInterruptPipeComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // esi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-38h]
  _DWORD v16[3]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-1Ch]
  int v18; // [rsp+54h] [rbp-14h]

  v17 = 0LL;
  v18 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 844);
  v16[0] = 24;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         a1,
         v16);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006C1E8);
    v13 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v13);
  }
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = v6;
      LODWORD(v12) = v5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2536),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
        v12,
        v15);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      LODWORD(v14) = v5;
      LODWORD(v12) = v6;
      LODWORD(v11) = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        v7,
        &USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(a4 + 248),
        v11,
        v12,
        v14);
    }
    if ( (*(_DWORD *)(a4 + 2608) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", a4 + 1280);
  }
  return HUBSM_AddEvent(a4 + 1280, ((v5 >> 31) & 0xFFFFFFFC) + 2016);
}
