/*
 * XREFs of NdisAllocateNetBufferMdlAndData @ 0x140025690
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x140022CC0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 *     ndisAllocateFromLookasideList @ 0x140025220 (ndisAllocateFromLookasideList.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBufferMdlAndData(NDIS_HANDLE PoolHandle)
{
  PSLIST_ENTRY v2; // rbx
  unsigned int Number; // esi
  int v4; // ebp
  char *v5; // rbx
  _SLIST_ENTRY *v6; // rsi
  int v7; // ecx
  PFREE_FUNCTION_EX *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int16 v13; // dx
  int v14; // edx
  unsigned __int64 v15; // rax
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v17; // r14
  KIRQL v18; // al
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // r14

  v2 = 0LL;
  if ( !PoolHandle )
    return (PNET_BUFFER)v2;
  if ( (*((_DWORD *)PoolHandle + 20) & 1) == 0 )
  {
    DbgPrint("NdisAllocateNetBufferMdlAndData: Pool %p wrong pool type.\n", PoolHandle);
    return (PNET_BUFFER)v2;
  }
  if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
  {
    v4 = 0;
    v2 = (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)PoolHandle);
  }
  else
  {
    Number = KeGetPcr()->Prcb.Number;
    v4 = 1;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v5 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
      if ( !v5[216] )
      {
        v9 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 26);
        if ( !v5[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v5,
            ndisAllocateFromNPagedPool,
            *(v9 - 25),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v9 - 53),
            *((_DWORD *)v9 - 54),
            0x400u);
          v5[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v5 + 26, v10);
      }
      v2 = ndisAllocateFromLookasideList((__int64)v5);
      if ( v2 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
    v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
    if ( v2 )
      goto LABEL_25;
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
    v15 = *((unsigned int *)PoolHandle + 43);
    if ( v15 + 32 >= v15
      && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v15 + 32, *((unsigned int *)PoolHandle + 42)),
          (v17 = Pool2) != 0LL) )
    {
      v2 = Pool2 + 2;
      Pool2->Next = 0LL;
      if ( Pool2 != (_SLIST_ENTRY *)-32LL )
      {
        Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v19 = *((_QWORD *)PoolHandle + 2);
        v20 = (char *)PoolHandle + 16;
        v21 = &v17->Next + 1;
        if ( *(NDIS_HANDLE *)(v19 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        *v21 = v19;
        v21[1] = v20;
        *(_QWORD *)(v19 + 8) = v21;
        *v20 = v21;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v18);
        v4 = 0;
LABEL_25:
        *((_DWORD *)&v2[-1].Next + 2) = Number;
        goto LABEL_7;
      }
    }
    else
    {
      v2 = 0LL;
    }
    v4 = 0;
  }
LABEL_7:
  if ( !v2 )
    return 0LL;
  v6 = v2 + 11;
  if ( v4 )
  {
    *((_DWORD *)&v2[13].Next + 2) = *((_DWORD *)PoolHandle + 21);
    v6->Next = 0LL;
  }
  else
  {
    v11 = *((unsigned int *)PoolHandle + 21);
    v12 = (unsigned __int64)v6 + *((unsigned int *)PoolHandle + 22);
    v13 = (_WORD)v6 + *((_DWORD *)PoolHandle + 22);
    v6->Next = 0LL;
    *((_WORD *)&v2[11].Next + 5) = 0;
    *((_DWORD *)&v2[13].Next + 2) = v11;
    v2[13].Next = (_SLIST_ENTRY *)(v12 & 0xFFFFFFFFFFFFF000uLL);
    v14 = v13 & 0xFFF;
    *((_DWORD *)&v2[13].Next + 3) = v14;
    *((_WORD *)&v2[11].Next + 4) = 8 * ((((unsigned __int64)(unsigned __int16)v14 + v11 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool((PMDL)&v2[11]);
  }
  v7 = *((_DWORD *)PoolHandle + 21);
  v2->Next = 0LL;
  *((_QWORD *)&v2[3].Next + 1) = PoolHandle;
  *((_QWORD *)&v2->Next + 1) = v6;
  LODWORD(v2[1].Next) = v7;
  v2[2].Next = v6;
  *((_DWORD *)&v2[2].Next + 2) = v7;
  *((_DWORD *)&v2[1].Next + 2) = 0;
  LODWORD(v2[3].Next) = 0;
  *((_QWORD *)&v2[4].Next + 1) = 0LL;
  v2[4].Next = 0LL;
  *((_QWORD *)&v2[8].Next + 1) = 0LL;
  v2[8].Next = 0LL;
  *((_QWORD *)&v2[10].Next + 1) = 0LL;
  return (PNET_BUFFER)v2;
}
