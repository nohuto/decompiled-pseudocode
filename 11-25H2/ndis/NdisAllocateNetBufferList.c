/*
 * XREFs of NdisAllocateNetBufferList @ 0x14001D930
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140019B60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001B730 (NdisFreeNetBufferList.c)
 *     ndisAllocateFromLookasideList @ 0x14001E700 (ndisAllocateFromLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x1400352E0 (ndisGenerateCorrelationIds.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  int v3; // r15d
  int v5; // esi
  unsigned int Number; // r14d
  unsigned int v7; // r12d
  char *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  __int16 v10; // r14
  int v11; // eax
  bool v12; // zf
  _SLIST_ENTRY *v13; // rax
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  struct _MDL *v16; // r14
  __int64 v17; // rcx
  int v18; // eax
  PFREE_FUNCTION_EX *v20; // r13
  KIRQL v21; // al
  _QWORD *p_Next; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  _SLIST_ENTRY *i; // r9
  __int64 v27; // rax
  unsigned int CorrelationIds; // eax
  unsigned __int64 v29; // rax
  _SLIST_ENTRY *v30; // rax
  _SLIST_ENTRY *v31; // r12
  KIRQL v32; // al
  __int64 v33; // rcx
  _QWORD *v34; // r12
  KIRQL v35; // dl
  _QWORD *v36; // rax
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  __int16 v39; // dx
  int v40; // edx
  unsigned __int64 v41; // rax
  unsigned int v42; // r14d
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v44; // r8
  int v45; // edx
  PSLIST_ENTRY v46; // rax
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // ax
  unsigned __int16 v49; // r13
  int v50; // r8d
  __int64 v51; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v53; // [rsp+70h] [rbp+8h]

  v3 = ContextBackFill;
  v5 = ContextSize;
  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
  {
    v41 = *((unsigned int *)PoolHandle + 8);
    v7 = 0;
    if ( v41 + 32 >= v41 )
    {
      Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v41 + 32, *((unsigned int *)PoolHandle + 9));
      if ( Pool2 )
      {
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v9 = Pool2 + 2;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v9 = 0LL;
    }
    goto LABEL_7;
  }
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors == 1 )
    goto LABEL_48;
  v8 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
  if ( !v8[216] )
  {
    v20 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
    v53 = v21;
    if ( !v8[216] )
    {
      ExInitializeLookasideListEx(
        (PLOOKASIDE_LIST_EX)v8,
        ndisAllocateFromNPagedPool,
        *(v20 - 25),
        NonPagedPoolNx,
        0,
        *((unsigned int *)v20 - 53),
        *((_DWORD *)v20 - 54),
        0x400u);
      v21 = v53;
      v8[216] = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v21);
  }
  v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
  if ( !v9 )
  {
LABEL_48:
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
    if ( !v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
      v29 = *((unsigned int *)PoolHandle + 43);
      if ( v29 + 32 >= v29
        && (v30 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v29 + 32, *((unsigned int *)PoolHandle + 42)), (v31 = v30) != 0LL) )
      {
        v9 = v30 + 2;
        v30->Next = 0LL;
        if ( v30 != (_SLIST_ENTRY *)-32LL )
        {
          v30->Next = (_SLIST_ENTRY *)PoolHandle;
          v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
          v33 = *((_QWORD *)PoolHandle + 2);
          v34 = &v31->Next + 1;
          v35 = v32;
          v36 = (char *)PoolHandle + 16;
          if ( *(NDIS_HANDLE *)(v33 + 8) != (char *)PoolHandle + 16 )
            __fastfail(3u);
          *v34 = v33;
          v34[1] = v36;
          *(_QWORD *)(v33 + 8) = v34;
          *v36 = v34;
          KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v35);
          v7 = 0;
          goto LABEL_57;
        }
      }
      else
      {
        v9 = 0LL;
      }
      v7 = 0;
      goto LABEL_7;
    }
LABEL_57:
    *((_DWORD *)&v9[-1].Next + 2) = Number;
  }
LABEL_7:
  if ( !v9 )
    return 0LL;
  v10 = *((_WORD *)&v9[3].Next + 5);
  memset(v9, 0, 8 * (v7 ^ 1LL) + 368);
  v9[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v9[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v9[3].Next + 5) = v10;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    p_Next = &v9->Next;
    if ( *((__int64 *)&v9[15].Next + 1) > 0 )
    {
      for ( i = v9->Next; i; i = i->Next )
      {
        v27 = *((_QWORD *)&i[15].Next + 1);
        if ( !v27 || v27 < 0 )
        {
          CorrelationIds = ndisGenerateCorrelationIds(1LL, p_Next);
          *((_QWORD *)&i[15].Next + 1) = CorrelationIds;
        }
      }
    }
    else
    {
      v23 = _InterlockedExchangeAdd(&dword_140124F28, 1u);
      if ( v23 + 1 < v23 )
        v23 = _InterlockedExchangeAdd(&dword_140124F28, 1u);
      do
      {
        if ( (__int64)p_Next[31] <= 0 )
        {
          v24 = v23++;
          p_Next[31] = v24;
        }
        p_Next = (_QWORD *)*p_Next;
      }
      while ( p_Next );
    }
  }
  *((_BYTE *)&v9[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
  v11 = *((_DWORD *)PoolHandle + 11);
  if ( (v11 & 2) == 0 )
    goto LABEL_16;
  v12 = (v11 & 1) == 0;
  v13 = v9 + 35;
  if ( v12 )
    v13 = v9 + 24;
  v9[1].Next = v13;
  v13->Next = 0LL;
  *((_WORD *)&v9[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
  *((_WORD *)&v9[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
  if ( *((_WORD *)PoolHandle + 21) < (unsigned __int16)v5 )
  {
LABEL_16:
    if ( !(_WORD)v5 )
      goto LABEL_17;
    v42 = *((_DWORD *)PoolHandle + 9);
    if ( (v5 & 7) == 0 && (v3 & 7) == 0 )
    {
      Next = v9[1].Next;
      v44 = v9[23].Next;
      v45 = *((_DWORD *)&v9[2].Next[2].Next + 3);
      if ( (v45 & 2) == 0 )
        goto LABEL_67;
      v46 = v9 + 35;
      if ( (v45 & 1) == 0 )
        v46 = v9 + 24;
      if ( Next != v46 || *((_WORD *)&Next->Next + 5) < (unsigned __int16)v5 )
      {
LABEL_67:
        v47 = *((_WORD *)&v9[3].Next + 4) + v5;
        *((_WORD *)&v9[3].Next + 4) = v47;
        if ( v47 <= ndisMaxCachedNblContextSize )
        {
          if ( v47 <= *((_WORD *)&v9[3].Next + 5) )
            v47 = *((_WORD *)&v9[3].Next + 5);
          *((_WORD *)&v9[3].Next + 5) = v47;
        }
      }
      if ( Next )
      {
        v48 = *((_WORD *)&Next->Next + 5);
        if ( v48 >= (unsigned __int16)v5 )
        {
          *((_WORD *)&Next->Next + 5) = v48 - v5;
LABEL_79:
          *((_DWORD *)&v9[8].Next + 2) |= 0x400u;
          goto LABEL_17;
        }
      }
      if ( v44 && *((_WORD *)&v44->Next + 4) >= (unsigned __int16)v5 )
      {
        *((_WORD *)&v44->Next + 5) -= v5;
        v44->Next = v9[1].Next;
        *((_DWORD *)&v9[8].Next + 2) |= 0x400u;
        v9[1].Next = v44;
        v9[23].Next = 0LL;
LABEL_17:
        v14 = (struct _NET_BUFFER_LIST *)v9;
        if ( !v9 )
          return v14;
        goto LABEL_18;
      }
      v49 = v3 + v5;
      if ( *((unsigned __int16 *)&v9[3].Next + 4) <= ndisMaxCachedNblContextSize )
      {
        if ( v44 )
        {
          v9[23].Next = 0LL;
          ExFreePoolWithTag(v44, 0);
        }
        v50 = *((unsigned __int16 *)&v9[3].Next + 4);
        if ( v49 <= v5 + *((unsigned __int16 *)&v9[3].Next + 5) - v50 )
          v49 = v5 + *((_WORD *)&v9[3].Next + 5) - v50;
        if ( v49 > (unsigned int)(v5 + v3) )
          v42 = 1668170830;
      }
      v51 = ExAllocatePool2(64LL, v49 + 16LL, v42);
      if ( v51 )
      {
        *(_WORD *)(v51 + 8) = v49;
        *(_WORD *)(v51 + 10) = v49 - v5;
        *(_QWORD *)v51 = v9[1].Next;
        v9[1].Next = (_SLIST_ENTRY *)v51;
        goto LABEL_79;
      }
      *((_WORD *)&v9[3].Next + 4) -= v5;
    }
    NdisFreeNetBufferList((PNET_BUFFER_LIST)v9);
    v9 = 0LL;
    goto LABEL_17;
  }
  *((_WORD *)&v9[1].Next->Next + 5) -= v5;
  v14 = (struct _NET_BUFFER_LIST *)v9;
LABEL_18:
  if ( (*((_DWORD *)PoolHandle + 11) & 1) != 0 )
    *((_QWORD *)&v9->Next + 1) = v9 + 24;
  if ( (*((_DWORD *)PoolHandle + 11) & 4) != 0 )
  {
    v15 = *((unsigned __int16 *)PoolHandle + 21);
    if ( (_WORD)v15 )
      v16 = (struct _MDL *)((char *)&v9[36] + v15);
    else
      v16 = (struct _MDL *)&v9[35];
    if ( v7 )
    {
      v16->ByteCount = *((_DWORD *)PoolHandle + 22);
      v16->Next = 0LL;
    }
    else
    {
      v37 = *((unsigned int *)PoolHandle + 22);
      v38 = (unsigned __int64)v16 + *((unsigned int *)PoolHandle + 23);
      v39 = (_WORD)v16 + *((_DWORD *)PoolHandle + 23);
      v16->Next = 0LL;
      v16->MdlFlags = 0;
      v16->ByteCount = v37;
      v16->StartVa = (PVOID)(v38 & 0xFFFFFFFFFFFFF000uLL);
      v40 = v39 & 0xFFF;
      v16->ByteOffset = v40;
      v16->Size = 8 * ((((unsigned __int64)(unsigned __int16)v40 + v37 + 4095) >> 12) + 6);
      MmBuildMdlForNonPagedPool(v16);
    }
    v17 = *((_QWORD *)&v9->Next + 1);
    if ( v17 )
    {
      v18 = *((_DWORD *)PoolHandle + 22);
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 56) = PoolHandle;
      *(_QWORD *)(v17 + 8) = v16;
      *(_DWORD *)(v17 + 16) = v18;
      *(_QWORD *)(v17 + 32) = v16;
      *(_DWORD *)(v17 + 40) = v18;
      *(_DWORD *)(v17 + 24) = 0;
      *(_DWORD *)(v17 + 48) = 0;
      *(_QWORD *)(v17 + 72) = 0LL;
      *(_QWORD *)(v17 + 64) = 0LL;
      *(_QWORD *)(v17 + 136) = 0LL;
      *(_QWORD *)(v17 + 128) = 0LL;
      *(_QWORD *)(v17 + 168) = 0LL;
    }
  }
  else
  {
    v25 = *((_QWORD *)&v9->Next + 1);
    if ( v25 )
    {
      *(_QWORD *)v25 = 0LL;
      *(_QWORD *)(v25 + 56) = PoolHandle;
      *(_QWORD *)(v25 + 8) = 0LL;
      *(_DWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 32) = 0LL;
      *(_DWORD *)(v25 + 40) = 0;
      *(_DWORD *)(v25 + 24) = 0;
      *(_DWORD *)(v25 + 48) = 0;
      *(_QWORD *)(v25 + 72) = 0LL;
      *(_QWORD *)(v25 + 64) = 0LL;
      *(_QWORD *)(v25 + 136) = 0LL;
      *(_QWORD *)(v25 + 128) = 0LL;
      *(_QWORD *)(v25 + 168) = 0LL;
    }
  }
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v9, 0LL, 2u, 0LL, 0);
  return v14;
}
