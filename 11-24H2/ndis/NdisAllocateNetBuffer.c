/*
 * XREFs of NdisAllocateNetBuffer @ 0x1400238F0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140022480 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x140023040 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x140022CC0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 *     ndisAllocateFromLookasideList @ 0x140025220 (ndisAllocateFromLookasideList.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  int v4; // r14d
  PSLIST_ENTRY v8; // rbx
  unsigned int Number; // r15d
  char *v10; // rbx
  ULONG v11; // edx
  PMDL v12; // rcx
  ULONG ByteCount; // eax
  PFREE_FUNCTION_EX *v15; // r13
  KIRQL v16; // al
  unsigned __int64 v17; // rax
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v19; // r12
  KIRQL v20; // al
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // r12
  KIRQL v24; // [rsp+70h] [rbp+8h]

  v4 = DataLength;
  v8 = 0LL;
  if ( !PoolHandle )
    return (PNET_BUFFER)v8;
  if ( (*((_DWORD *)PoolHandle + 20) & 1) != 0 )
  {
    DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
    return (PNET_BUFFER)v8;
  }
  if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
  {
    v8 = (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)PoolHandle);
    goto LABEL_7;
  }
  Number = KeGetPcr()->Prcb.Number;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v10 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
    if ( !v10[216] )
    {
      v15 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 26);
      v24 = v16;
      if ( !v10[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v10,
          ndisAllocateFromNPagedPool,
          *(v15 - 25),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v15 - 53),
          *((_DWORD *)v15 - 54),
          0x400u);
        v16 = v24;
        v10[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v10 + 26, v16);
    }
    v8 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v10);
    if ( v8 )
      goto LABEL_7;
  }
  _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( v8 )
    goto LABEL_25;
  _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
  v17 = *((unsigned int *)PoolHandle + 43);
  if ( v17 + 32 < v17 )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v17 + 32, *((unsigned int *)PoolHandle + 42));
  v19 = Pool2;
  if ( !Pool2 )
  {
    v8 = 0LL;
    goto LABEL_7;
  }
  Pool2->Next = 0LL;
  v8 = Pool2 + 2;
  if ( Pool2 != (_SLIST_ENTRY *)-32LL )
  {
    Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
    v21 = *((_QWORD *)PoolHandle + 2);
    v22 = (char *)PoolHandle + 16;
    v23 = &v19->Next + 1;
    if ( *(NDIS_HANDLE *)(v21 + 8) != (char *)PoolHandle + 16 )
      __fastfail(3u);
    *v23 = v21;
    v23[1] = v22;
    *(_QWORD *)(v21 + 8) = v23;
    *v22 = v23;
    KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v20);
LABEL_25:
    *((_DWORD *)&v8[-1].Next + 2) = Number;
  }
LABEL_7:
  if ( !v8 )
    return 0LL;
  *((_QWORD *)&v8->Next + 1) = 0LL;
  v11 = DataOffset;
  LODWORD(v8[1].Next) = 0;
  v12 = MdlChain;
  v8[2].Next = 0LL;
  *((_DWORD *)&v8[2].Next + 2) = 0;
  *((_DWORD *)&v8[1].Next + 2) = 0;
  *((_QWORD *)&v8[4].Next + 1) = 0LL;
  v8[4].Next = 0LL;
  *((_QWORD *)&v8[8].Next + 1) = 0LL;
  v8[8].Next = 0LL;
  v8->Next = 0LL;
  *((_QWORD *)&v8[3].Next + 1) = PoolHandle;
  LODWORD(v8[3].Next) = 0;
  for ( *((_QWORD *)&v8[10].Next + 1) = 0LL; v12; v11 -= ByteCount )
  {
    ByteCount = v12->ByteCount;
    if ( v11 < ByteCount )
      break;
    v12 = v12->Next;
  }
  v8[2].Next = (_SLIST_ENTRY *)MdlChain;
  *((_DWORD *)&v8[2].Next + 2) = DataOffset;
  *((_DWORD *)&v8[1].Next + 2) = v4;
  *((_QWORD *)&v8->Next + 1) = v12;
  LODWORD(v8[1].Next) = v11;
  return (PNET_BUFFER)v8;
}
