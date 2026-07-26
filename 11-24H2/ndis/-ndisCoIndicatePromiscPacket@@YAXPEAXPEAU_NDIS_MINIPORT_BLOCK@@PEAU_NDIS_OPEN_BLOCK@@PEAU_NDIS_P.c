/*
 * XREFs of ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D2934
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2CB0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D2FA0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3170 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x140056390 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisCoIndicatePromiscPacket(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NDIS_PACKET *a4,
        char a5)
{
  __int64 v5; // r12
  unsigned __int8 PmodeOpens; // al
  struct _NDIS_OPEN_BLOCK *v8; // rdi
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  int v11; // edx
  struct _NET_BUFFER_LIST *v12; // rsi
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rcx
  __int64 NdisPacketOobOffset; // rax
  unsigned int v17; // ebx
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  struct _NET_BUFFER_LIST *v19[2]; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+50h] [rbp-10h]
  struct _NDIS_PACKET *v21; // [rsp+90h] [rbp+30h] BYREF

  v21 = 0LL;
  v5 = a1[9];
  PmodeOpens = a2->PmodeOpens;
  v8 = a3;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  if ( a3 && PmodeOpens )
  {
    do
    {
      if ( a5 )
        FilterNextOpen = v8->FilterNextOpen;
      else
        FilterNextOpen = v8->MiniportNextOpen;
      if ( (v8->OpenFlags & 4) != 0 )
      {
        if ( v8->ProtocolHandle->MajorNdisVersion < 6u )
        {
          *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
          NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
          v17 = *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset);
          *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset) = -1073741670;
          a4->Private.Flags |= 0x100u;
          v8->ProtocolHandle->CoReceivePacketHandler(v8->ProtocolBindingContext, (void *)(v5 + 136), a4);
          *(unsigned int *)((char *)&a4->Private.Count + a4->Private.NdisPacketOobOffset) = v17;
          a4->Private.Flags &= ~0x100u;
        }
        else
        {
          v19[1] = 0LL;
          LODWORD(v20) = 0;
          *((_QWORD *)&v18 + 1) = &v21;
          *(_QWORD *)&v18 = a2;
          v21 = a4;
          LODWORD(v19[0]) = 1;
          DWORD2(v20) = 3;
          ndisXlateRecvPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)&v18);
          if ( (_DWORD)v20 )
          {
            v12 = v19[1];
            *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
            for ( i = v12; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
              i->Flags |= 0x80u;
            v12->NblFlags |= 0x8000u;
            v8->ProtocolHandle->CoReceiveNetBufferListsHandler(
              v8->ProtocolBindingContext,
              (void *)(v5 + 136),
              v12,
              DWORD1(v20),
              3u);
            Alignment = v12;
            do
            {
              Alignment->Flags &= ~0x80u;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
            v12->NblFlags &= ~0x8000u;
            do
            {
              v15 = v12;
              v12 = (struct _NET_BUFFER_LIST *)v12->Link.Alignment;
              ndisXlateReturnNetBufferListToPacket(v15);
            }
            while ( v12 );
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              19,
              10,
              (struct _GUID *)&WPP_04789eb9d50d37f5e019db2d2af48132_Traceguids);
          }
        }
      }
      v8 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
