/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x140022D10
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140019EA0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFreeNetBuffer @ 0x14001A2D0 (NdisFreeNetBuffer.c)
 *     ndisFreeToLookasideList @ 0x14001A660 (ndisFreeToLookasideList.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisPplLazyInitializeLookaside @ 0x14005E1E0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *NdisPoolHandle; // r15
  _NET_BUFFER *Alignment; // rdi
  ULONG v4; // r14d
  _NET_BUFFER *FirstNetBuffer; // rsi
  char v7; // r15
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rdi
  _NET_BUFFER_LIST_CONTEXT *Context; // rdx
  _DWORD *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  volatile signed __int32 *v14; // rsi
  _DWORD *v15; // r13
  _MDL *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  volatile signed __int32 *v19; // r13

  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  LODWORD(Alignment) = 0;
  CloneNetBufferList->Link.Alignment = 0LL;
  v4 = FreeCloneFlags & 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(CloneNetBufferList, 0LL, 0x88uLL, 6u, 0);
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  v7 = NdisPoolHandle[44] & 1;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v4 )
      {
        MdlChain = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          do
          {
            Next = MdlChain->Next;
            IoFreeMdl(MdlChain);
            MdlChain = Next;
          }
          while ( Next );
        }
      }
      Alignment = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer == CloneNetBufferList->FirstNetBuffer )
      {
        if ( !v7 )
        {
          v15 = FirstNetBuffer->NdisPoolHandle;
          if ( (v15[20] & 1) != 0 )
          {
            v16 = FirstNetBuffer->MdlChain;
            if ( (v16->MdlFlags & 0x20) != 0 )
              MmUnmapLockedPages(v16->MappedSystemVa, FirstNetBuffer->MdlChain);
          }
          if ( (v15[1] & 1) != 0 )
          {
            if ( (unsigned __int64)FirstNetBuffer < 0x20 )
              ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)FirstNetBuffer, 0LL);
            ExFreePoolWithTag(&FirstNetBuffer[-1].MiniportReserved[2], 0);
          }
          else
          {
            if ( ndisMaxNumberOfProcessors == 1 )
              goto LABEL_33;
            v17 = (unsigned __int64)LODWORD(FirstNetBuffer[-1].SharedMemoryInfo) << 8;
            v18 = (__int64)v15 + v17 + 384;
            if ( !*(_BYTE *)(v18 + 216) )
              ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)v15 + v17 + 384));
            if ( !ndisFreeToLookasideList(v18, (_SLIST_ENTRY *)FirstNetBuffer) )
            {
LABEL_33:
              v19 = v15 + 32;
              _InterlockedIncrement(v19 + 7);
              if ( ExQueryDepthSList((PSLIST_HEADER)v19) >= *((_WORD *)v19 + 8) )
              {
                _InterlockedIncrement(v19 + 8);
                (*((void (__fastcall **)(_NET_BUFFER *, volatile signed __int32 *))v19 + 7))(FirstNetBuffer, v19);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v19, (PSLIST_ENTRY)FirstNetBuffer);
              }
            }
          }
        }
      }
      else
      {
        NdisFreeNetBuffer(FirstNetBuffer);
      }
      FirstNetBuffer = Alignment;
    }
    while ( Alignment );
  }
  Context = CloneNetBufferList->Context;
  v11 = CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(Context) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, Context);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(CloneNetBufferList, 0LL, 4u, 0LL, (unsigned int)Alignment);
  if ( (v11[1] & 1) != 0 )
  {
    if ( (unsigned __int64)CloneNetBufferList < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)CloneNetBufferList, 0LL);
    ExFreePoolWithTag(&CloneNetBufferList[-1].NetBufferListInfo[26], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_22;
    v12 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[29]) << 8;
    v13 = (__int64)v11 + v12 + 384;
    if ( !*(_BYTE *)(v13 + 216) )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)v11 + v12 + 384));
    if ( !ndisFreeToLookasideList(v13, (_SLIST_ENTRY *)CloneNetBufferList) )
    {
LABEL_22:
      v14 = v11 + 32;
      _InterlockedIncrement(v14 + 7);
      if ( ExQueryDepthSList((PSLIST_HEADER)v14) >= *((_WORD *)v14 + 8) )
      {
        _InterlockedIncrement(v14 + 8);
        (*((void (__fastcall **)(PNET_BUFFER_LIST, volatile signed __int32 *))v14 + 7))(CloneNetBufferList, v14);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v14, (PSLIST_ENTRY)CloneNetBufferList);
      }
    }
  }
}
