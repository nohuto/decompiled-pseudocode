/*
 * XREFs of Isoch_MapTransfers @ 0x14001CB10
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x140006E60 (Isoch_EvtDmaCallback.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015CC8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x14001CA40 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_EP_StartMapping @ 0x140033290 (Isoch_EP_StartMapping.c)
 *     Isoch_CommonBufferCallback @ 0x140036580 (Isoch_CommonBufferCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     TR_AttemptStateChange @ 0x140012460 (TR_AttemptStateChange.c)
 *     Isoch_MappingLoop @ 0x14001CC20 (Isoch_MappingLoop.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
{
  int i; // edi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(_QWORD *)(a1 + 56);
      LODWORD(v7) = i;
      LODWORD(v6) = *(_DWORD *)(v4 + 144);
      LODWORD(v5) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v4 + 80),
        5u,
        0xEu,
        0x44u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        v5,
        v6,
        v7);
    }
    Isoch_MappingLoop(a1);
    result = *(unsigned int *)(a1 + 108);
    if ( (_DWORD)result != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 352) )
      return result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
    if ( (_DWORD)result != 2 )
      return result;
LABEL_13:
    ;
  }
  if ( (_DWORD)result == 4 )
  {
    if ( *(_DWORD *)(a1 + 356) )
    {
      result = TR_AttemptStateChange(a1, 4, 3);
      if ( (_DWORD)result == 4 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 328),
          0LL);
        goto LABEL_13;
      }
    }
  }
  return result;
}
