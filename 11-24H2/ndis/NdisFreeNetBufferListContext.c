/*
 * XREFs of NdisFreeNetBufferListContext @ 0x140021D40
 * Callers:
 *     NdisReturnNetBufferLists @ 0x140017B90 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x140018CE0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1400197A0 (NdisFReturnNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x140021180 (NdisMSendNetBufferListsComplete.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 *     ndisAllocateNetBufferListInternal @ 0x140024B40 (ndisAllocateNetBufferListInternal.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140074880 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14007AA00 (-ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ndisIsCurrentNblContextBlockPreallocated @ 0x140021E50 (ndisIsCurrentNblContextBlockPreallocated.c)
 */

void __stdcall NdisFreeNetBufferListContext(PNET_BUFFER_LIST NetBufferList, USHORT ContextSize)
{
  USHORT v2; // di
  __int64 v4; // r8
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  int v7; // ecx
  int v8; // edx
  unsigned __int16 *v9; // rcx

  if ( ContextSize )
  {
    v2 = ContextSize;
    do
    {
      NetBufferList->Context->Offset += v2;
      if ( (unsigned __int8)ndisIsCurrentNblContextBlockPreallocated(NetBufferList) )
        break;
      if ( v2 >= *(_WORD *)(v4 + 8) )
        v2 = *(_WORD *)(v4 + 8);
      LOWORD(NetBufferList->NdisReserved[1]) -= v2;
      v5 = *(_WORD *)(v4 + 10);
      v6 = *(_WORD *)(v4 + 8);
      if ( v5 < v6 )
        break;
      v2 = v5 - v6;
      NetBufferList->Context = *(_NET_BUFFER_LIST_CONTEXT **)v4;
      v7 = *(unsigned __int16 *)(v4 + 8);
      *(_WORD *)(v4 + 10) = v7;
      *(_QWORD *)v4 = 0LL;
      v8 = LOWORD(NetBufferList->NdisReserved[1]);
      if ( v8 + v7 > ndisMaxCachedNblContextSize )
      {
        ExFreePoolWithTag((PVOID)v4, 0);
      }
      else if ( v7 < WORD1(NetBufferList->NdisReserved[1]) - v8 )
      {
        ExFreePoolWithTag((PVOID)v4, 0);
        v9 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
        if ( v9 )
        {
          if ( v9[4] < WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
          {
            ExFreePoolWithTag(v9, 0);
            NetBufferList->NetBufferListInfo[28] = 0LL;
          }
        }
      }
      else
      {
        NetBufferList->NetBufferListInfo[28] = (void *)v4;
      }
    }
    while ( v2 );
  }
}
