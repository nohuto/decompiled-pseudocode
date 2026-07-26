/*
 * XREFs of ndisAllocateNetBufferListInternal @ 0x140024B40
 * Callers:
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x14004D370 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 * Callees:
 *     ndisFreeToLookasideList @ 0x14001A660 (ndisFreeToLookasideList.c)
 *     NdisFreeNetBufferListContext @ 0x140021D40 (NdisFreeNetBufferListContext.c)
 *     ndisAllocateFromLookasideList @ 0x140025220 (ndisAllocateFromLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 *     ndisPplLazyInitializeLookaside @ 0x14005E1E0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

PSLIST_ENTRY __fastcall ndisAllocateNetBufferListInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        int *a4)
{
  int v4; // r14d
  int v6; // r12d
  unsigned int Number; // r15d
  bool v9; // zf
  unsigned __int64 v10; // rbx
  PSLIST_ENTRY v11; // rbx
  int v12; // edi
  __int16 v13; // r15
  size_t v14; // r8
  int v15; // eax
  _SLIST_ENTRY *v16; // rax
  PSLIST_ENTRY result; // rax
  KIRQL v18; // al
  _QWORD *p_Next; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  _SLIST_ENTRY *i; // r9
  __int64 v23; // rax
  unsigned int CorrelationIds; // eax
  unsigned __int64 v25; // rax
  _SLIST_ENTRY *v26; // rax
  KIRQL v27; // al
  __int64 v28; // rdx
  _SLIST_ENTRY *v29; // rcx
  KIRQL v30; // r8
  _SLIST_ENTRY *v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // edi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v35; // r8
  int v36; // edx
  PSLIST_ENTRY v37; // rax
  unsigned __int16 v38; // dx
  _SLIST_ENTRY *v39; // rdx
  _SLIST_ENTRY *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  _SLIST_ENTRY *v43; // rdi
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // si
  int v46; // r8d
  __int64 v47; // rax
  _SLIST_ENTRY *Pool2; // rax
  __int64 v49; // [rsp+70h] [rbp+8h]
  _SLIST_ENTRY *v50; // [rsp+70h] [rbp+8h]
  KIRQL v51; // [rsp+78h] [rbp+10h]

  v4 = a2;
  v6 = a3;
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 7) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v32 = *(unsigned int *)(a1 + 32);
    *a4 = 0;
    if ( v32 + 32 >= v32 )
    {
      Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v32 + 32, *(unsigned int *)(a1 + 36));
      if ( Pool2 )
      {
        Pool2->Next = (_SLIST_ENTRY *)a1;
        v11 = Pool2 + 2;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else
    {
      v11 = 0LL;
    }
    goto LABEL_6;
  }
  Number = KeGetPcr()->Prcb.Number;
  v9 = ndisMaxNumberOfProcessors == 1;
  *a4 = 1;
  if ( v9 )
    goto LABEL_34;
  v10 = ((unsigned __int64)Number << 8) + a1 + 384;
  if ( !*(_BYTE *)(v10 + 216) )
  {
    v49 = a1 + 384;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 208));
    v51 = v18;
    if ( !*(_BYTE *)(v10 + 216) )
    {
      ExInitializeLookasideListEx(
        (PLOOKASIDE_LIST_EX)v10,
        ndisAllocateFromNPagedPool,
        *(PFREE_FUNCTION_EX *)(v49 - 200),
        NonPagedPoolNx,
        0,
        *(unsigned int *)(v49 - 212),
        *(_DWORD *)(v49 - 216),
        0x400u);
      v18 = v51;
      *(_BYTE *)(v10 + 216) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 208), v18);
  }
  v11 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v10);
  if ( !v11 )
  {
LABEL_34:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 148));
    v11 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 128));
    if ( !v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 152));
      v25 = *(unsigned int *)(a1 + 172);
      if ( v25 + 32 >= v25
        && (v26 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v25 + 32, *(unsigned int *)(a1 + 168)), (v50 = v26) != 0LL) )
      {
        v11 = v26 + 2;
        v26->Next = 0LL;
        if ( v26 != (_SLIST_ENTRY *)-32LL )
        {
          v26->Next = (_SLIST_ENTRY *)a1;
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
          v28 = *(_QWORD *)(a1 + 16);
          v29 = (_SLIST_ENTRY *)(a1 + 16);
          v30 = v27;
          v31 = (_SLIST_ENTRY *)(&v50->Next + 1);
          if ( *(_QWORD *)(v28 + 8) != a1 + 16 )
            __fastfail(3u);
          v31->Next = (_SLIST_ENTRY *)v28;
          v50[1].Next = v29;
          *(_QWORD *)(v28 + 8) = v31;
          v29->Next = v31;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 8), v30);
          *a4 = 0;
          goto LABEL_42;
        }
      }
      else
      {
        v11 = 0LL;
      }
      *a4 = 0;
      goto LABEL_6;
    }
LABEL_42:
    *((_DWORD *)&v11[-1].Next + 2) = Number;
  }
LABEL_6:
  if ( v11 )
  {
    v12 = *a4;
    v13 = *((_WORD *)&v11[3].Next + 5);
    v14 = 368LL;
    if ( !v12 )
      v14 = 376LL;
    memset(v11, 0, v14);
    v11[2].Next = (_SLIST_ENTRY *)a1;
    *((_DWORD *)&v11[8].Next + 2) = 256;
    if ( v12 )
      *((_WORD *)&v11[3].Next + 5) = v13;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      p_Next = &v11->Next;
      if ( *((__int64 *)&v11[15].Next + 1) > 0 )
      {
        for ( i = v11->Next; i; i = i->Next )
        {
          v23 = *((_QWORD *)&i[15].Next + 1);
          if ( !v23 || v23 < 0 )
          {
            CorrelationIds = ndisGenerateCorrelationIds(1LL);
            *((_QWORD *)&i[15].Next + 1) = CorrelationIds;
          }
        }
      }
      else
      {
        v20 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
        if ( v20 + 1 < v20 )
          v20 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
        do
        {
          if ( (__int64)p_Next[31] <= 0 )
          {
            v21 = v20++;
            p_Next[31] = v21;
          }
          p_Next = (_QWORD *)*p_Next;
        }
        while ( p_Next );
      }
    }
    *((_BYTE *)&v11[12].Next + 8) = *(_BYTE *)(a1 + 40);
    v15 = *(_DWORD *)(a1 + 44);
    if ( (v15 & 2) != 0 )
    {
      v9 = (v15 & 1) == 0;
      v16 = v11 + 35;
      if ( v9 )
        v16 = v11 + 24;
      v11[1].Next = v16;
      v16->Next = 0LL;
      *((_WORD *)&v11[1].Next->Next + 4) = *(_WORD *)(a1 + 42);
      *((_WORD *)&v11[1].Next->Next + 5) = *(_WORD *)(a1 + 42);
      if ( *(_WORD *)(a1 + 42) >= (unsigned __int16)v4 )
      {
        *((_WORD *)&v11[1].Next->Next + 5) -= v4;
        return v11;
      }
    }
    if ( !(_WORD)v4 )
      return v11;
    v33 = *(_DWORD *)(a1 + 36);
    if ( (v4 & 7) == 0 && (v6 & 7) == 0 )
    {
      Next = v11[1].Next;
      v35 = v11[23].Next;
      v36 = *((_DWORD *)&v11[2].Next[2].Next + 3);
      if ( (v36 & 2) == 0 )
        goto LABEL_51;
      v37 = v11 + 35;
      if ( (v36 & 1) == 0 )
        v37 = v11 + 24;
      if ( Next != v37 || *((_WORD *)&Next->Next + 5) < (unsigned __int16)v4 )
      {
LABEL_51:
        v38 = *((_WORD *)&v11[3].Next + 4) + v4;
        *((_WORD *)&v11[3].Next + 4) = v38;
        if ( v38 <= ndisMaxCachedNblContextSize )
        {
          if ( v38 <= *((_WORD *)&v11[3].Next + 5) )
            v38 = *((_WORD *)&v11[3].Next + 5);
          *((_WORD *)&v11[3].Next + 5) = v38;
        }
      }
      if ( Next )
      {
        v44 = *((_WORD *)&Next->Next + 5);
        if ( v44 >= (unsigned __int16)v4 )
        {
          *((_WORD *)&Next->Next + 5) = v44 - v4;
LABEL_77:
          *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
          return v11;
        }
      }
      if ( v35 && *((_WORD *)&v35->Next + 4) >= (unsigned __int16)v4 )
      {
        *((_WORD *)&v35->Next + 5) -= v4;
        v35->Next = v11[1].Next;
        result = v11;
        *((_DWORD *)&v11[8].Next + 2) |= 0x400u;
        v11[1].Next = v35;
        v11[23].Next = 0LL;
        return result;
      }
      v45 = v6 + v4;
      if ( *((unsigned __int16 *)&v11[3].Next + 4) <= ndisMaxCachedNblContextSize )
      {
        if ( v35 )
        {
          v11[23].Next = 0LL;
          ExFreePoolWithTag(v35, 0);
        }
        v46 = *((unsigned __int16 *)&v11[3].Next + 4);
        if ( v45 <= v4 + *((unsigned __int16 *)&v11[3].Next + 5) - v46 )
          v45 = v4 + *((_WORD *)&v11[3].Next + 5) - v46;
        if ( v45 > (unsigned int)(v4 + v6) )
          v33 = 1668170830;
      }
      v47 = ExAllocatePool2(64LL, v45 + 16LL, v33);
      if ( v47 )
      {
        *(_WORD *)(v47 + 8) = v45;
        *(_WORD *)(v47 + 10) = v45 - v4;
        *(_QWORD *)v47 = v11[1].Next;
        v11[1].Next = (_SLIST_ENTRY *)v47;
        goto LABEL_77;
      }
      *((_WORD *)&v11[3].Next + 4) -= v4;
    }
    v39 = v11[1].Next;
    v40 = v11[2].Next;
    if ( v39 && (*(_DWORD *)(&v11[8].Next + 1) & 0x400) != 0 )
      NdisFreeNetBufferListContext((PNET_BUFFER_LIST)v11, *((_WORD *)&v39->Next + 4) - *((_WORD *)&v39->Next + 5));
    *((_DWORD *)&v11[8].Next + 2) &= ~0x100u;
    if ( ((unsigned __int64)v11[14].Next & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      LOBYTE(v39) = 1;
      WfpNblInfoCleanup(v11, v39);
    }
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v11, 0LL, 4u, 0LL, 0);
    if ( (HIDWORD(v40->Next) & 1) != 0 )
    {
      if ( (unsigned __int64)v11 < 0x20 )
        ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)v11, 0LL);
      ExFreePoolWithTag(&v11[-2], 0);
    }
    else
    {
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_68;
      v41 = (unsigned __int64)*((unsigned int *)&v11[-1].Next + 2) << 8;
      v42 = (__int64)&v40[24] + v41;
      if ( !*(_BYTE *)(v42 + 216) )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)&v40[24] + v41));
      if ( !ndisFreeToLookasideList(v42, v11) )
      {
LABEL_68:
        v43 = v40 + 8;
        _InterlockedIncrement((volatile signed __int32 *)&v43[1].Next + 3);
        if ( ExQueryDepthSList((PSLIST_HEADER)v43) >= LOWORD(v43[1].Next) )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v43[2]);
          (*((void (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *))&v43[3].Next + 1))(v11, v43);
          return 0LL;
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v43, v11);
      }
    }
    return 0LL;
  }
  return 0LL;
}
