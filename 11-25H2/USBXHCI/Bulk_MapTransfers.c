/*
 * XREFs of Bulk_MapTransfers @ 0x14001AB60
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x140004630 (Bulk_EvtDmaCallback.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14001AA60 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EP_StartMapping @ 0x14002BE30 (Bulk_EP_StartMapping.c)
 *     Bulk_CommonBufferCallback @ 0x14004D800 (Bulk_CommonBufferCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 *     Bulk_PrepareStage @ 0x14001B580 (Bulk_PrepareStage.c)
 *     Bulk_MapStage @ 0x14001C3D0 (Bulk_MapStage.c)
 */

void __fastcall Bulk_MapTransfers(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  int v4; // r14d
  volatile signed __int32 *v5; // rdi
  void *v6; // r8
  int i; // ebp
  int v8; // eax
  int v9; // eax
  signed __int32 v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-30h]

  v2 = (volatile signed __int32 *)(a1 + 108);
  v4 = 0;
  v5 = (volatile signed __int32 *)(a1 + 108);
  while ( 2 )
  {
    v6 = &WPP_af203940883a35574f6554fa7269ecc3_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = *(_QWORD *)(a1 + 56);
      LODWORD(v17) = v4;
      LODWORD(v16) = *(_DWORD *)(v12 + 144);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v12 + 80),
        5u,
        0xEu,
        0x25u,
        (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
        v15,
        v16,
        v17);
      v6 = &WPP_af203940883a35574f6554fa7269ecc3_Traceguids;
    }
    for ( i = 0; ; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = *(_QWORD *)(a1 + 56);
        LODWORD(v17) = i;
        LODWORD(v16) = *(_DWORD *)(v11 + 144);
        LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v11 + 80),
          5u,
          0xEu,
          0x24u,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
          v15,
          v16,
          v17);
      }
      *(_DWORD *)(a1 + 348) = 0;
      if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1, a2, v6) )
        break;
      v8 = Bulk_PrepareStage(a1);
      if ( v8 != 1 )
      {
        if ( v8 == 3 )
          goto LABEL_20;
        if ( v8 == 4 )
          break;
        v9 = Bulk_MapStage(a1);
        if ( v9 != 3 )
        {
          if ( v9 == 2 )
            goto LABEL_20;
          if ( v9 == 1 )
            break;
          v10 = _InterlockedCompareExchange(v5, 3, 3);
          if ( v10 != 3 && _InterlockedCompareExchange(v5, 0, 1) == 1 )
          {
            a2 = *(_QWORD *)(a1 + 56);
            if ( !*(_BYTE *)(a2 + 37)
              || (v13 = *(_QWORD *)(a2 + 136),
                  _InterlockedIncrement((volatile signed __int32 *)(v13 + 20)) == *(_DWORD *)(v13 + 8)) )
            {
              ESM_AddEvent((KSPIN_LOCK *)(a2 + 296), 20);
            }
            v2 = v5;
            goto LABEL_20;
          }
          v2 = v5;
          if ( v10 != 3 )
            goto LABEL_20;
        }
      }
      v6 = &WPP_af203940883a35574f6554fa7269ecc3_Traceguids;
    }
    v2 = v5;
    if ( _InterlockedCompareExchange(v5, 2, 3) != 3 && _InterlockedCompareExchange(v5, 0, 1) == 1 )
    {
      a2 = *(_QWORD *)(a1 + 56);
      if ( !*(_BYTE *)(a2 + 37)
        || (v14 = *(_QWORD *)(a2 + 136),
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 20)) == *(_DWORD *)(v14 + 8)) )
      {
        ESM_AddEvent((KSPIN_LOCK *)(a2 + 296), 20);
      }
    }
LABEL_20:
    if ( *v2 == 2 && *(_DWORD *)(a1 + 348) && _InterlockedCompareExchange(v2, 3, 2) == 2 )
    {
      ++v4;
      continue;
    }
    break;
  }
}
