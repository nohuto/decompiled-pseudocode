/*
 * XREFs of NdisFreePacket @ 0x140042E10
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x140042510 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x140042650 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140042CD0 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ndisLWM5IndicateReceive @ 0x140063060 (ndisLWM5IndicateReceive.c)
 *     NdisMTransferDataComplete @ 0x1400D8CA0 (NdisMTransferDataComplete.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1400D5E54 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __stdcall NdisFreePacket(PNDIS_PACKET Packet)
{
  struct _NDIS_PKT_POOL *Pool; // rdi
  unsigned __int64 Flink; // rbx
  KIRQL v3; // bp
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _NDIS_PKT_POOL **Blink; // rcx
  _LIST_ENTRY *p_AgingBlocks; // rsi
  LONGLONG v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  struct _NDIS_PKT_POOL **v11; // rcx
  KIRQL v12; // bp
  _SLIST_HEADER *v13; // r14
  LONGLONG v14; // rcx
  _LIST_ENTRY *Alignment; // rax
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *p_FreeBlocks; // rax

  Pool = (struct _NDIS_PKT_POOL *)Packet->Private.Pool;
  Flink = (unsigned __int64)Packet & 0xFFFFFFFFFFFFF000uLL;
  Packet->Private.NdisPacketFlags = 0;
  if ( Pool->BlockSize != 4096 )
    Flink = (unsigned __int64)Pool->FreeBlocks.Flink;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)(Flink + 32), (PSLIST_ENTRY)Packet);
  if ( Pool->MaxBlocks > 1u )
  {
    if ( Pool->BlocksAllocated > 1 && ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock
      || *(_DWORD *)(Flink + 48) == 1 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
      if ( ExQueryDepthSList((PSLIST_HEADER)(Flink + 32)) == Pool->PktsPerBlock )
      {
        *(_QWORD *)(Flink + 16) = MEMORY[0xFFFFF78000000320];
        v4 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink )
          goto LABEL_10;
        v5 = *(_QWORD **)(Flink + 8);
        if ( *v5 != Flink )
          goto LABEL_10;
        *v5 = v4;
        *(_QWORD *)(v4 + 8) = v5;
        Blink = (struct _NDIS_PKT_POOL **)Pool->AgingBlocks.Blink;
        if ( *Blink != (struct _NDIS_PKT_POOL *)&Pool->AgingBlocks )
          goto LABEL_10;
        *(_QWORD *)Flink = &Pool->AgingBlocks;
        *(_QWORD *)(Flink + 8) = Blink;
        *Blink = (struct _NDIS_PKT_POOL *)Flink;
        Pool->AgingBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 2;
      }
      else if ( *(_DWORD *)(Flink + 48) == 1 )
      {
        v9 = *(_QWORD *)Flink;
        if ( *(_QWORD *)(*(_QWORD *)Flink + 8LL) != Flink
          || (v10 = *(_QWORD **)(Flink + 8), *v10 != Flink)
          || (*v10 = v9,
              *(_QWORD *)(v9 + 8) = v10,
              v11 = (struct _NDIS_PKT_POOL **)Pool->FreeBlocks.Blink,
              *v11 != (struct _NDIS_PKT_POOL *)&Pool->FreeBlocks) )
        {
LABEL_10:
          __fastfail(3u);
        }
        *(_QWORD *)Flink = &Pool->FreeBlocks;
        *(_QWORD *)(Flink + 8) = v11;
        *v11 = (struct _NDIS_PKT_POOL *)Flink;
        Pool->FreeBlocks.Blink = (_LIST_ENTRY *)Flink;
        *(_DWORD *)(Flink + 48) = 0;
      }
      KeReleaseSpinLock(&Pool->Lock, v3);
    }
    p_AgingBlocks = &Pool->AgingBlocks;
    if ( p_AgingBlocks->Flink != p_AgingBlocks )
    {
      v8 = MEMORY[0xFFFFF78000000320];
      if ( MEMORY[0xFFFFF78000000320] > Pool->NextScavengeTick.QuadPart )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&Pool->Lock);
        while ( 1 )
        {
          v13 = (_SLIST_HEADER *)p_AgingBlocks->Flink;
          if ( p_AgingBlocks->Flink == p_AgingBlocks )
            break;
          v14 = v13[1].Alignment + PoolAgingTicks.QuadPart;
          if ( v8 <= v14 )
          {
            Pool->NextScavengeTick.QuadPart = v14;
            break;
          }
          if ( (_LIST_ENTRY *)v13->Region != p_AgingBlocks )
            goto LABEL_10;
          Alignment = (_LIST_ENTRY *)v13->Alignment;
          if ( *(_SLIST_HEADER **)(v13->Alignment + 8) != v13 )
            goto LABEL_10;
          p_AgingBlocks->Flink = Alignment;
          Alignment->Blink = p_AgingBlocks;
          if ( ExQueryDepthSList(v13 + 2) == Pool->PktsPerBlock )
          {
            ndisFreePacketPoolHdr(v13, Pool);
          }
          else
          {
            v16 = Pool->FreeBlocks.Flink;
            p_FreeBlocks = &Pool->FreeBlocks;
            if ( v16->Blink != &Pool->FreeBlocks )
              goto LABEL_10;
            v13->Alignment = (unsigned __int64)v16;
            v13->Region = (unsigned __int64)p_FreeBlocks;
            v16->Blink = (_LIST_ENTRY *)v13;
            p_FreeBlocks->Flink = (_LIST_ENTRY *)v13;
            LODWORD(v13[3].Alignment) = 0;
          }
        }
        KeReleaseSpinLock(&Pool->Lock, v12);
      }
    }
  }
}
