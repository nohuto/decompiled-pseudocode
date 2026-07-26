/*
 * XREFs of ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x14001A570
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x14001A7F0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14001A7A0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 *     ndisAllocateFromLookasideList @ 0x14001E700 (ndisAllocateFromLookasideList.c)
 */

struct _NET_BUFFER *__fastcall ndisAllocateNetBufferInternal(char *a1, unsigned int *a2)
{
  unsigned int Number; // ebp
  bool v5; // zf
  char *v6; // rdi
  PSLIST_ENTRY v7; // rdi
  PFREE_FUNCTION_EX *v9; // r15
  KIRQL v10; // r13
  unsigned __int64 v11; // rax
  _SLIST_ENTRY *Pool2; // rax
  _SLIST_ENTRY *v13; // r15
  KSPIN_LOCK *v14; // r12
  KIRQL v15; // al
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // r15

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
    {
      *a2 = 0;
      return (struct _NET_BUFFER *)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)a1);
    }
    Number = KeGetPcr()->Prcb.Number;
    v5 = ndisMaxNumberOfProcessors == 1;
    *a2 = 1;
    if ( !v5 )
    {
      v6 = &a1[256 * (unsigned __int64)Number + 384];
      if ( !v6[216] )
      {
        v9 = (PFREE_FUNCTION_EX *)(a1 + 384);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26);
        if ( !v6[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v6,
            ndisAllocateFromNPagedPool,
            *(v9 - 25),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v9 - 53),
            *((_DWORD *)v9 - 54),
            0x400u);
          v6[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v10);
      }
      v7 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v6);
      if ( v7 )
        return (struct _NET_BUFFER *)v7;
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 37);
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 8);
    if ( !v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 38);
      v11 = *((unsigned int *)a1 + 43);
      if ( v11 + 32 >= v11
        && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v11 + 32, *((unsigned int *)a1 + 42)), (v13 = Pool2) != 0LL) )
      {
        v7 = Pool2 + 2;
        Pool2->Next = 0LL;
        if ( Pool2 != (_SLIST_ENTRY *)-32LL )
        {
          v14 = (KSPIN_LOCK *)(a1 + 8);
          Pool2->Next = (_SLIST_ENTRY *)a1;
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 1);
          v16 = *((_QWORD *)a1 + 2);
          v17 = a1 + 16;
          v18 = &v13->Next + 1;
          if ( *(_QWORD **)(v16 + 8) != v17 )
            __fastfail(3u);
          *v18 = v16;
          v18[1] = v17;
          *(_QWORD *)(v16 + 8) = v18;
          *v17 = v18;
          KeReleaseSpinLock(v14, v15);
          *a2 = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v7 = 0LL;
      }
      *a2 = 0;
      return (struct _NET_BUFFER *)v7;
    }
LABEL_17:
    *((_DWORD *)&v7[-1].Next + 2) = Number;
    return (struct _NET_BUFFER *)v7;
  }
  return 0LL;
}
