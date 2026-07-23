/*
 * XREFs of MiFreeCombineBlock @ 0x1403427B8
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecrementCombinedPteEx @ 0x140294CC8 (MiDecrementCombinedPteEx.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  KIRQL v5; // r13
  __int64 v6; // rdi
  volatile LONG *v7; // rcx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  volatile LONG *v12; // rcx
  KIRQL v13; // r15
  __int64 result; // rax
  _QWORD *v15; // rcx
  unsigned int i; // edx
  __int64 v17; // r8
  _QWORD *v18; // rax

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 17;
  v6 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v11 = 16 * (*(_QWORD *)(a1 + 24) & 0xFLL);
    v12 = (volatile LONG *)(v6 + v11 + 104);
    if ( a2 )
    {
      v13 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    }
    else
    {
      v13 = ExAcquireSpinLockExclusive(v12);
    }
    RtlAvlRemoveNode((unsigned __int64 *)(v6 + v11 + 96), a1);
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + v11 + 104), v13);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v7 = (volatile LONG *)(v6 + 88);
  *(_QWORD *)(a1 + 48) &= 0xFFFFFFFFFFFFFFE0uLL;
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v7);
  else
    v5 = ExAcquireSpinLockExclusive(v7);
  if ( (*(_DWORD *)(v2 + 8))-- == 1 )
  {
    v15 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v15 != (_QWORD *)a1 )
      {
        v17 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_6;
        v18 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v18 != v15 )
          goto LABEL_6;
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
      }
      v15 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v6 + 56) = v6;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v6 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v9 = (__int64 *)(v6 + 72);
    v10 = *(_QWORD *)(v6 + 72);
    if ( *(_QWORD *)(v10 + 8) != v6 + 72 )
LABEL_6:
      __fastfail(3u);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a1;
    *v9 = a1;
  }
  result = MiReleaseSpinLockExclusive((_DWORD *)(v6 + 88), v5);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 388));
  return result;
}
