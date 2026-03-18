/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093DB0
 * Callers:
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093CF4 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400ED714 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x140038E5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B1B5C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x14010A30C (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdi
  VIDMM_GLOBAL *v6; // rcx
  struct _VIDSCH_SYNC_OBJECT **v7; // rbp
  _QWORD v8[12]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v9; // [rsp+A8h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = a2;
    WdLogGlobalForLineNumber = 6302;
  }
  v4 = *(__int64 **)a2;
  v9 = 0LL;
  v5 = *v4;
  v6 = *(VIDMM_GLOBAL **)(*((_QWORD *)a2 + 1) + 80LL);
  v7 = (struct _VIDSCH_SYNC_OBJECT **)*((_QWORD *)v6 + 4 * (*(_DWORD *)(*v4 + 24) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 12LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(v6, (struct VIDMM_GLOBAL_ALLOC *)v5, 0LL, 0);
  if ( *(_QWORD *)(*(_QWORD *)v5 + 64LL) )
  {
    memset(v8, 0, 0x58uLL);
    v8[1] = *((_QWORD *)a2 + 1);
    LODWORD(v8[0]) = 211;
    v8[4] = v5;
    if ( (unsigned int)VIDMM_GLOBAL::QueueDeferredCommand(
                         this,
                         (struct VIDMM_PAGING_QUEUE *)v7,
                         (struct _VIDMM_DEFERRED_COMMAND *)v8,
                         0,
                         &v9) == 259 )
      VIDMM_GLOBAL::WaitForFence(this, v7[11], v9);
  }
  else
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 136));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v5);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v5 + 136));
  }
}
