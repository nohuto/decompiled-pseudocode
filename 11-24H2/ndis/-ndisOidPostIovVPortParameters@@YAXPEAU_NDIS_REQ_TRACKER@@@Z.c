/*
 * XREFs of ?ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DFE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400DEA78 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovVPortParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *VPortByVPortIdInternal; // rdx
  int v8; // eax
  __int64 v9; // r8
  _LIST_ENTRY *p_PacketList; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY v12; // xmm1
  __int64 v13; // rcx
  __int128 v14; // [rsp+40h] [rbp-98h]
  __int64 v15; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v15, a1);
  v14 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      66,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) == 1 && (_BYTE)v14 && !*((_DWORD *)a1 + 10) )
  {
    v6 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
    VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v5, *(_DWORD *)(v6 + 12));
    if ( VPortByVPortIdInternal )
    {
      v8 = *(_DWORD *)(v6 + 4);
      if ( (v8 & 0x10000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Interrupt) = (unsigned __int16)v8;
      if ( (*(_DWORD *)(v6 + 4) & 0x40000) != 0 )
        HIDWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v6 + 540);
      if ( (*(_DWORD *)(v6 + 4) & 0x80000) != 0 )
        LODWORD(VPortByVPortIdInternal->NextSendNetBufferListsHandler) = *(_DWORD *)(v6 + 544);
      if ( (*(_DWORD *)(v6 + 4) & 0x100000) != 0 )
        *(_OWORD *)&VPortByVPortIdInternal->EthRxCompleteHandler = *(_OWORD *)(v6 + 552);
      if ( (*(_DWORD *)(v6 + 4) & 0x20000) != 0 )
      {
        v9 = 4LL;
        p_PacketList = &VPortByVPortIdInternal->PacketList;
        v11 = (_LIST_ENTRY *)(v6 + 16);
        do
        {
          *p_PacketList = *v11;
          p_PacketList[1] = v11[1];
          p_PacketList[2] = v11[2];
          p_PacketList[3] = v11[3];
          p_PacketList[4] = v11[4];
          p_PacketList[5] = v11[5];
          p_PacketList[6] = v11[6];
          p_PacketList += 8;
          v12 = v11[7];
          v11 += 8;
          p_PacketList[-1] = v12;
          --v9;
        }
        while ( v9 );
        LODWORD(p_PacketList->Flink) = v11->Flink;
      }
      if ( (*(_DWORD *)(v6 + 4) & 0x400000) != 0 )
        LODWORD(VPortByVPortIdInternal->WorkQueue[4].Next) = *(_DWORD *)(v6 + 744);
      if ( (*(_DWORD *)(v6 + 4) & 0x800000) != 0 )
      {
        v13 = *(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags;
        if ( v13 )
        {
          if ( *(_DWORD *)(v6 + 12) )
          {
            *(_DWORD *)(v13 + 96) -= LODWORD(VPortByVPortIdInternal->Reserved30);
            *(_DWORD *)(*(_QWORD *)&VPortByVPortIdInternal->LinkStateIndicationFlags + 96LL) += *(_DWORD *)(v6 + 536);
          }
          else
          {
            *(_DWORD *)(v13 + 648) = *(_DWORD *)(v6 + 536);
          }
          LODWORD(VPortByVPortIdInternal->Reserved30) = *(_DWORD *)(v6 + 536);
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741811;
    }
    v5->MiniportThread = 0LL;
    KeReleaseSpinLock(&v5->Lock, NewIrql);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      67,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
}
