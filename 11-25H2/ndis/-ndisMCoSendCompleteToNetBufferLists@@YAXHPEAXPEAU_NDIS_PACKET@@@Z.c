/*
 * XREFs of ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1400DAFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x140031100 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1400312A0 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x14006D530 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400E1AEC (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCoSendCompleteToNetBufferLists(int a1, _QWORD *a2, struct _NDIS_PACKET *a3)
{
  __int64 v4; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _NDIS_PACKET *v7; // rcx
  struct _NET_BUFFER_LIST *v8; // rdx
  struct _NDIS_STACK_RESERVED *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v4 = a2[9];
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  if ( (v6->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a3->Reserved + a3->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(*(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120), a3);
  if ( !a1 )
    NDISM_SEND_PACKET_STATS(v6, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a3, &v9);
  *((_DWORD *)v9 + 2) = 0;
  --*(_DWORD *)&a3[-1].ProtocolReserved[4];
  v8 = ndisXlateSendCompletePacketToNetBufferList(v7, a1);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(v4 + 64))(*(_QWORD *)(v4 + 24), v8, 0LL);
}
