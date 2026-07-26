/*
 * XREFs of ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007D980
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x140042650 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1400427C0 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA908 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMAbortPackets(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2, void *a3)
{
  struct _GUID *v4; // rdx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _LIST_ENTRY *p_PacketList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v8; // rdx
  __int64 v9; // rax
  struct _NDIS_PACKET *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int16 *p_NdisPacketOobOffset; // rbp
  __int64 v15; // rax
  PMDL *v16; // rbx
  __int64 v17; // rax
  struct _NET_BUFFER_LIST *v18; // rax
  _QWORD *v19; // [rsp+40h] [rbp-48h] BYREF
  struct _GUID *v20; // [rsp+48h] [rbp-40h]
  _QWORD v21[2]; // [rsp+50h] [rbp-38h] BYREF

  v4 = (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      3,
      69,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      0);
  }
  Next = a1->WorkQueue[1].Next;
  if ( Next )
  {
    a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
    Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
    a1->SingleWorkItems[1].Next = Next;
  }
  v21[1] = v21;
  p_PacketList = &a1->PacketList;
  v21[0] = v21;
  v20 = (struct _GUID *)&v19;
  v19 = &v19;
  a1->FirstPendingPacket = 0LL;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    if ( Flink->Blink != p_PacketList
      || (v8 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_PacketList->Flink = v8, v8->Blink = p_PacketList, v4 = v20, *(_QWORD ***)&v20->Data1 != &v19) )
    {
LABEL_29:
      __fastfail(3u);
    }
    Flink->Blink = (_LIST_ENTRY *)v20;
    Flink->Flink = (_LIST_ENTRY *)&v19;
    *(_QWORD *)&v4->Data1 = Flink;
    v20 = (struct _GUID *)Flink;
  }
  a1->FirstPendingPacket = 0LL;
  while ( v19 != &v19 )
  {
    if ( (_QWORD **)v19[1] != &v19 )
      goto LABEL_29;
    v9 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_29;
    v10 = (struct _NDIS_PACKET *)(v19 - 8);
    v19 = (_QWORD *)*v19;
    *(_QWORD *)(v9 + 8) = &v19;
    v11 = *(_DWORD *)&v10[-1].ProtocolReserved[4];
    if ( v11 >= ndisPacketStackSize )
      v12 = 16LL;
    else
      v12 = (__int64)v10 + 48 * (v11 - (unsigned __int64)ndisPacketStackSize);
    v13 = *(_QWORD *)v12;
    *(_QWORD *)v12 = 1297040183LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    p_NdisPacketOobOffset = &v10->Private.NdisPacketOobOffset;
    if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)v10->Reserved + *p_NdisPacketOobOffset) )
      ndisMFreeSGList(a1, v10);
    if ( (a1->SendFlags & 8) != 0 )
    {
      v15 = *p_NdisPacketOobOffset;
      if ( *(void **)((char *)&v10[1].Private.Pool + v15) )
      {
        v10->Private.Flags &= ~0x10000u;
        v16 = *(PMDL **)((char *)&v10[1].Private.Pool + v15);
        *(void **)((char *)&v10[1].Private.Pool + v15) = 0LL;
        IoFreeMdl(*v16);
        *v16 = 0LL;
        v10->Private.ValidCounts = 0;
      }
    }
    v17 = *p_NdisPacketOobOffset;
    v10->Private.NdisPacketFlags &= 0xC0u;
    if ( *(_MDL **)((char *)&v10[1].Private.Head + v17) )
    {
      v18 = ndisXlateSendCompletePacketToNetBufferList(v10, -1071448052);
      if ( v18 )
      {
        v18->Status = -1071448052;
        ndisInvokeNextSendCompleteHandler(
          v18,
          0,
          (struct _NDIS_FILTER_BLOCK *)a1,
          a1->Next.SendNetBufferListsCompleteObject,
          a1->Next.SendNetBufferListsCompleteContext,
          (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))a1->Next.SendNetBufferListsCompleteHandler);
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, __int64))(v13 + 112))(v13, v10, 3221291020LL);
    }
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
  }
  _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x400000u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      3,
      70,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      0);
  }
}
