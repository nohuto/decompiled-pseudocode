/*
 * XREFs of ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400A9C10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400A9ADC (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400A9B08 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterAllocateQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned int *v9; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rdx
  char v11[8]; // [rsp+30h] [rbp-A8h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int64 v13; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext(&v13, a1);
  v12 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      16,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v5,
      v1);
  }
  if ( (_BYTE)v12 && *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    v6 = *(_QWORD *)(v1 + 40);
    if ( *((_DWORD *)a1 + 10) )
    {
      v7 = *(_DWORD *)(v6 + 12);
      if ( v7 )
        ndisFreeReceiveQueue(v5, v7);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v5, *(_DWORD *)(v6 + 12), v8, v9);
      HIDWORD(ReceiveQueueByQueueId->Reserved28) = 2;
      HIDWORD(ReceiveQueueByQueueId->Reserved26) = *(_DWORD *)(v6 + 44);
      if ( *(_BYTE *)(v6 + 1) >= 2u && *(_WORD *)(v6 + 2) >= 0x444u && *(_DWORD *)(v1 + 48) >= 0x444u )
        ReceiveQueueByQueueId->OriginalDeviceCaps.D2Latency = *(_DWORD *)(v6 + 1088);
      v5->MiniportThread = 0LL;
      KeReleaseSpinLock(&v5->Lock, NewIrql);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v5,
      *(_QWORD *)v11);
  }
}
