/*
 * XREFs of UsbDevice_DropEndpointsCompletion @ 0x14004D8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140032F88 (UsbDevice_SetConfigureRequestStatus.c)
 */

__int64 __fastcall UsbDevice_DropEndpointsCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  unsigned __int16 v4; // r9
  int v5; // edi

  v2 = *(_QWORD **)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *((unsigned __int8 *)v2 + 143);
      v4 = 96;
LABEL_9:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v2[1] + 72LL),
        4u,
        0xCu,
        v4,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v3,
        *v2);
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v5 = 1;
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 98;
      goto LABEL_9;
    }
LABEL_10:
    UsbDevice_SetConfigureRequestStatus((__int64)v2, -1073741823);
    v5 = 2;
    return UsbDevice_QueueConfigureEndpointEvent((__int64)v2, v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 72LL),
      4u,
      0xCu,
      0x61u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *v2);
  return UsbDevice_QueueConfigureEndpointEvent((__int64)v2, v5);
}
