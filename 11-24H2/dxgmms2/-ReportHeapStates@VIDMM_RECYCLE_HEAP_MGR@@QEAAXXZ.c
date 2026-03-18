/*
 * XREFs of ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400BF630
 * Callers:
 *     ?ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ @ 0x1400BF5D4 (-ReportHeapManagerStates@VIDMM_RECYCLE_HEAP_MGR@@SAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1400FD358 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rcx
  char *v3; // [rsp+50h] [rbp-18h] BYREF
  char v4; // [rsp+58h] [rbp-10h]

  v4 = 0;
  v3 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v3);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v3);
}
