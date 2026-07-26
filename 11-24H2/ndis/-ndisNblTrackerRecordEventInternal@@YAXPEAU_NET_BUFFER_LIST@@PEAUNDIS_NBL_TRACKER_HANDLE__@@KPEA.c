/*
 * XREFs of ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14001F140 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     NdisAllocateFragmentNetBufferList @ 0x140022480 (NdisAllocateFragmentNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x140024450 (NdisAllocateNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041AC0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x140042650 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x140042CD0 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14004BBF0 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14004BD90 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004D370 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x140056390 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400A1F08 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     NdisNblTrackerRecordEvent @ 0x1400A2010 (NdisNblTrackerRecordEvent.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1400C6990 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140039330 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x140061B70 (-ndisReleaseStackTrace@@YAXK@Z.c)
 *     ?ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z @ 0x14008CF40 (-ndisIsPossibleSmuggling@@YAET_NDIS_NBL_TRACKER_OWNER@@0PEAX@Z.c)
 *     ?ndisNblTrackerHitBreakNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAXK@Z @ 0x1400A1A74 (-ndisNblTrackerHitBreakNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall ndisNblTrackerRecordEventInternal(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  struct _NET_BUFFER_LIST *v11; // r9
  struct _NET_BUFFER_LIST **v12; // r9
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  unsigned __int64 v15; // rbp
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // r11d
  unsigned int v19; // edi
  unsigned __int32 v20; // r13d
  unsigned int v21; // r12d
  int v22; // ecx
  ULONG_PTR v23; // rcx
  unsigned int Number; // edx
  int v25; // edx
  unsigned int v26; // eax
  unsigned __int64 *v27; // r10
  unsigned int v28; // r8d
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  struct _NET_BUFFER_LIST *v31; // r12
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r13
  void *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v40; // [rsp+28h] [rbp-80h]
  unsigned int v41; // [rsp+30h] [rbp-78h]
  unsigned __int32 v42; // [rsp+34h] [rbp-74h]
  struct _NET_BUFFER_LIST *v44; // [rsp+40h] [rbp-68h]
  __int128 v45; // [rsp+48h] [rbp-60h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]

  v46 = 0LL;
  v44 = ndisBreakNbl;
  v6 = ndisMaxNumberOfProcessors + 1;
  v40 = 0;
  v7 = 0;
  v8 = a2 & 0xFFFFFFFFFFFFFFFDuLL;
  v9 = (unsigned __int64)a4;
  v10 = a2 | 0x8000000000000002uLL;
  v11 = (struct _NET_BUFFER_LIST *)a1;
  v45 = 0LL;
  while ( v11 )
  {
    v6 = ((unsigned __int8)ndisIsPossibleSmuggling(v8, v11->NetBufferListInfo[27], v11->SourceHandle) != 0) + 1;
    v7 += v6;
    if ( v7 > v14 )
      return;
    if ( v13 < 0x1F )
      break;
    v11 = *v12;
  }
  v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v16 = 8;
  if ( (v9 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    v16 = 16;
  if ( *(int *)ndisNblTrackerMode < 4 )
  {
    v17 = 0;
  }
  else
  {
    v17 = ndisCaptureStackTrace(v6);
    v40 = v17;
  }
  v18 = v16 + 8 * v7;
  v41 = v18;
  v19 = v18 >> 3;
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisNblTrackerHistoryNextIndex, v18 >> 3)
      % ndisNblTrackerHistorySize;
  v42 = v20;
  if ( *(int *)ndisNblTrackerMode >= 4 )
  {
    v21 = 0;
    if ( v19 )
    {
      do
      {
        v22 = HIDWORD(ndisNblTrackerHistoryBuffer[(v21 + v20) % ndisNblTrackerHistorySize]);
        if ( v22 >= 0 )
        {
          v23 = v22 & 0x3FFFFFF;
          if ( (_DWORD)v23 )
            ndisReleaseStackTrace(v23);
        }
        ++v21;
      }
      while ( v21 < v19 );
      v18 = v41;
      v17 = v40;
    }
    v9 = (unsigned __int64)a4;
  }
  Number = KeGetPcr()->Prcb.Number;
  LOBYTE(v45) = a3;
  v25 = v45 & 0xFFFFF | (Number << 20);
  LODWORD(v45) = v25;
  v26 = DWORD1(v45) ^ (DWORD1(v45) ^ (a5 << 26)) & 0x3C000000 ^ (v17 ^ DWORD1(v45) ^ (DWORD1(v45) ^ (a5 << 26)) & 0x3C000000) & 0x3FFFFFF;
  if ( v15 )
  {
    DWORD1(v45) = v26 & 0xBFFFFFFF;
    *((_QWORD *)&v45 + 1) = v9 | 0x8000000000000000uLL;
  }
  else
  {
    DWORD1(v45) = v26 | 0x40000000;
    LODWORD(v45) = v25 ^ (v25 ^ ((_DWORD)v9 << 8)) & 0xFFF00;
  }
  v27 = (unsigned __int64 *)&v45;
  v28 = 0;
  do
  {
    v29 = *v27++;
    v30 = (v28 + v20) % ndisNblTrackerHistorySize;
    ++v28;
    ndisNblTrackerHistoryBuffer[v30] = v29;
  }
  while ( v28 < v16 >> 3 );
  while ( v16 < v18 )
  {
    v31 = 0LL;
    v32 = a1;
    v33 = (v20 + ((unsigned __int64)v16 >> 3)) % ndisNblTrackerHistorySize;
    if ( a1 )
    {
      v34 = *(void **)(a1 + 360);
      if ( (struct _NET_BUFFER_LIST *)a1 == v44 )
        ndisNblTrackerHitBreakNbl(v44, a4, a3);
      if ( a3 < 0x1F || (v31 = *(struct _NET_BUFFER_LIST **)a1) == 0LL )
        v32 = a1 | 1;
      v35 = v32 | 4;
      if ( !*(_DWORD *)(a1 + 140) )
        v35 = v32;
      v32 = v35;
      if ( (unsigned __int8)ndisIsPossibleSmuggling(v8, v34, *(_QWORD *)(a1 + 120)) )
      {
        v16 += 8;
        v37 = (unsigned int)v33;
        if ( v16 >= v18 )
        {
          ndisNblTrackerHistoryBuffer[v37] = 0LL;
          return;
        }
        ndisNblTrackerHistoryBuffer[v37] = v10;
        LODWORD(v33) = (v36 + ((unsigned __int64)v16 >> 3)) % ndisNblTrackerHistorySize;
      }
    }
    a1 = (unsigned __int64)v31;
    v38 = (unsigned int)v33;
    v16 += 8;
    v20 = v42;
    ndisNblTrackerHistoryBuffer[v38] = v32;
  }
}
