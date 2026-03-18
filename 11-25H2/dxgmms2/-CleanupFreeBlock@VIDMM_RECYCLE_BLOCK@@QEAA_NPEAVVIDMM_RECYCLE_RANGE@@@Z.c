/*
 * XREFs of ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C5164
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4444 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5A0C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C802C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400ECCC0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

char __fastcall VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(VIDMM_RECYCLE_BLOCK *this, struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v3; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v4; // rbp
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rdi

  v3 = *((_QWORD *)this + 4);
  v4 = *(VIDMM_RECYCLE_HEAP_MGR **)(v3 + 8);
  if ( *(_QWORD *)this != 1LL )
    return 0;
  v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
  if ( v6 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*((_QWORD *)this + 4), 2LL, *((_QWORD *)a2 + 17));
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v4, v6);
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, 2LL);
    WdLogGlobalForLineNumber = 8455;
    RtlAvlRemoveNode(v3 + 64, a2);
    *((_DWORD *)a2 + 22) = 3;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v4, a2);
  return 1;
}
