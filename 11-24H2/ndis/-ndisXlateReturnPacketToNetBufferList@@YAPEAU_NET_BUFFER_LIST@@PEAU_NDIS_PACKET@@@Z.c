/*
 * XREFs of ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140042CD0
 * Callers:
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14001D7C0 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14004E1F0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140078AA0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x14008D890 (ndisReturnPacketToNetBufferList.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D3670 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisFreePacket @ 0x140042E10 (NdisFreePacket.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  _QWORD *v3; // rdi
  _MDL *Head; // rdx
  __int64 v5; // r8
  _MDL *Tail; // rcx
  unsigned int Flags; // eax
  __int64 v8; // rcx

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  v3[18] = *(_QWORD *)(&a1->Private.ValidCounts + a1->Private.NdisPacketOobOffset);
  v3[20] = *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 8];
  v3[21] = *(_QWORD *)&a1->MacReserved[a1->Private.NdisPacketOobOffset + 16];
  v3[22] = *(unsigned __int64 *)((char *)&a1->Reserved[1] + a1->Private.NdisPacketOobOffset);
  v3[23] = *(_QWORD *)((char *)&a1[1].Private.PhysicalCount + a1->Private.NdisPacketOobOffset);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v3, 0LL, 0x1Eu, a1, 0);
  }
  else
  {
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((unsigned __int64)v3, 0LL, 0x1Au, a1, 0);
    Head = a1->Private.Head;
    v5 = v3[1];
    if ( Head )
    {
      Tail = a1->Private.Tail;
      Tail->ByteCount = *(_DWORD *)a1->MiniportReserved;
      Tail->Next = *(struct _MDL **)&a1->MacReserved[8];
      Head->ByteOffset -= *(_DWORD *)(v5 + 16);
      Head->ByteCount += *(_DWORD *)(v5 + 16);
      if ( (Head->MdlFlags & 5) != 0 )
        Head->MappedSystemVa = (char *)Head->MappedSystemVa - *(unsigned int *)(v5 + 16);
    }
    Flags = a1->Private.Flags;
    if ( (Flags & 0x100) != 0 )
    {
      v8 = a1->Private.NdisPacketOobOffset;
      a1->Private.Flags = Flags & 0xFFFFFEFF;
      *(_QWORD *)&a1->MacReserved[v8 + 24] = 0LL;
    }
    NdisFreePacket(a1);
  }
  return (struct _NET_BUFFER_LIST *)v3;
}
