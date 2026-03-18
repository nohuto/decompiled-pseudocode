/*
 * XREFs of Isoch_MapTransfers @ 0x14000DF10
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x14000DE40 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1400129F4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_EvtDmaCallback @ 0x14001FDC0 (Isoch_EvtDmaCallback.c)
 *     Isoch_EP_StartMapping @ 0x140031D50 (Isoch_EP_StartMapping.c)
 *     Isoch_CommonBufferCallback @ 0x140034DD0 (Isoch_CommonBufferCallback.c)
 * Callees:
 *     TR_AttemptStateChange @ 0x140005E00 (TR_AttemptStateChange.c)
 *     Isoch_MappingLoop @ 0x14000E020 (Isoch_MappingLoop.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_MapTransfers(__int64 a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v4,
        14,
        68,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        i);
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
