/*
 * XREFs of NdisAllocateNetBufferAndNetBufferList @ 0x140023E00
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140022480 (NdisAllocateFragmentNetBufferList.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140022930 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x140041130 (ndisCopyPeriodicReceiveNbl.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041AC0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140041CC0 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1400C6990 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x14001A400 (NdisFreeNetBufferList.c)
 *     ndisAllocateFromLookasideList @ 0x140025220 (ndisAllocateFromLookasideList.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400252F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ndisGenerateCorrelationIds @ 0x140025660 (ndisGenerateCorrelationIds.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferAndNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill,
        PMDL MdlChain,
        ULONG DataOffset,
        SIZE_T DataLength)
{
  int v6; // r12d
  int v8; // edi
  unsigned int Number; // ebp
  unsigned int v11; // r15d
  char *v12; // rbx
  PSLIST_ENTRY v13; // rbx
  __int16 v14; // bp
  int v15; // eax
  bool v16; // zf
  _SLIST_ENTRY *v17; // rax
  struct _NET_BUFFER_LIST *v18; // rbp
  ULONG v19; // ecx
  ULONG ByteCount; // eax
  PFREE_FUNCTION_EX *v22; // r13
  KIRQL v23; // al
  _QWORD *p_Next; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rax
  _SLIST_ENTRY *i; // r9
  __int64 v28; // rax
  unsigned int CorrelationIds; // eax
  unsigned __int64 v30; // rax
  _SLIST_ENTRY *v31; // rax
  _SLIST_ENTRY *v32; // r15
  KIRQL v33; // al
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // r15
  unsigned __int64 v37; // rax
  unsigned int v38; // r15d
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v40; // r8
  int v41; // edx
  PSLIST_ENTRY v42; // rax
  unsigned __int16 v43; // dx
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // bp
  int v46; // r8d
  __int64 v47; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v49; // [rsp+70h] [rbp+8h]

  v6 = ContextBackFill;
  v8 = ContextSize;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 11) & 5) == 1 )
    {
      if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
        return 0LL;
      if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
      {
        v37 = *((unsigned int *)PoolHandle + 8);
        v11 = 0;
        if ( v37 + 32 >= v37 )
        {
          Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(0x100000042LL, v37 + 32, *((unsigned int *)PoolHandle + 9));
          if ( Pool2 )
          {
            Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
            v13 = Pool2 + 2;
          }
          else
          {
            v13 = 0LL;
          }
        }
        else
        {
          v13 = 0LL;
        }
        goto LABEL_8;
      }
      Number = KeGetPcr()->Prcb.Number;
      v11 = 1;
      if ( ndisMaxNumberOfProcessors != 1 )
      {
        v12 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
        if ( !v12[216] )
        {
          v22 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
          v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26);
          v49 = v23;
          if ( !v12[216] )
          {
            ExInitializeLookasideListEx(
              (PLOOKASIDE_LIST_EX)v12,
              ndisAllocateFromNPagedPool,
              *(v22 - 25),
              NonPagedPoolNx,
              0,
              *((unsigned int *)v22 - 53),
              *((_DWORD *)v22 - 54),
              0x400u);
            v23 = v49;
            v12[216] = 1;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v23);
        }
        v13 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v12);
        if ( v13 )
        {
LABEL_8:
          if ( v13 )
          {
            v14 = *((_WORD *)&v13[3].Next + 5);
            memset(v13, 0, 8 * (v11 ^ 1LL) + 368);
            v13[2].Next = (_SLIST_ENTRY *)PoolHandle;
            *((_DWORD *)&v13[8].Next + 2) = 256;
            if ( v11 )
              *((_WORD *)&v13[3].Next + 5) = v14;
            if ( Microsoft_Windows_Networking_CorrelationEnabled )
            {
              p_Next = &v13->Next;
              if ( *((__int64 *)&v13[15].Next + 1) > 0 )
              {
                for ( i = v13->Next; i; i = i->Next )
                {
                  v28 = *((_QWORD *)&i[15].Next + 1);
                  if ( !v28 || v28 < 0 )
                  {
                    CorrelationIds = ndisGenerateCorrelationIds(1LL);
                    *((_QWORD *)&i[15].Next + 1) = CorrelationIds;
                  }
                }
              }
              else
              {
                v25 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
                if ( v25 + 1 < v25 )
                  v25 = _InterlockedExchangeAdd(&dword_14011AF28, 1u);
                do
                {
                  if ( (__int64)p_Next[31] <= 0 )
                  {
                    v26 = v25++;
                    p_Next[31] = v26;
                  }
                  p_Next = (_QWORD *)*p_Next;
                }
                while ( p_Next );
              }
            }
            *((_BYTE *)&v13[12].Next + 8) = *((_BYTE *)PoolHandle + 40);
            v15 = *((_DWORD *)PoolHandle + 11);
            if ( (v15 & 2) != 0 )
            {
              v16 = (v15 & 1) == 0;
              v17 = v13 + 35;
              if ( v16 )
                v17 = v13 + 24;
              v13[1].Next = v17;
              v17->Next = 0LL;
              *((_WORD *)&v13[1].Next->Next + 4) = *((_WORD *)PoolHandle + 21);
              *((_WORD *)&v13[1].Next->Next + 5) = *((_WORD *)PoolHandle + 21);
              if ( *((_WORD *)PoolHandle + 21) >= (unsigned __int16)v8 )
              {
                v18 = (struct _NET_BUFFER_LIST *)v13;
                *((_WORD *)&v13[1].Next->Next + 5) -= v8;
LABEL_19:
                memset(&v13[24], 0, 0xB0uLL);
                v19 = DataOffset;
                *((_DWORD *)&v13[26].Next + 2) = DataOffset;
                *((_DWORD *)&v13[25].Next + 2) = DataLength;
                v13[26].Next = (_SLIST_ENTRY *)MdlChain;
                for ( *((_QWORD *)&v13[27].Next + 1) = PoolHandle; MdlChain; v19 -= ByteCount )
                {
                  ByteCount = MdlChain->ByteCount;
                  if ( v19 < ByteCount )
                    break;
                  MdlChain = MdlChain->Next;
                }
                *((_QWORD *)&v13[24].Next + 1) = MdlChain;
                LODWORD(v13[25].Next) = v19;
                *((_QWORD *)&v13->Next + 1) = v13 + 24;
                if ( *(int *)ndisNblTrackerMode >= 3 )
                  ndisNblTrackerRecordEventInternal((struct _NET_BUFFER_LIST *)v13, 0LL, 3u, 0LL, 0);
                return v18;
              }
            }
            if ( !(_WORD)v8 )
              goto LABEL_18;
            v38 = *((_DWORD *)PoolHandle + 9);
            if ( (v8 & 7) != 0 || (v6 & 7) != 0 )
            {
              NdisFreeNetBufferList((PNET_BUFFER_LIST)v13);
              v13 = 0LL;
              goto LABEL_18;
            }
            Next = v13[1].Next;
            v40 = v13[23].Next;
            v41 = *((_DWORD *)&v13[2].Next[2].Next + 3);
            if ( (v41 & 2) == 0 )
              goto LABEL_60;
            v42 = v13 + 35;
            if ( (v41 & 1) == 0 )
              v42 = v13 + 24;
            if ( Next != v42 || *((_WORD *)&Next->Next + 5) < (unsigned __int16)v8 )
            {
LABEL_60:
              v43 = *((_WORD *)&v13[3].Next + 4) + v8;
              *((_WORD *)&v13[3].Next + 4) = v43;
              if ( v43 <= ndisMaxCachedNblContextSize )
              {
                if ( v43 <= *((_WORD *)&v13[3].Next + 5) )
                  v43 = *((_WORD *)&v13[3].Next + 5);
                *((_WORD *)&v13[3].Next + 5) = v43;
              }
            }
            if ( Next )
            {
              v44 = *((_WORD *)&Next->Next + 5);
              if ( v44 >= (unsigned __int16)v8 )
              {
                *((_WORD *)&Next->Next + 5) = v44 - v8;
LABEL_68:
                *((_DWORD *)&v13[8].Next + 2) |= 0x400u;
                goto LABEL_18;
              }
            }
            if ( v40 && *((_WORD *)&v40->Next + 4) >= (unsigned __int16)v8 )
            {
              *((_WORD *)&v40->Next + 5) -= v8;
              v40->Next = v13[1].Next;
              *((_DWORD *)&v13[8].Next + 2) |= 0x400u;
              v13[1].Next = v40;
              v13[23].Next = 0LL;
            }
            else
            {
              v45 = v6 + v8;
              if ( *((unsigned __int16 *)&v13[3].Next + 4) <= ndisMaxCachedNblContextSize )
              {
                if ( v40 )
                {
                  v13[23].Next = 0LL;
                  ExFreePoolWithTag(v40, 0);
                }
                v46 = *((unsigned __int16 *)&v13[3].Next + 4);
                if ( v45 <= v8 + *((unsigned __int16 *)&v13[3].Next + 5) - v46 )
                  v45 = v8 + *((_WORD *)&v13[3].Next + 5) - v46;
                if ( v45 > (unsigned int)(v8 + v6) )
                  v38 = 1668170830;
              }
              v47 = ExAllocatePool2(64LL, v45 + 16LL, v38);
              if ( v47 )
              {
                *(_WORD *)(v47 + 8) = v45;
                *(_WORD *)(v47 + 10) = v45 - v8;
                *(_QWORD *)v47 = v13[1].Next;
                v13[1].Next = (_SLIST_ENTRY *)v47;
                goto LABEL_68;
              }
              *((_WORD *)&v13[3].Next + 4) -= v8;
              NdisFreeNetBufferList((PNET_BUFFER_LIST)v13);
              v13 = 0LL;
            }
LABEL_18:
            v18 = (struct _NET_BUFFER_LIST *)v13;
            if ( v13 )
              goto LABEL_19;
            return v18;
          }
          return 0LL;
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
      v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( !v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
        v30 = *((unsigned int *)PoolHandle + 43);
        if ( v30 + 32 >= v30
          && (v31 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v30 + 32, *((unsigned int *)PoolHandle + 42)),
              (v32 = v31) != 0LL) )
        {
          v31->Next = 0LL;
          v13 = v31 + 2;
          if ( v31 != (_SLIST_ENTRY *)-32LL )
          {
            v31->Next = (_SLIST_ENTRY *)PoolHandle;
            v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
            v34 = *((_QWORD *)PoolHandle + 2);
            v35 = (char *)PoolHandle + 16;
            v36 = &v32->Next + 1;
            if ( *(NDIS_HANDLE *)(v34 + 8) != (char *)PoolHandle + 16 )
              __fastfail(3u);
            *v36 = v34;
            v36[1] = v35;
            *(_QWORD *)(v34 + 8) = v36;
            *v35 = v36;
            KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v33);
            v11 = 0;
            goto LABEL_47;
          }
        }
        else
        {
          v13 = 0LL;
        }
        v11 = 0;
        goto LABEL_8;
      }
LABEL_47:
      *((_DWORD *)&v13[-1].Next + 2) = Number;
      goto LABEL_8;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", PoolHandle);
    return 0LL;
  }
  else
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool is NULL\n");
    return 0LL;
  }
}
