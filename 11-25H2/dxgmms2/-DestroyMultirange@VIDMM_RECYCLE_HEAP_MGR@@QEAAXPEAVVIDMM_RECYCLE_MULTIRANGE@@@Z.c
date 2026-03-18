/*
 * XREFs of ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14008FC58 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140090434 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400C50F4 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C5164 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C69BC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1400C99B0 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9E40 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1401116D4 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400285FC (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(PLOOKASIDE_LIST_EX *this, struct _LOOKASIDE_LIST_EX *a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  VIDMM_RECYCLE_BLOCK *v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx

  Next = a2[1].L.SingleListHead.Next;
  if ( Next )
  {
    ExFreePoolWithTag(Next, 0);
    a2[1].L.ListHead.Alignment = 0LL;
  }
  v5 = *(_QWORD *)&a2->L.LastTotalAllocates;
  v6 = *(_QWORD *)(v5 + 136);
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 24) + 144LL * *(_QWORD *)(v6 + 32);
    *(_DWORD *)v11 = 1;
    *(_QWORD *)(v11 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v11 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v5 + 136) + 32LL);
    v12 = *(_QWORD *)(v5 + 136);
    if ( *(_QWORD *)(v12 + 32) == *(_QWORD *)(v12 + 48) )
    {
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v5 + 136) + 40LL) = 1;
    }
  }
  v7 = *(VIDMM_RECYCLE_BLOCK **)&a2->L.LastTotalAllocates;
  v8 = *((_QWORD *)v7 + 1) - 1LL;
  v9 = *(_QWORD *)v7 == 0LL;
  *((_QWORD *)v7 + 1) = v8;
  if ( v9 && !v8 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v7);
  *((_BYTE *)&a2[2].L.SingleListHead + 12) = 1;
  v10 = *((unsigned int *)this + 405);
  if ( (unsigned int)v10 >= 4 )
  {
    ExFreeToLookasideListEx(this[165], a2);
  }
  else
  {
    this[v10 + 207] = a2;
    ++*((_DWORD *)this + 405);
  }
  --*((_DWORD *)this + 422);
}
