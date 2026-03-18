/*
 * XREFs of ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F5630
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C38B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  struct VIDMM_GLOBAL_ALLOC *v3; // rbx
  VIDMM_GLOBAL **v7; // r10
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // [rsp+50h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v3 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  v7 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 5029) + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 24LL) & 0x3F));
  if ( *((_QWORD *)a2 + 18) )
  {
    v8 = (_QWORD *)((char *)a2 + 112);
    v9 = *((_QWORD *)a2 + 14);
    if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    v8[1] = 0LL;
    VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(v7, a2);
  }
  v13 = 0;
  v12 = (_DWORD *)((char *)v3 + 136);
  if ( v3 == (struct VIDMM_GLOBAL_ALLOC *)-136LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v11, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  if ( (*((_DWORD *)v3 + 8) & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(this, v3, a3);
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *((_QWORD *)a2 + 2));
    *((_DWORD *)v3 + 8) &= ~2u;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v12);
}
