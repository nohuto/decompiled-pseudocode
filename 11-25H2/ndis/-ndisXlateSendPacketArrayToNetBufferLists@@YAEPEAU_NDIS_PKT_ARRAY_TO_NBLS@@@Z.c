/*
 * XREFs of ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006B520
 * Callers:
 *     ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14006B3B0 (-ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DA2F0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x14001D2E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x140032400 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x14006BE70 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 */

bool __fastcall ndisXlateSendPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  unsigned int v2; // ecx
  char v3; // r8
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *v6; // r12
  unsigned int v7; // ebp
  int v8; // edi
  int v9; // edx
  struct _NDIS_PACKET **v10; // rbx
  struct _NDIS_PACKET *v11; // rax
  int v12; // eax
  bool result; // al
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  unsigned __int64 v15; // rsi
  int v16; // edx
  unsigned int v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rbx
  char v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+78h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 4);
  v3 = 1;
  v21 = v2;
  v4 = 0LL;
  v20 = 1;
  v5 = *((_QWORD *)a1 + 1);
  v6 = 0LL;
  v7 = *((_DWORD *)a1 + 8);
  v8 = 0;
  while ( 1 )
  {
    v9 = v8;
    if ( v7 >= v2 )
    {
LABEL_9:
      *((_DWORD *)a1 + 10) = v8;
      *((_DWORD *)a1 + 8) = v7;
      result = v7 != v2;
      *((_QWORD *)a1 + 3) = v4;
      return result;
    }
    v10 = (struct _NDIS_PACKET **)(v5 + 8LL * v7);
    v11 = *v10;
    if ( v3 == 1 )
    {
      v8 |= 2u;
      v20 = 0;
      if ( SLOBYTE(v11->Private.Flags) < 0 )
        v8 = v9;
    }
    else
    {
      v12 = v11->Private.Flags & 0x80;
      if ( (v8 & 2) != 0 )
      {
        if ( v12 )
          goto LABEL_9;
      }
      else if ( !v12 )
      {
        goto LABEL_9;
      }
    }
    NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
    v15 = (unsigned __int64)NetBufferAndNetBufferList;
    if ( !NetBufferAndNetBufferList )
      break;
    ndisPacketToNetBuffer(*v10, NetBufferAndNetBufferList->FirstNetBuffer);
    if ( !v4 )
      v4 = v15;
    if ( v6 )
      *v6 = v15;
    *(_QWORD *)(v15 + 120) = *(_QWORD *)a1;
    v6 = (_QWORD *)v15;
    *(_QWORD *)(v15 + 48) = *v10;
    ndisCopyPacketInfoToNBL((__int64)*v10, (_QWORD *)v15, 0);
    *(_BYTE *)(v4 + 200) = (*v10)->Private.Flags & 0xF;
    *(_QWORD *)(v4 + 184) = *(_QWORD *)((char *)&(*v10)[1].Private.PhysicalCount + (*v10)->Private.NdisPacketOobOffset);
    v16 = *(_DWORD *)(v15 + 136) | 0x10;
    *(_DWORD *)(v15 + 136) = v16;
    v17 = v16 & 0xFFFFF7FF;
    v18 = v16 | 0x800;
    if ( ((*v10)->Private.NdisPacketFlags & 0x20) == 0 )
      v18 = v17;
    *(_DWORD *)(v15 + 136) = v18;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v15, 0LL, 0x15u, *v10, 0);
    v2 = v21;
    ++v7;
    v3 = v20;
  }
  if ( v4 )
  {
    do
    {
      if ( *(int *)ndisNblTrackerMode >= 3 )
        ndisNblTrackerRecordEventInternal(v4, 0LL, 0x16u, 0LL, 0);
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 32LL) = 0LL;
      v19 = *(_QWORD *)v4;
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v4);
      v4 = v19;
    }
    while ( v19 );
  }
  *((_QWORD *)a1 + 3) = 0LL;
  return 0;
}
