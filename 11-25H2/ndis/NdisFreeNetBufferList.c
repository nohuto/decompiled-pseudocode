/*
 * XREFs of NdisFreeNetBufferList @ 0x14001B730
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x14001A010 (NdisFreeFragmentNetBufferList.c)
 *     NdisReturnNetBufferLists @ 0x14001BA20 (NdisReturnNetBufferLists.c)
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x14001D2E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x14001D930 (NdisAllocateNetBufferList.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14002EF60 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x140038170 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140041E60 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140044330 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ndisFreePeriodicReceives @ 0x1400454A0 (ndisFreePeriodicReceives.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1400464B0 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x14006B520 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x14006C0D0 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     NdisFreeReassembledNetBufferList @ 0x1400CDD70 (NdisFreeReassembledNetBufferList.c)
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1400DD194 (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x14001A250 (ndisIsCurrentNblContextBlockPreallocated.c)
 *     ndisFreeToLookasideList @ 0x14001B990 (ndisFreeToLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisPplLazyInitializeLookaside @ 0x14007A1D0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  __int64 v1; // rdx
  _DWORD *NdisPoolHandle; // rsi
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  unsigned __int64 v5; // rax
  char *v6; // rdi
  volatile signed __int32 *v7; // rsi
  unsigned __int16 v8; // di
  __int64 v9; // r8
  unsigned __int16 v10; // di
  unsigned __int16 v11; // ax
  int v12; // ecx
  unsigned __int16 *v13; // rcx

  NdisPoolHandle = NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  if ( Context )
  {
    if ( (NetBufferList->Flags & 0x400) != 0 )
    {
      v8 = Context->Size - Context->Offset;
      while ( v8 )
      {
        NetBufferList->Context->Offset += v8;
        if ( ndisIsCurrentNblContextBlockPreallocated((__int64)NetBufferList) )
          break;
        if ( v8 >= *(_WORD *)(v9 + 8) )
          v8 = *(_WORD *)(v9 + 8);
        LOWORD(NetBufferList->NdisReserved[1]) -= v8;
        v10 = *(_WORD *)(v9 + 10);
        v11 = *(_WORD *)(v9 + 8);
        if ( v10 < v11 )
          break;
        v8 = v10 - v11;
        NetBufferList->Context = *(_NET_BUFFER_LIST_CONTEXT **)v9;
        v12 = *(unsigned __int16 *)(v9 + 8);
        *(_WORD *)(v9 + 10) = v12;
        *(_QWORD *)v9 = 0LL;
        v1 = LOWORD(NetBufferList->NdisReserved[1]);
        if ( (int)v1 + v12 > ndisMaxCachedNblContextSize )
        {
          ExFreePoolWithTag((PVOID)v9, 0);
        }
        else if ( v12 < WORD1(NetBufferList->NdisReserved[1]) - (int)v1 )
        {
          ExFreePoolWithTag((PVOID)v9, 0);
          v13 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
          if ( v13 )
          {
            v1 = WORD1(NetBufferList->NdisReserved[1]) - (unsigned int)LOWORD(NetBufferList->NdisReserved[1]);
            if ( v13[4] < (int)v1 )
            {
              ExFreePoolWithTag(v13, 0);
              NetBufferList->NetBufferListInfo[28] = 0LL;
            }
          }
        }
        else
        {
          NetBufferList->NetBufferListInfo[28] = (void *)v9;
        }
      }
    }
  }
  NetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)NetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v1) = 1;
    WfpNblInfoCleanup(NetBufferList, v1);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 4u, 0LL, 0);
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)NetBufferList < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)NetBufferList, 0LL);
    ExFreePoolWithTag(&NetBufferList[-1].NetBufferListInfo[26], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_12;
    v5 = (unsigned __int64)LODWORD(NetBufferList[-1].NetBufferListInfo[29]) << 8;
    v6 = (char *)NdisPoolHandle + v5 + 384;
    if ( !v6[216] )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v5 + 384));
    if ( !(unsigned __int8)ndisFreeToLookasideList(v6, NetBufferList) )
    {
LABEL_12:
      v7 = NdisPoolHandle + 32;
      _InterlockedIncrement(v7 + 7);
      if ( ExQueryDepthSList((PSLIST_HEADER)v7) >= *((_WORD *)v7 + 8) )
      {
        _InterlockedIncrement(v7 + 8);
        (*((void (__fastcall **)(PNET_BUFFER_LIST, volatile signed __int32 *))v7 + 7))(NetBufferList, v7);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v7, (PSLIST_ENTRY)NetBufferList);
      }
    }
  }
}
