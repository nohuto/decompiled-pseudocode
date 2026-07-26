/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x14005F890
 * Callers:
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x14008E9C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  int v4; // ebx
  int v6; // esi
  _DWORD *NdisPoolHandle; // rax
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  _NET_BUFFER_LIST_CONTEXT *v11; // r8
  int v12; // edx
  __int64 v13; // rax
  unsigned __int16 Offset; // ax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r14
  int v17; // r8d
  _NET_BUFFER_LIST_CONTEXT *Pool2; // rax

  v4 = ContextSize;
  v6 = ContextBackFill;
  if ( !ContextSize )
    return 0;
  if ( (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
    return -1073676267;
  NdisPoolHandle = NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  v11 = (_NET_BUFFER_LIST_CONTEXT *)NetBufferList->NetBufferListInfo[28];
  v12 = NdisPoolHandle[11];
  if ( (v12 & 2) == 0 )
    goto LABEL_17;
  v13 = 560LL;
  if ( (v12 & 1) == 0 )
    v13 = 384LL;
  if ( Context != (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v13) || Context->Offset < (unsigned __int16)v4 )
  {
LABEL_17:
    v15 = LOWORD(NetBufferList->NdisReserved[1]) + v4;
    LOWORD(NetBufferList->NdisReserved[1]) = v15;
    if ( v15 <= ndisMaxCachedNblContextSize )
    {
      if ( v15 <= WORD1(NetBufferList->NdisReserved[1]) )
        v15 = WORD1(NetBufferList->NdisReserved[1]);
      WORD1(NetBufferList->NdisReserved[1]) = v15;
    }
  }
  if ( Context )
  {
    Offset = Context->Offset;
    if ( Offset >= (unsigned __int16)v4 )
    {
      Context->Offset = Offset - v4;
      return 0;
    }
  }
  if ( v11 && v11->Size >= (unsigned __int16)v4 )
  {
    v11->Offset -= v4;
    v11->Next = NetBufferList->Context;
    NetBufferList->Context = v11;
    NetBufferList->NetBufferListInfo[28] = 0LL;
    return 0;
  }
  v16 = v6 + v4;
  if ( LOWORD(NetBufferList->NdisReserved[1]) <= ndisMaxCachedNblContextSize )
  {
    if ( v11 )
    {
      NetBufferList->NetBufferListInfo[28] = 0LL;
      ExFreePoolWithTag(v11, 0);
    }
    v17 = LOWORD(NetBufferList->NdisReserved[1]);
    if ( v16 <= v4 + WORD1(NetBufferList->NdisReserved[1]) - v17 )
      v16 = v4 + WORD1(NetBufferList->NdisReserved[1]) - v17;
    if ( v16 > (unsigned int)(v4 + v6) )
      PoolTag = 1668170830;
  }
  Pool2 = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePool2(64LL, v16 + 16LL, PoolTag);
  if ( Pool2 )
  {
    Pool2->Size = v16;
    Pool2->Offset = v16 - v4;
    Pool2->Next = NetBufferList->Context;
    NetBufferList->Context = Pool2;
    return 0;
  }
  LOWORD(NetBufferList->NdisReserved[1]) -= v4;
  return -1073741670;
}
