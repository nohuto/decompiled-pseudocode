/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B80
 * Callers:
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7B70 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1401009EC (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B04 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AC484 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // r15
  _QWORD **v4; // r14
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD **v8; // rsi
  _QWORD *v9; // rdi
  VIDMM_DEVICE **v10; // rbp

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v4 = (_QWORD **)((char *)a2 + 112);
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v6 = *v4;
  while ( v6 != v4 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    v8 = (_QWORD **)(v7 - 2);
    v9 = *v8;
    while ( v9 != v8 )
    {
      v10 = (VIDMM_DEVICE **)(v9 - 5);
      v9 = (_QWORD *)*v9;
      if ( (*((_BYTE *)v10 + 28) & 3) == 2 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = v10;
          WdLogGlobalForLineNumber = 26009;
        }
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v10, 0);
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
}
