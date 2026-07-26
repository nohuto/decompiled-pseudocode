/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x140023040
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x140022CC0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1400238F0 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x140023BD0 (-ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z.c)
 *     NdisAllocateNetBufferList @ 0x140024450 (NdisAllocateNetBufferList.c)
 *     ndisAllocateFromLookasideList @ 0x140025220 (ndisAllocateFromLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  ULONG v5; // r15d
  char *v6; // rdi
  _DWORD *v7; // r13
  ULONG v8; // r12d
  PNET_BUFFER_LIST v9; // rsi
  int v10; // eax
  unsigned int Number; // r12d
  unsigned int v12; // r15d
  char *v13; // rbx
  struct _NET_BUFFER_LIST *NetBufferList; // rbx
  __int16 v15; // si
  int v16; // eax
  _SLIST_HEADER *v17; // rax
  _SLIST_HEADER *v18; // rsi
  struct _NET_BUFFER *FirstNetBuffer; // r12
  _NET_BUFFER *v20; // rdi
  ULONG DataLength; // r14d
  ULONG DataOffset; // r8d
  struct _MDL *MdlChain; // r13
  ULONG ByteCount; // esi
  ULONG v25; // esi
  struct _MDL *v26; // r15
  char *v27; // rcx
  struct _MDL *Mdl; // rax
  ULONG v29; // r14d
  PNET_BUFFER NetBuffer; // rax
  _QWORD *v31; // rsi
  KIRQL v33; // al
  _SLIST_HEADER *v34; // rdx
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  _QWORD *Alignment; // r9
  __int64 v38; // rax
  unsigned int CorrelationIds; // eax
  unsigned __int64 v40; // rax
  char **Pool2; // rax
  char **v42; // r15
  KIRQL v43; // al
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  _QWORD *v46; // r15
  struct _NET_BUFFER *NetBufferInternal; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  const GUID *v51; // r9
  REGHANDLE v52; // rcx
  const GUID *v53; // r8
  ULONG v54; // eax
  ULONG v55; // ecx
  char *v56; // r10
  struct _MDL *v57; // rax
  struct _MDL *v58; // r13
  struct _MDL *i; // rsi
  _BYTE v60[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 4) = AllocateCloneFlags;
  v5 = AllocateCloneFlags & 2;
  *(_QWORD *)(v4 + 128) = OriginalNetBufferList;
  *(_DWORD *)(v4 + 16) = v5;
  v6 = (char *)NetBufferListPoolHandle;
  v7 = NetBufferPoolHandle;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  v8 = AllocateCloneFlags;
  v9 = OriginalNetBufferList;
  if ( !NetBufferPoolHandle )
    v7 = ndisNetBufferPool;
  v10 = *((_DWORD *)v6 + 11);
  *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v7;
  if ( (v10 & 1) == 0 )
  {
    NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
    if ( !NetBufferList )
      return NetBufferList;
    *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    if ( v7 )
    {
      if ( (v7[20] & 1) != 0 )
      {
        DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", v7);
        NdisFreeCloneNetBufferList(NetBufferList, v8);
        return 0LL;
      }
      NetBufferInternal = ndisAllocateNetBufferInternal(v7, (unsigned int *)(v4 + 8));
      FirstNetBuffer = NetBufferInternal;
      if ( NetBufferInternal )
      {
        NetBufferInternal->NdisPoolHandle = v7;
        NetBufferInternal->NdisReserved[1] = 0LL;
        NetBufferInternal->NdisReserved[0] = 0LL;
        NetBufferInternal->MiniportReserved[1] = 0LL;
        NetBufferInternal->MiniportReserved[0] = 0LL;
        NetBufferInternal->MdlChain = 0LL;
        NetBufferInternal->DataOffset = 0;
        NetBufferInternal->DataLength = 0;
        NetBufferInternal->Link.Region = 0LL;
        NetBufferInternal->CurrentMdlOffset = 0;
        NetBufferInternal->Link.Alignment = 0LL;
        *(_DWORD *)&NetBufferInternal->ChecksumBias = 0;
        NetBufferInternal->SharedMemoryInfo = 0LL;
        NetBufferList->Link.Region = (unsigned __int64)NetBufferInternal;
        goto LABEL_24;
      }
LABEL_38:
      v8 = *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
    NdisFreeCloneNetBufferList(NetBufferList, v8);
    return 0LL;
  }
  if ( (v10 & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
    return 0LL;
  }
  if ( (*((_DWORD *)v6 + 1) & 1) != 0 )
  {
    v12 = 0;
    NetBufferList = (struct _NET_BUFFER_LIST *)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)v6);
    goto LABEL_11;
  }
  Number = KeGetPcr()->Prcb.Number;
  v12 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v13 = &v6[256 * (unsigned __int64)Number + 384];
    if ( !v13[216] )
    {
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26);
      *(_BYTE *)v4 = v33;
      if ( !v13[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v13,
          ndisAllocateFromNPagedPool,
          *((PFREE_FUNCTION_EX *)v6 + 23),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v6 + 43),
          *((_DWORD *)v6 + 42),
          0x400u);
        v33 = *(_BYTE *)v4;
        v13[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v33);
    }
    NetBufferList = (struct _NET_BUFFER_LIST *)ndisAllocateFromLookasideList(v13);
    if ( NetBufferList )
      goto LABEL_11;
  }
  _InterlockedIncrement((volatile signed __int32 *)v6 + 37);
  NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
  if ( !NetBufferList )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 38);
    v40 = *((unsigned int *)v6 + 43);
    if ( v40 + 32 >= v40
      && (Pool2 = (char **)ExAllocatePool2(66LL, v40 + 32, *((unsigned int *)v6 + 42)), (v42 = Pool2) != 0LL) )
    {
      NetBufferList = (struct _NET_BUFFER_LIST *)(Pool2 + 4);
      *Pool2 = 0LL;
      if ( Pool2 != (char **)-32LL )
      {
        *Pool2 = v6;
        v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
        v44 = *((_QWORD *)v6 + 2);
        v45 = v6 + 16;
        v46 = v42 + 1;
        if ( *(char **)(v44 + 8) != v6 + 16 )
          __fastfail(3u);
        *v46 = v44;
        v46[1] = v45;
        *(_QWORD *)(v44 + 8) = v46;
        *v45 = v46;
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v43);
        v12 = 0;
        goto LABEL_73;
      }
    }
    else
    {
      NetBufferList = 0LL;
    }
    v12 = 0;
    goto LABEL_11;
  }
LABEL_73:
  LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
LABEL_11:
  if ( NetBufferList )
  {
    v15 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * (v12 ^ 1LL) + 368);
    NetBufferList->NdisPoolHandle = v6;
    NetBufferList->Flags = 256;
    if ( v12 )
      WORD1(NetBufferList->NdisReserved[1]) = v15;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v34 = (_SLIST_HEADER *)NetBufferList;
      if ( (__int64)NetBufferList->NetBufferListInfo[13] > 0 )
      {
        Alignment = (_QWORD *)NetBufferList->Link.Alignment;
        if ( NetBufferList->Link.Alignment )
        {
          do
          {
            v38 = Alignment[31];
            if ( !v38 || v38 < 0 )
            {
              CorrelationIds = ndisGenerateCorrelationIds(1LL);
              Alignment[31] = CorrelationIds;
            }
            Alignment = (_QWORD *)*Alignment;
          }
          while ( Alignment );
        }
      }
      else
      {
        v35 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
        if ( v35 + 1 < v35 )
          v35 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
        do
        {
          if ( (__int64)v34[15].Region <= 0 )
          {
            v36 = v35++;
            v34[15].Region = v36;
          }
          v34 = (_SLIST_HEADER *)v34->Alignment;
        }
        while ( v34 );
      }
    }
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[40];
    v16 = *((_DWORD *)v6 + 11);
    if ( (v16 & 2) != 0 )
    {
      if ( (v16 & 1) != 0 )
        v17 = (_SLIST_HEADER *)&NetBufferList[1].NetBufferListInfo[4];
      else
        v17 = (_SLIST_HEADER *)&NetBufferList[1];
      v18 = (_SLIST_HEADER *)&NetBufferList[1];
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)v17;
      v17->Alignment = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v6 + 21);
      NetBufferList->Context->Offset = *((_WORD *)v6 + 21);
    }
    else
    {
      v18 = (_SLIST_HEADER *)&NetBufferList[1];
    }
    memset(v18, 0, 0xB0uLL);
    v18[3].Region = (unsigned __int64)v6;
    NetBufferList->Link.Region = (unsigned __int64)v18;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 3u, 0LL, 0);
    v9 = *(PNET_BUFFER_LIST *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  }
  else
  {
    NetBufferList = 0LL;
  }
  if ( !NetBufferList )
    return NetBufferList;
  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  v5 = *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_24:
  v20 = v9->FirstNetBuffer;
  while ( v20 )
  {
    DataLength = v20->DataLength;
    DataOffset = v20->DataOffset;
    MdlChain = v20->MdlChain;
    if ( v5 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = v20->Link.Region;
      FirstNetBuffer->DataLength = v20->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = v20->CurrentMdlOffset;
    }
    else if ( MdlChain )
    {
      while ( 1 )
      {
        ByteCount = MdlChain->ByteCount;
        if ( DataOffset < ByteCount )
          break;
        MdlChain = MdlChain->Next;
        DataOffset -= ByteCount;
        if ( !MdlChain )
          goto LABEL_36;
      }
      v25 = ByteCount - DataOffset;
      if ( v25 >= DataLength )
        v25 = v20->DataLength;
      v26 = 0LL;
      if ( v25 )
      {
        v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + DataOffset;
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v27;
        Mdl = IoAllocateMdl(v27, v25, 0, 0, 0LL);
        v26 = Mdl;
        if ( !Mdl )
          goto LABEL_38;
        IoBuildPartialMdl(MdlChain, Mdl, *(PVOID *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v25);
        v26->Next = 0LL;
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)v26;
      FirstNetBuffer->MdlChain = v26;
      FirstNetBuffer->DataLength = v20->DataLength;
      FirstNetBuffer->CurrentMdlOffset = 0;
      FirstNetBuffer->DataOffset = 0;
      v29 = DataLength - v25;
      if ( v29 )
      {
        for ( i = MdlChain->Next; i; i = i->Next )
        {
          v54 = i->ByteCount;
          v55 = v29;
          v56 = (char *)i->StartVa + i->ByteOffset;
          *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v56;
          if ( v54 <= v29 )
            v55 = v54;
          *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v55;
          v57 = IoAllocateMdl(v56, v55, 0, 0, 0LL);
          v58 = v57;
          if ( !v57 )
            goto LABEL_38;
          IoBuildPartialMdl(
            i,
            v57,
            *(PVOID *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
            *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
          v26->Next = v58;
          v26 = v58;
          v58->Next = 0LL;
          v29 -= *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          if ( !v29 )
            break;
        }
      }
      v5 = *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
LABEL_36:
    v20 = (_NET_BUFFER *)v20->Link.Alignment;
    if ( !v20 )
      break;
    NetBuffer = NdisAllocateNetBuffer(
                  *(NDIS_HANDLE *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                  0LL,
                  0,
                  0LL);
    if ( !NetBuffer )
      goto LABEL_38;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)NetBuffer;
    FirstNetBuffer = NetBuffer;
  }
  v31 = *(_QWORD **)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  NetBufferList->SourceHandle = (void *)v31[15];
  NetBufferList->NetBufferListInfo[16] = (void *)v31[34];
  if ( (v31[28] & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v31[28] & 1) == 0 )
    WfpNblInfoClone(v31, NetBufferList, 0LL, 0LL);
  if ( byte_14011D800 )
  {
    NetBufferList->NetBufferListInfo[13] = (void *)v31[31];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v48 = v31[31] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v48;
    v49 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0x80);
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v49;
    LODWORD(v49) = Microsoft_Windows_Networking_CorrelationEnabled;
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
    *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 0x40);
    if ( (_DWORD)v49 )
    {
      v50 = Microsoft_Windows_Networking_CorrelationTraceActivityPayload;
      v51 = (const GUID *)(v4 + 144);
      v52 = Microsoft_Windows_Networking_CorrelationHandle;
      v53 = (const GUID *)(v4 + 128);
      *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
      *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ActivityTransfer;
      if ( v50 )
      {
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 16LL;
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = &Microsoft_Windows_Networking_ProviderId;
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = ((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                            + 8;
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 4LL;
        EtwWriteTransfer(v52, (PCEVENT_DESCRIPTOR)(v4 + 64), v53, v51, 2u, (PEVENT_DATA_DESCRIPTOR)(v4 + 160));
      }
      else
      {
        EtwWriteTransfer(v52, (PCEVENT_DESCRIPTOR)(v4 + 64), v53, v51, 0, 0LL);
      }
    }
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(NetBufferList, 0LL, 5u, v31, 0);
  return NetBufferList;
}
