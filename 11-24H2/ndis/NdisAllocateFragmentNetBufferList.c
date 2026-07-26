/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x140022480
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAllocateMdlInternal@@YAPEAU_MDL@@PEAK@Z @ 0x140021EE0 (-ndisAllocateMdlInternal@@YAPEAU_MDL@@PEAK@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x140021FE0 (NdisFreeFragmentNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1400238F0 (NdisAllocateNetBuffer.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x140023E00 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x140024450 (NdisAllocateNetBufferList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     NdisAdvanceNetBufferDataStart @ 0x14003CED0 (NdisAdvanceNetBufferDataStart.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1400528E0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateFragmentNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPool,
        NDIS_HANDLE NetBufferPool,
        ULONG StartOffset,
        ULONG MaximumLength,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateFragmentFlags)
{
  unsigned __int64 v8; // rbp
  ULONG v9; // r15d
  NDIS_HANDLE v10; // rbx
  _DWORD *v11; // r10
  PNET_BUFFER_LIST result; // rax
  const struct _EVENT_DESCRIPTOR *v14; // rdx
  PNET_BUFFER_LIST v15; // r14
  _NET_BUFFER *FirstNetBuffer; // rdi
  _NET_BUFFER *v17; // r12
  ULONG v18; // ecx
  ULONG v19; // r13d
  struct _MDL *MdlChain; // rbx
  struct _NET_BUFFER_LIST *v21; // rcx
  unsigned int i; // eax
  ULONG v23; // eax
  ULONG v24; // r13d
  ULONG ByteCount; // esi
  ULONG v26; // r14d
  char *v27; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v29; // r15
  void *v30; // r8
  bool v31; // zf
  PNET_BUFFER v32; // rax
  struct _NET_BUFFER_LIST *v33; // r14
  _NET_BUFFER *j; // rbx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  PMDL MdlInternal; // rax
  _QWORD *v38; // rsi
  ULONG v39; // ecx
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v41; // rax
  struct _NET_BUFFER *k; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 DataOffset; // [rsp+20h] [rbp-60h]
  const struct _GUID *DataLength; // [rsp+28h] [rbp-58h]
  ULONG BufferSize; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL;
  v9 = StartOffset;
  *(_DWORD *)(v8 + 8) = StartOffset;
  v10 = NetBufferPool;
  v11 = NetBufferListPool;
  *(_QWORD *)(v8 + 128) = OriginalNetBufferList;
  *(_QWORD *)(v8 + 144) = 0LL;
  if ( !MaximumLength )
    return 0LL;
  if ( !NetBufferListPool )
    v11 = ndisNetBufferListPool;
  if ( !NetBufferPool )
    v10 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v10;
  if ( (v11[11] & 1) != 0 )
  {
    result = NdisAllocateNetBufferAndNetBufferList(v11, 0, 0, 0LL, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = result;
    v15 = result;
    if ( !result )
      return result;
  }
  else
  {
    result = NdisAllocateNetBufferList(v11, 0, 0);
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = result;
    v15 = result;
    if ( !result )
      return result;
    NetBuffer = NdisAllocateNetBuffer(v10, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_16;
    v15->Link.Region = (unsigned __int64)NetBuffer;
  }
  FirstNetBuffer = OriginalNetBufferList->FirstNetBuffer;
  if ( !FirstNetBuffer )
  {
LABEL_16:
    v21 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_17:
    NdisFreeFragmentNetBufferList(v21, 0, 0);
    return 0LL;
  }
  while ( FirstNetBuffer->DataLength <= v9 )
  {
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    if ( !FirstNetBuffer )
      goto LABEL_16;
  }
  v17 = v15->FirstNetBuffer;
LABEL_11:
  v18 = 0;
  *(_DWORD *)v8 = 0;
LABEL_12:
  while ( 2 )
  {
    if ( FirstNetBuffer )
    {
      v19 = FirstNetBuffer->DataLength;
      if ( v19 <= v9
        || (MdlChain = FirstNetBuffer->MdlChain,
            v14 = (const struct _EVENT_DESCRIPTOR *)(v9 + FirstNetBuffer->DataOffset),
            *(_DWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 4) = (_DWORD)v14,
            !MdlChain) )
      {
LABEL_15:
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
        continue;
      }
      for ( i = MdlChain->ByteCount; (unsigned int)v14 >= i; i = MdlChain->ByteCount )
      {
        MdlChain = MdlChain->Next;
        v14 = (const struct _EVENT_DESCRIPTOR *)((unsigned int)v14 - i);
        *(_DWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 4) = (_DWORD)v14;
        if ( !MdlChain )
          goto LABEL_15;
      }
      v23 = i - (_DWORD)v14;
      v24 = v19 - v9;
      ByteCount = v24;
      if ( v23 <= v24 )
        ByteCount = v23;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !MdlChain )
          {
LABEL_47:
            FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
            v9 = *(_DWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            if ( !FirstNetBuffer )
              goto LABEL_48;
            if ( FirstNetBuffer->DataLength > v9 )
            {
              v41 = NdisAllocateNetBuffer(
                      *(NDIS_HANDLE *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                      0LL,
                      0,
                      0LL);
              if ( !v41 )
                goto LABEL_16;
              v17->Link.Alignment = (unsigned __int64)v41;
              v17 = v41;
              goto LABEL_11;
            }
            goto LABEL_12;
          }
          if ( ByteCount )
            break;
          MdlChain = MdlChain->Next;
        }
        v26 = v24;
        if ( v24 >= MaximumLength - v18 )
          v26 = MaximumLength - v18;
        v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)v14;
        *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v27;
        Mdl = IoAllocateMdl(v27, v26, 0, 0, 0LL);
        v29 = Mdl;
        if ( !Mdl )
          goto LABEL_16;
        v30 = *(void **)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( v26 < ByteCount )
        {
          IoBuildPartialMdl(MdlChain, Mdl, v30, v26);
          *(_DWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 4) += v26;
        }
        else
        {
          v26 = ByteCount;
          IoBuildPartialMdl(MdlChain, Mdl, v30, ByteCount);
        }
        v18 = v26 + *(_DWORD *)v8;
        v31 = v17->MdlChain == 0LL;
        *(_DWORD *)v8 = v18;
        if ( v31 )
        {
          v17->Link.Region = (unsigned __int64)v29;
          v17->DataOffset = 0;
          v17->CurrentMdlOffset = 0;
          v17->MdlChain = v29;
        }
        else
        {
          **(_QWORD **)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v29;
        }
        ByteCount -= v26;
        *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v29;
        v29->Next = 0LL;
        v24 -= v26;
        if ( !v24 )
        {
LABEL_46:
          v17->DataLength = v18;
          goto LABEL_47;
        }
        if ( ByteCount )
          break;
        MdlChain = MdlChain->Next;
        if ( !MdlChain )
          goto LABEL_46;
        v14 = 0LL;
        ByteCount = MdlChain->ByteCount;
        *(_DWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        if ( v18 >= MaximumLength )
        {
          v17->DataLength = v18;
          if ( ByteCount )
          {
LABEL_35:
            v32 = NdisAllocateNetBuffer(
                    *(NDIS_HANDLE *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                    0LL,
                    0,
                    0LL);
            if ( !v32 )
              goto LABEL_16;
            v14 = (const struct _EVENT_DESCRIPTOR *)*(unsigned int *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 4);
            v18 = 0;
            v17->Link.Alignment = (unsigned __int64)v32;
            *(_DWORD *)v8 = 0;
            v17 = v32;
          }
        }
      }
      v17->DataLength = v18;
      goto LABEL_35;
    }
    break;
  }
LABEL_48:
  v33 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  for ( j = v33->FirstNetBuffer; j; j = (_NET_BUFFER *)j->Link.Alignment )
  {
    v35 = j->DataOffset;
    *(_DWORD *)v8 = 0;
    if ( v35 < DataOffsetDelta )
    {
      *(_DWORD *)v8 = DataBackFill + DataOffsetDelta - v35;
      MdlInternal = ndisAllocateMdlInternal((unsigned int *)((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL));
      if ( !MdlInternal )
      {
        for ( k = v33->FirstNetBuffer; k != j; k = (struct _NET_BUFFER *)k->Link.Alignment )
          NdisAdvanceNetBufferDataStart(k, DataOffsetDelta, 1u, (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdlInternal);
        v21 = v33;
        goto LABEL_17;
      }
      MdlInternal->Next = j->MdlChain;
      v39 = *(_DWORD *)v8 - DataOffsetDelta;
      j->MdlChain = MdlInternal;
      j->DataOffset += v39;
      j->DataLength += DataOffsetDelta;
      v36 = j->DataOffset;
    }
    else
    {
      j->DataLength += DataOffsetDelta;
      v36 = v35 - DataOffsetDelta;
      MdlInternal = j->MdlChain;
      for ( j->DataOffset = v36; MdlInternal; v36 -= (unsigned int)v14 )
      {
        v14 = (const struct _EVENT_DESCRIPTOR *)MdlInternal->ByteCount;
        if ( v36 < (unsigned int)v14 )
          break;
        MdlInternal = MdlInternal->Next;
      }
    }
    j->Link.Region = (unsigned __int64)MdlInternal;
    j->CurrentMdlOffset = v36;
  }
  v38 = *(_QWORD **)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  v33->NetBufferListInfo[16] = (void *)v38[34];
  if ( (v38[28] & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v38[28] & 1) == 0 )
  {
    DataOffset = 1;
    WfpNblInfoClone(v38, v33, 0LL, 0LL);
  }
  if ( byte_14011D800 )
  {
    v33->NetBufferListInfo[13] = (void *)v38[31];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v43 = v38[31] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v43;
    v44 = (__int64)v33->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_OWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 0x80);
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v44;
    LODWORD(v44) = Microsoft_Windows_Networking_CorrelationEnabled;
    *(_QWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
    *(_OWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(((unsigned __int64)&BufferSize & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                            + 0x40);
    if ( (_DWORD)v44 )
      EtwEx_tidActivityInfoTransfer(
        0x7FFFFFFFFFFFFFFFuLL,
        v14,
        (const struct _GUID *)(v8 + 144),
        (const struct _GUID *)(v8 + 128),
        DataOffset,
        DataLength,
        2u);
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal(v33, 0LL, 7u, v38, 0);
  return v33;
}
