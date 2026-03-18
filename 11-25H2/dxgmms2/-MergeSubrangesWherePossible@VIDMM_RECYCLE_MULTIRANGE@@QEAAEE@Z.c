/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400C4010 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400C53F0 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C5784 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400C75C0 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1400C7778 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C802C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400C8210 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8C2C (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rbx
  struct VIDMM_RECYCLE_RANGE *v3; // rcx
  struct VIDMM_RECYCLE_RANGE *v4; // r8
  int v5; // r9d
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r10
  _QWORD *v9; // rsi
  struct VIDMM_RECYCLE_RANGE *v11; // rdx
  struct VIDMM_RECYCLE_RANGE *v12; // rbp
  __int64 v13; // rbx

  v1 = *((_QWORD *)this + 8);
  v3 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v5 = *(_DWORD *)(v1 + 64);
  v6 = *(_DWORD *)(v1 + 92);
  v7 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    if ( *(_DWORD *)(v1 + 64) != v5 || *(_DWORD *)(v1 + 92) != v6 )
    {
      if ( v3 != v4 )
      {
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v3, v4);
        v7 = *((_QWORD *)this + 9);
      }
      v5 = *(_DWORD *)(v1 + 64);
      v3 = (struct VIDMM_RECYCLE_RANGE *)v1;
      v6 = *(_DWORD *)(v1 + 92);
    }
    v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
    if ( v1 == v7 )
      break;
    v8 = *(_QWORD *)(v1 + 120);
    if ( v8 == *(_QWORD *)(v1 + 72) + 72LL )
      v1 = 0LL;
    else
      v1 = v8 - 120;
  }
  if ( v3 != (struct VIDMM_RECYCLE_RANGE *)v1 )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v3, (struct VIDMM_RECYCLE_RANGE *)v1);
  if ( !*((_DWORD *)this + 50) )
  {
    v11 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
    if ( v11 == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && !*((_DWORD *)v11 + 16) )
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 10), v11);
  }
  v9 = (_QWORD *)*((_QWORD *)this + 10);
  if ( *v9 != 1LL )
    return 0;
  if ( *((_DWORD *)this + 50) )
    return 0;
  v12 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( *((_DWORD *)v12 + 16) )
    return 0;
  v13 = v9[4];
  WdLogSingleEntry2(4LL, this, 2LL);
  WdLogGlobalForLineNumber = 8567;
  RtlAvlRemoveNode(v13 + 64, this);
  *((_DWORD *)this + 22) = 3;
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v9[4] + 8LL), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(PLOOKASIDE_LIST_EX **)(v9[4] + 8LL), v12);
  return 1;
}
