/*
 * XREFs of ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x140056390
 * Callers:
 *     ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140056220 (-ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D2934 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3420 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

struct _NDIS_PACKET *__fastcall ndisXlateReturnNetBufferListToPacket(struct _NET_BUFFER_LIST *a1)
{
  _BYTE *v2; // rsi
  char v3; // di

  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  v2 = a1->NdisReserved[0];
  a1->Flags &= 0xFFFFFF6B;
  a1->NblFlags &= ~0x8000u;
  a1->NdisReserved[0] = 0LL;
  v3 = v2[41];
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)a1, 0LL, 0x1Cu, v2, 0);
  if ( v3 >= 0 )
  {
    NdisFreeNetBufferList(a1);
  }
  else if ( *(int *)ndisNblTrackerMode >= 3 )
  {
    ndisNblTrackerRecordEventInternal((unsigned __int64)a1, 0LL, 0x11u, v2, 0);
  }
  return (struct _NDIS_PACKET *)v2;
}
