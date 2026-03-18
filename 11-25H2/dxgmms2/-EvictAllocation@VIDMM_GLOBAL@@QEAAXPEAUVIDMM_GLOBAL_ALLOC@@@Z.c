/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DC5B8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400F11A0 (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400BAA94 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400DC6E0 (-NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // r12
  struct VIDMM_GLOBAL_ALLOC *v5; // rbx
  struct VIDMM_GLOBAL_ALLOC *v6; // r15
  _QWORD **v7; // r15
  _QWORD *v8; // rsi
  VIDMM_PHYSICAL_ADAPTER *v9; // rbx
  VIDMM_DEVICE **v10; // rdx

  v3 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 15994;
  }
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v5 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
  while ( v5 != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
  {
    v6 = v5;
    v5 = *(struct VIDMM_GLOBAL_ALLOC **)v5;
    v7 = (_QWORD **)((char *)v6 - 16);
    v8 = *v7;
    while ( v8 != v7 )
    {
      v10 = (VIDMM_DEVICE **)(v8 - 5);
      v8 = (_QWORD *)*v8;
      if ( (*((_BYTE *)v10 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v10, 0);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  v9 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (*((_DWORD *)a2 + 6) & 0x3F));
  (*(void (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 64) + 24LL))(
    *(_QWORD *)(v3 + 64),
    a2,
    *(_QWORD *)(v3 + 80),
    *(_QWORD *)(v3 + 16),
    **((_QWORD **)a2 + 42));
  *(_QWORD *)(v3 + 80) = 0LL;
  *((_DWORD *)a2 + 18) = 1;
  VIDMM_PHYSICAL_ADAPTER::NotifyAllocationReclaimed(v9, (struct VIDMM_PHYSICAL_ALLOC *)v3, 0);
}
