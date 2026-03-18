/*
 * XREFs of MiFreeCombineBlock @ 0x14023A47C
 * Callers:
 *     MiDecrementCombinedPteEx @ 0x140224E9C (MiDecrementCombinedPteEx.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiFreeCombineBlock(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  KIRQL v5; // r13
  __int64 v6; // rdi
  volatile LONG *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  volatile LONG *v13; // rcx
  KIRQL v14; // r15
  __int64 v15; // rdx
  __int64 result; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 17;
  v6 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v12 = 16 * (*(_QWORD *)(a1 + 24) & 0xFLL);
    v13 = (volatile LONG *)(v6 + v12 + 104);
    if ( a2 )
    {
      v14 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v13);
    }
    else
    {
      v14 = ExAcquireSpinLockExclusive(v13);
    }
    RtlAvlRemoveNode(v6 + v12 + 96, a1);
    LOBYTE(v15) = v14;
    MiReleaseSpinLockExclusive(v6 + v12 + 104, v15);
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
    v17 = (_QWORD *)(v2 + 72);
    LODWORD(v8) = 0;
    do
    {
      if ( v17 != (_QWORD *)a1 )
      {
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 )
          goto LABEL_6;
        v19 = (_QWORD *)v17[1];
        if ( (_QWORD *)*v19 != v17 )
          goto LABEL_6;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
      }
      v17 += 9;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < 0x37 );
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
    v10 = (unsigned __int64 *)(v6 + 72);
    v11 = *(_QWORD *)(v6 + 72);
    if ( *(_QWORD *)(v11 + 8) != v6 + 72 )
LABEL_6:
      __fastfail(3u);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(v11 + 8) = a1;
    *v10 = a1;
  }
  LOBYTE(v8) = v5;
  result = MiReleaseSpinLockExclusive(v6 + 88, v8);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 388));
  return result;
}
