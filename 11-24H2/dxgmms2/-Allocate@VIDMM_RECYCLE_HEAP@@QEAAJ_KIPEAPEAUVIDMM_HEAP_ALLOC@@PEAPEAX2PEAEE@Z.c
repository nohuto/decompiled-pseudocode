/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400CC078
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400FB590 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C6B0C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1400C7830 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400C908C (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400C9528 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB42C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400CC374 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CC590 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1400CC660 (-Zeroed@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400CC6F4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::Allocate(
        PLOOKASIDE_LIST_EX **this,
        unsigned __int64 a2,
        unsigned int a3,
        struct VIDMM_HEAP_ALLOC **a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  __int64 v9; // rbx
  __int64 v12; // r15
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v14; // rdx
  unsigned __int8 v15; // dl
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rax
  struct VIDMM_RECYCLE_RANGE *v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  void *v22; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  void *v26; // rcx
  int v27; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h]
  char v29; // [rsp+40h] [rbp-10h]

  v27 = -1;
  v9 = a3;
  v28 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v29 = 1;
    v27 = 8004;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v12 = v9;
  WdLogSingleEntry3(4LL, this, a2, v9);
  WdLogGlobalForLineNumber = 9371;
  BlockAndRange = VIDMM_RECYCLE_HEAP::LookupSufficientRange((VIDMM_RECYCLE_HEAP *)this, a2, v9, a8);
  if ( BlockAndRange
    || (WdLogSingleEntry3(4LL, this, a2, v12),
        WdLogGlobalForLineNumber = 9377,
        (BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange((VIDMM_RECYCLE_HEAP *)this, a2, v24, a8)) != 0LL) )
  {
    v14 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v14 > a2 )
      VIDMM_RECYCLE_MULTIRANGE::SplitAt(BlockAndRange, a2 + v14 - *((_QWORD *)BlockAndRange + 4));
    VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, *((unsigned int *)BlockAndRange + 22), BlockAndRange);
    v16 = VIDMM_RECYCLE_MULTIRANGE::Commit(BlockAndRange, v15, a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry5(3LL, BlockAndRange, a2, v12, v16, this[1][1]->L.ListHead.Alignment);
      WdLogGlobalForLineNumber = 9419;
      VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)this, BlockAndRange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], (struct _LOOKASIDE_LIST_EX *)BlockAndRange);
    }
    else
    {
      v18 = *((_QWORD *)BlockAndRange + 9);
      v19 = 0LL;
      v20 = *(_QWORD *)(v18 + 120);
      if ( v20 != *(_QWORD *)(v18 + 72) + 72LL )
        v19 = (struct VIDMM_RECYCLE_RANGE *)(v20 - 120);
      if ( v19 && !*((_DWORD *)v19 + 16) )
        VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(*((_QWORD **)BlockAndRange + 10), v19);
      *a4 = BlockAndRange;
      v21 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      if ( (unsigned int)(v21 - 3) <= 3 && (unsigned int)(v21 - 5) > 1 )
        v22 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
      else
        v22 = (void *)*((_QWORD *)BlockAndRange + 6);
      *a5 = v22;
      if ( a6 )
      {
        v25 = *((_QWORD *)BlockAndRange + 10);
        if ( (unsigned int)(**(_DWORD **)(v25 + 32) - 9) > 1 )
          v26 = 0LL;
        else
          v26 = (void *)(*((_QWORD *)BlockAndRange + 6) + *(_QWORD *)(v25 + 120) - *(_QWORD *)(v25 + 40));
        *a6 = v26;
      }
      *a7 = VIDMM_RECYCLE_MULTIRANGE::Zeroed(BlockAndRange);
      *(_QWORD *)&this[1][1][1].L.Tag += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
    }
    return v17;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    return 3221225495LL;
  }
}
