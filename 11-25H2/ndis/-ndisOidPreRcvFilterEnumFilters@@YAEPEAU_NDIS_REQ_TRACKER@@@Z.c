/*
 * XREFs of ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B22C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400B1C4C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C88 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreRcvFilterEnumFilters(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // r12
  struct _NDIS_VPORT_BLOCK *v3; // r13
  char v4; // r15
  _OWORD *v5; // rax
  int v6; // edx
  _DWORD *v7; // rax
  int *v8; // rcx
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned int *v16; // r9
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rax
  unsigned int NumFilters; // edx
  unsigned int v19; // edx
  unsigned int v20; // r15d
  $4E30824A80479617F9AA9ECC46CB5756 *Flink; // rcx
  unsigned int v22; // r11d
  __int64 i; // rsi
  struct _NDIS_PCW_DATA_BLOCK **p_PcwDataBlock; // rax
  _DWORD *v25; // r8
  $4E30824A80479617F9AA9ECC46CB5756 *v26; // r9
  KIRQL v27; // dl
  __int64 v28; // rax
  struct _NDIS_MINIPORT_BLOCK *v29[2]; // [rsp+48h] [rbp-49h]
  __int128 v30; // [rsp+78h] [rbp-19h]
  char v31[64]; // [rsp+88h] [rbp-9h] BYREF
  KIRQL NewIrql; // [rsp+F8h] [rbp+67h] BYREF

  NewIrql = 0;
  ReceiveQueueByQueueId = 0LL;
  v3 = 0LL;
  v4 = 1;
  v5 = (_OWORD *)ndisCaptureIovOidContext(v31, a1);
  *(_OWORD *)v29 = *v5;
  v30 = v5[3];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      25,
      30,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)a1);
  }
  v7 = (_DWORD *)*((_QWORD *)a1 + 4);
  v8 = (int *)((char *)a1 + 40);
  v9 = 20;
  if ( v7[1] == 12 )
  {
    v10 = -1073676268;
    *v8 = 0;
    if ( v7[12] >= 0x14u )
    {
      v11 = 0;
      if ( v7[13] < 0x14u )
      {
        v7[17] = 20;
        v11 = -1073676266;
        *v8 = -1073676266;
      }
    }
    else
    {
      v7[17] = 20;
      v11 = -1073676268;
      *v8 = -1073676268;
    }
    v12 = *((_QWORD *)a1 + 4);
    if ( v11 )
    {
      *(_DWORD *)(v12 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v12 + 40) + 1LL) == 2 )
    {
      *v8 = 0;
      v9 = 28;
      if ( *(_DWORD *)(v12 + 48) < 0x1Cu )
      {
LABEL_14:
        *(_DWORD *)(v12 + 68) = 28;
        *v8 = v10;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 0;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v12 + 52) < 0x1Cu )
      {
        v10 = -1073676266;
        goto LABEL_14;
      }
    }
    if ( !LOBYTE(v29[0]) )
    {
      v4 = 0;
      goto LABEL_15;
    }
    *v8 = -1073741637;
    if ( *((_QWORD *)&v30 + 1) )
    {
      v14 = *(_QWORD *)(v12 + 40);
      *(_DWORD *)(v12 + 60) = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v9;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v29[1], &NewIrql);
      if ( *(_BYTE *)(v14 + 1) >= 2u && (*(_DWORD *)(v14 + 20) & 1) != 0 )
      {
        VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v29[1], *(_DWORD *)(v14 + 24));
        v3 = VPortByVPortIdInternal;
        if ( !VPortByVPortIdInternal )
        {
          v29[1]->MiniportThread = 0LL;
LABEL_25:
          KeReleaseSpinLock(&v29[1]->Lock, NewIrql);
          *((_DWORD *)a1 + 10) = -1073741811;
          goto LABEL_15;
        }
        NumFilters = VPortByVPortIdInternal->NumFilters;
      }
      else
      {
        v19 = *(_DWORD *)(v14 + 4);
        if ( v19 )
          ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v29[1], v19, v15, v16);
        else
          ReceiveQueueByQueueId = (struct _NDIS_MINIPORT_BLOCK *)v29[1]->DefaultReceiveQueue;
        if ( !ReceiveQueueByQueueId )
        {
          v29[1]->MiniportThread = 0LL;
          goto LABEL_25;
        }
        NumFilters = HIDWORD(ReceiveQueueByQueueId->Reserved29);
      }
      v20 = 16 * NumFilters + 28;
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 68LL) = v20;
      if ( v20 <= *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) )
      {
        *(_DWORD *)v14 = 1835392;
        if ( v3 )
        {
          Flink = ($4E30824A80479617F9AA9ECC46CB5756 *)v3->FilterList.Flink;
          *(_DWORD *)(v14 + 24) = v3->VPortParams.VPortId;
        }
        else
        {
          Flink = *($4E30824A80479617F9AA9ECC46CB5756 **)&ReceiveQueueByQueueId->Reserved4.Length;
          *(_DWORD *)(v14 + 4) = ReceiveQueueByQueueId->PcwDatapathEventMask;
        }
        *(_DWORD *)(v14 + 8) = 28;
        v22 = 0;
        *(_DWORD *)(v14 + 12) = NumFilters;
        *(_DWORD *)(v14 + 16) = 16;
        for ( i = v14 + 28; v22 < NumFilters; Flink = *($4E30824A80479617F9AA9ECC46CB5756 **)&Flink->Reserved4.Length )
        {
          if ( v3 )
          {
            if ( Flink == ($4E30824A80479617F9AA9ECC46CB5756 *)&v3->FilterList )
              break;
            p_PcwDataBlock = &Flink[6].PcwDataBlock;
            v25 = (_DWORD *)&Flink[6].PcwDataBlock + 1;
            v26 = Flink + 1;
          }
          else
          {
            if ( Flink == &ReceiveQueueByQueueId->32 )
              break;
            p_PcwDataBlock = &Flink[7].PcwDataBlock;
            v25 = (_DWORD *)&Flink[7].PcwDataBlock + 1;
            v26 = Flink + 2;
          }
          ++v22;
          *(_OWORD *)i = 0LL;
          *(_DWORD *)i = 1048960;
          *(_DWORD *)(i + 4) = *(_DWORD *)p_PcwDataBlock;
          *(_DWORD *)(i + 8) = *v25;
          *(_DWORD *)(i + 12) = *(_DWORD *)&v26->Reserved4.Length;
          i += 16LL;
        }
        v27 = NewIrql;
        v29[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v29[1]->Lock, v27);
        v28 = *((_QWORD *)a1 + 4);
        *((_DWORD *)a1 + 10) = 0;
        *(_DWORD *)(v28 + 60) = v20;
      }
      else
      {
        v29[1]->MiniportThread = 0LL;
        KeReleaseSpinLock(&v29[1]->Lock, NewIrql);
        *((_DWORD *)a1 + 10) = -1073676266;
      }
      v4 = 1;
    }
  }
  else
  {
    *v8 = -1073741637;
  }
LABEL_15:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x19u,
      0x1Fu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v29[1],
      *((_DWORD *)a1 + 10));
  return v4;
}
