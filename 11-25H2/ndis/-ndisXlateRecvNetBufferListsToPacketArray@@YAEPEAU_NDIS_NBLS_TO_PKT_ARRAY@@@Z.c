/*
 * XREFs of ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002F8A0
 * Callers:
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140037030 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x14006A5F0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400DA9C0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAllocatePacket @ 0x14002FD50 (NdisAllocatePacket.c)
 */

unsigned __int8 __fastcall ndisXlateRecvNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // esi
  int v4; // edi
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  void **v9; // r14
  PNDIS_PACKET v10; // r9
  _MDL *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int ByteCount; // eax
  unsigned int v16; // r10d
  _DWORD *v17; // rdx
  __int64 v18; // r8
  char *v19; // r9
  unsigned int *v20; // rcx
  int v21; // eax
  unsigned int *v22; // rdx
  unsigned int v23; // eax
  _DWORD *v25; // rax
  int v26; // r10d
  int v27; // ecx
  int Status; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+10h]
  PNDIS_PACKET Packet; // [rsp+80h] [rbp+18h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  v4 = 0;
  v6 = *(_QWORD *)a1;
  v29 = v2;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = 0;
      if ( v3 >= v2 )
        break;
      if ( (*(_DWORD *)(v1 + 136) & 0x10) != 0 && (*(_DWORD *)(v1 + 128) & 2) != 0 )
      {
        v25 = *(_DWORD **)(v1 + 48);
        v8 = v3;
        v9 = (void **)(v6 + 8LL * v3);
        *v9 = v25;
        v25[9] |= 0x4000u;
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v1, 0LL, 0x1Du, *v9, 0);
        v4 = 0;
      }
      else
      {
        v7 = *(_QWORD *)(v1 + 8);
        v8 = v3;
        Status = 0;
        v9 = (void **)(v6 + 8LL * v3);
        *v9 = 0LL;
        if ( !ndisRecvPacketPool )
        {
          v4 = -1073741670;
          break;
        }
        Packet = 0LL;
        NdisAllocatePacket(&Status, &Packet, ndisRecvPacketPool);
        v4 = Status;
        if ( Status )
          break;
        v10 = Packet;
        Packet->Private.Head = 0LL;
        *(_DWORD *)v10->MiniportReserved = 0;
        *(_QWORD *)&v10->MacReserved[8] = 0LL;
        v11 = *(_MDL **)(v7 + 8);
        v12 = *(unsigned int *)(v7 + 16);
        v11->ByteOffset += v12;
        v11->ByteCount -= v12;
        if ( (v11->MdlFlags & 5) != 0 )
          v11->MappedSystemVa = (char *)v11->MappedSystemVa + v12;
        v13 = *(_DWORD *)(v7 + 24);
        v14 = 0;
        if ( v13 )
          v10->Private.Head = v11;
        while ( v14 < v13 && v11 )
        {
          ByteCount = v11->ByteCount;
          v16 = v13 - v14;
          if ( ByteCount >= v13 - v14 )
          {
            *(_DWORD *)v10->MiniportReserved = ByteCount;
            v14 = v13;
            *(_QWORD *)&v10->MacReserved[8] = v11->Next;
            v11->ByteCount = v16;
            v11->Next = 0LL;
            break;
          }
          v11 = v11->Next;
          v14 += ByteCount;
        }
        v4 = 0;
        v10->Private.Head = *(_MDL **)(v7 + 8);
        v10->Private.Tail = v11;
        v10->Private.TotalLength = v14;
        v10->Private.ValidCounts = 0;
        *v9 = v10;
        if ( *(int *)ndisNblTrackerMode >= 3 )
          ndisNblTrackerRecordEventInternal(v1, 0LL, 0x19u, v10, 0);
      }
      v17 = *v9;
      *(_DWORD *)((char *)v17 + *((unsigned __int16 *)*v9 + 21) + 32) = *((_DWORD *)a1 + 3);
      *(_DWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 16) = 14;
      *(_QWORD *)((char *)*v9 + *((unsigned __int16 *)*v9 + 21) + 72) = 0LL;
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 40) = *(_QWORD *)(v1 + 144);
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 64) = *(_QWORD *)(v1 + 168);
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 88) = *(_QWORD *)(v1 + 176);
      *(_WORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 90) = 0;
      *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 104) = *(_QWORD *)(v1 + 184);
      v18 = *((unsigned __int16 *)v17 + 21);
      if ( *(_QWORD *)(v1 + 152) )
      {
        v19 = (char *)(v17 + 32);
        v26 = v17[32] ^ ((unsigned __int8)v17[32] ^ (unsigned __int8)*(_QWORD *)(v1 + 152)) & 1;
        v17[32] = v26;
        v27 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)*(_WORD *)(v1 + 152)) & 2;
        v17[32] = v27;
        v17[32] = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*(_WORD *)(v1 + 152)) & 4;
        v17[33] = *(unsigned __int16 *)(v1 + 154);
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)((char *)v17 + v18 + 48) = v19;
      if ( (*(_DWORD *)(v1 + 136) & 0x80u) != 0 )
      {
        v17[9] |= 0x100u;
        *((_BYTE *)v17 + 41) |= 2u;
        *(_QWORD *)((char *)v17 + *((unsigned __int16 *)v17 + 21) + 72) = *(_QWORD *)(v1 + 120);
      }
      v20 = v17 + 9;
      v21 = v17[9];
      v22 = v17 + 9;
      if ( (*(_DWORD *)(v1 + 136) & 0x200) != 0 )
        v23 = v21 & 0xFFFFFF7F;
      else
        v23 = v21 | 0x80;
      *v22 = v23;
      ++v3;
      *v20 = v23 | 0x20000;
      *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v8) + 42LL) + *(_QWORD *)(v6 + 8 * v8) + 112LL) = v1;
      v1 = *(_QWORD *)v1;
      if ( !v1 )
        break;
      v2 = v29;
    }
  }
  *((_DWORD *)a1 + 8) = v3;
  *((_QWORD *)a1 + 2) = v1;
  if ( v1 )
    *((_QWORD *)a1 + 3) = *(_QWORD *)(v1 + 8);
  if ( v4 )
  {
    if ( v3 )
      return 1;
  }
  else if ( v1 )
  {
    return 1;
  }
  return 0;
}
