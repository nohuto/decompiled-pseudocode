/*
 * XREFs of ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0
 * Callers:
 *     ?ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14008A250 (-ndisMIndicatePacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1400D2934 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D3420 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140026C20 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x140042070 (-ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z.c)
 *     ?XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z @ 0x1400420D0 (-XlateReceivePacketStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAEK@Z.c)
 *     ndisIPsecPktInfoToNBLInfo @ 0x1400A2A84 (ndisIPsecPktInfoToNBLInfo.c)
 */

_BOOL8 __fastcall ndisXlateRecvPacketArrayToNetBufferLists(struct _NDIS_PKT_ARRAY_TO_NBLS *a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r11d
  __int64 v4; // rbp
  struct _NET_BUFFER_LIST *v5; // r13
  unsigned int v6; // r15d
  int v7; // r14d
  bool v8; // zf
  struct _NDIS_PACKET *v9; // rsi
  __int64 NdisPacketOobOffset; // rax
  unsigned __int64 v11; // rdi
  char v12; // r12
  bool v13; // r10
  _BOOL8 result; // rax
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  ULONG v16; // r10d
  _MDL *Head; // rcx
  unsigned __int8 *MappedSystemVa; // rax
  __int64 v19; // rcx
  struct _NDIS_PKT_ARRAY_TO_NBLS *v20; // rax
  int v21; // eax
  __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h]
  _QWORD *v25; // [rsp+A0h] [rbp+18h]
  struct _NDIS_MINIPORT_BLOCK *v26; // [rsp+A8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 1);
  v3 = 0;
  v4 = *((unsigned int *)a1 + 8);
  v5 = 0LL;
  v6 = *((_DWORD *)a1 + 4);
  v26 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v25 = 0LL;
  v23 = 0;
  v22 = v1;
  v7 = *(_DWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v1 + 8 * v4) + 42LL) + *(_QWORD *)(v1 + 8 * v4) + 32LL);
  while ( 1 )
  {
    v8 = (_DWORD)v4 == v6;
    if ( (unsigned int)v4 >= v6 )
      break;
    v9 = *(struct _NDIS_PACKET **)(v1 + 8 * v4);
    NdisPacketOobOffset = v9->Private.NdisPacketOobOffset;
    v24 = *(unsigned int *)((char *)&v9->Private.Count + NdisPacketOobOffset);
    if ( v24 != v7 )
    {
      v8 = (_DWORD)v4 == v6;
      break;
    }
    if ( (v9->Private.NdisPacketFlags & 0x80u) == 0 )
    {
      v12 = 0;
      v11 = 0LL;
    }
    else
    {
      v11 = *(unsigned __int64 *)((char *)&v9[1].Private.Tail + NdisPacketOobOffset);
      v12 = 1;
      if ( v11 )
      {
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v11, 0LL, 0x12u, v9, 0);
        *(_QWORD *)v11 = 0LL;
        goto LABEL_20;
      }
    }
    if ( ndisNetBufferListPool )
    {
      NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(ndisNetBufferListPool, 0, 0, 0LL, 0, 0LL);
      v3 = v23;
      v11 = (unsigned __int64)NetBufferAndNetBufferList;
      if ( v12 )
        *(_MDL **)((char *)&v9[1].Private.Tail + v9->Private.NdisPacketOobOffset) = (_MDL *)NetBufferAndNetBufferList;
    }
    if ( !v11 )
    {
      if ( v5 )
        v7 = -1073741670;
      v13 = v5 != 0LL;
      goto LABEL_12;
    }
LABEL_20:
    ndisPacketToNetBuffer(v9, *(struct _NET_BUFFER **)(v11 + 8));
    Head = v9->Private.Head;
    if ( (Head->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int8 *)Head->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int8 *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, v16, 0x40000000u);
    if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset)
      && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      XlateReceivePacketStats(v26, MappedSystemVa, v9->Private.TotalLength);
    }
    *(_DWORD *)(v11 + 136) |= 0x10u;
    *(_QWORD *)(v11 + 48) = v9;
    *(_QWORD *)(v11 + 144) = *(_QWORD *)(&v9->Private.ValidCounts + v9->Private.NdisPacketOobOffset);
    *(_QWORD *)(v11 + 160) = *(_QWORD *)&v9->MacReserved[v9->Private.NdisPacketOobOffset + 8];
    *(_QWORD *)(v11 + 168) = *(_QWORD *)&v9->MacReserved[v9->Private.NdisPacketOobOffset + 16];
    *(_QWORD *)(v11 + 176) = *(unsigned __int64 *)((char *)&v9->Reserved[1] + v9->Private.NdisPacketOobOffset);
    *(_QWORD *)(v11 + 184) = *(_QWORD *)((char *)&v9[1].Private.PhysicalCount + v9->Private.NdisPacketOobOffset);
    v19 = *(_QWORD *)&v9->MiniportReserved[v9->Private.NdisPacketOobOffset];
    if ( v19 )
      ndisIPsecPktInfoToNBLInfo(v19, 2LL, v11 + 152);
    if ( (v9->Private.Flags & 0x100) != 0 )
    {
      *(_DWORD *)(v11 + 136) |= 0x80u;
      *(_DWORD *)(v11 + 128) |= 0x8000u;
      v20 = (struct _NDIS_PKT_ARRAY_TO_NBLS *)&v9->MacReserved[v9->Private.NdisPacketOobOffset + 24];
    }
    else
    {
      v20 = a1;
    }
    *(_QWORD *)(v11 + 120) = *(_QWORD *)v20;
    if ( (v9->Private.Flags & 0x80u) != 0 || (v21 = *(_DWORD *)(v11 + 136), (v21 & 0x80u) == 0) )
      *(_DWORD *)(v11 + 136) &= ~0x200u;
    else
      *(_DWORD *)(v11 + 136) = v21 | 0x200;
    v7 = v24;
    if ( v24 != -1073741670 )
      *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v11, 0LL, 0x1Bu, v9, 0);
    if ( v5 )
      *v25 = v11;
    else
      v5 = (struct _NET_BUFFER_LIST *)v11;
    v4 = (unsigned int)(v4 + 1);
    v1 = v22;
    v3 = ++v23;
    v25 = (_QWORD *)v11;
  }
  v13 = !v8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v5, v3);
LABEL_12:
  result = v13;
  *((_QWORD *)a1 + 3) = v5;
  *((_DWORD *)a1 + 8) = v4;
  *((_DWORD *)a1 + 9) = v3;
  if ( v7 == -1073741670 )
    *((_DWORD *)a1 + 10) |= 2u;
  return result;
}
