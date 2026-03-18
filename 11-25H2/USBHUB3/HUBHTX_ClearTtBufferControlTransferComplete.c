/*
 * XREFs of HUBHTX_ClearTtBufferControlTransferComplete @ 0x1400031E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006824 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

void __fastcall HUBHTX_ClearTtBufferControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // ebp
  __int64 v8; // rbx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a3 + 8);
  v6 = *(_DWORD *)(a4 + 28);
  if ( v4 < 0 )
  {
    v8 = a4 + 168;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_DWORD *)(a4 + 28);
      v9 = *(_DWORD *)(a3 + 8);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)v8 + 2528LL),
        2u,
        3u,
        0x75u,
        (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids,
        v9,
        v10);
    }
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq_EtwWriteTransfer(
        a1,
        (unsigned int)&USBHUB3_ETW_EVENT_HUB_CONTROL_TRANSFER_ERROR,
        0,
        *(_QWORD *)(*(_QWORD *)v8 + 248LL),
        0,
        v6,
        v4);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a4 + 168) + 536LL))(
    *(_QWORD *)(*(_QWORD *)(a4 + 168) + 384LL),
    *(_QWORD *)(a4 + 176));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0x68334855u);
}
