/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x140021FE0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140022480 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBuffer @ 0x14001A2D0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ?ndisFreeMdlInternal@@YAXPEAU_MDL@@@Z @ 0x140021E90 (-ndisFreeMdlInternal@@YAXPEAU_MDL@@@Z.c)
 */

void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  _NET_BUFFER *FirstNetBuffer; // rbx
  char i; // bp
  struct _MDL *MdlChain; // rdx
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rax
  ULONG DataOffset; // r8d
  unsigned int v11; // eax
  _NET_BUFFER *v12; // rsi
  struct _MDL *v13; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *Alignment; // rbx

  FragmentNetBufferList->Link.Alignment = 0LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(FragmentNetBufferList, 0LL, 0x98uLL, 8u, 0);
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  for ( i = *((_BYTE *)FragmentNetBufferList->NdisPoolHandle + 44) & 1;
        FirstNetBuffer;
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment )
  {
    MdlChain = FirstNetBuffer->MdlChain;
    FirstNetBuffer->DataOffset += DataOffsetDelta;
    v8 = MdlChain;
    FirstNetBuffer->DataLength -= DataOffsetDelta;
    if ( MdlChain )
    {
      v9 = MdlChain;
      do
      {
        DataOffset = FirstNetBuffer->DataOffset;
        v8 = v9;
        if ( MdlChain->ByteCount > DataOffset )
          break;
        if ( MdlChain == (struct _MDL *)&FirstNetBuffer[1] )
          break;
        FirstNetBuffer->MdlChain = MdlChain->Next;
        FirstNetBuffer->DataOffset = DataOffset - MdlChain->ByteCount;
        ndisFreeMdlInternal(MdlChain);
        MdlChain = FirstNetBuffer->MdlChain;
        v9 = MdlChain;
        v8 = MdlChain;
      }
      while ( MdlChain );
    }
    v11 = FirstNetBuffer->DataOffset;
    FirstNetBuffer->Link.Region = (unsigned __int64)v8;
    FirstNetBuffer->CurrentMdlOffset = v11;
  }
  v12 = FragmentNetBufferList->FirstNetBuffer;
  if ( v12 )
  {
    do
    {
      v13 = v12->MdlChain;
      if ( v13 )
      {
        do
        {
          Next = v13->Next;
          IoFreeMdl(v13);
          v13 = Next;
        }
        while ( Next );
      }
      Alignment = (_NET_BUFFER *)v12->Link.Alignment;
      if ( v12 != FragmentNetBufferList->FirstNetBuffer || !i )
        NdisFreeNetBuffer(v12);
      v12 = Alignment;
    }
    while ( Alignment );
  }
  NdisFreeNetBufferList(FragmentNetBufferList);
}
