/*
 * XREFs of ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A95B8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9808 (-ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 */

void __fastcall VIDMM_GLOBAL::EvictTemporaryResourceForCleanup(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  struct VIDMM_GLOBAL_ALLOC *v3; // rsi
  VIDMM_PHYSICAL_ADAPTER *v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  _DWORD *v13; // [rsp+50h] [rbp-18h] BYREF
  char v14; // [rsp+58h] [rbp-10h]

  v3 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  v7 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (*(_DWORD *)(*(_QWORD *)a2 + 24LL) & 0x3F));
  if ( *((_QWORD *)a2 + 18) )
  {
    v9 = (_QWORD *)((char *)a2 + 112);
    v10 = *((_QWORD *)a2 + 14);
    if ( *(_QWORD **)(v10 + 8) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = 0LL;
    v9[1] = 0LL;
    VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(v7, a2);
  }
  v14 = 0;
  v13 = (_DWORD *)((char *)v3 + 136);
  if ( v3 == (struct VIDMM_GLOBAL_ALLOC *)-136LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v12, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13);
  if ( (*((_DWORD *)v3 + 8) & 2) != 0 )
  {
    VIDMM_SEGMENT::UnlockAllocationBackingStore(this, v3, a3);
    v8 = *((_QWORD *)a2 + 2);
    ExAcquirePushLockExclusiveEx((char *)this + 7024, 0LL);
    *((_QWORD *)this + 883) -= v8;
    ExReleasePushLockExclusiveEx((char *)this + 7024, 0LL);
    *((_DWORD *)v3 + 8) &= ~2u;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v13);
}
