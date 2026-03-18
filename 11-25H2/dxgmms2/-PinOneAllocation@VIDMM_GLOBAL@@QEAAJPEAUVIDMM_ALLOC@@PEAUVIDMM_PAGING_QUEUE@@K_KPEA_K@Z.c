/*
 * XREFs of ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E6CCC
 * Callers:
 *     ?PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@K_K@Z @ 0x140095F88 (-PinAllocationAt@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@K_K@Z.c)
 *     ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400E6878 (-PinAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CE558 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400E6E2C (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  VIDMM_DEVICE *v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  bool v14; // r9
  int v15; // edi
  VIDMM_DEVICE *v16; // rcx
  _QWORD v17[12]; // [rsp+30h] [rbp-68h] BYREF
  bool v18; // [rsp+A8h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 7264;
  }
  v10 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v18 = 0;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(v10, a2, &v18);
  if ( (int)result >= 0 && !v18 )
  {
    memset(v17, 0, 0x58uLL);
    v17[5] = a5;
    v12 = *(__int64 **)a2;
    LODWORD(v17[0]) = 203;
    v17[2] = a2;
    HIDWORD(v17[4]) = a4;
    v13 = *v12;
    v14 = 0;
    LODWORD(v17[4]) = (**(_DWORD **)(*v12 + 376) & 0x20000) != 0 ? 5 : 0;
    if ( !a3 )
    {
      v14 = 1;
      a3 = *(struct VIDMM_PAGING_QUEUE **)(32LL * (*(_DWORD *)(v13 + 24) & 0x3F)
                                         + *(_QWORD *)(*((_QWORD *)a2 + 1) + 72LL));
    }
    v15 = VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v17, v14, a6);
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      v16 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
      WdLogGlobalForLineNumber = 7311;
      VIDMM_DEVICE::UnreferencePinnedAllocation(v16, a2, 1);
    }
    return (unsigned int)v15;
  }
  return result;
}
