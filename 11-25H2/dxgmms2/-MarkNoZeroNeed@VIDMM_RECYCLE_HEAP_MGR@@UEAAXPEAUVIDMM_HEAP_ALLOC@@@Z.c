/*
 * XREFs of ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F5C30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400F5CF0 (-AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::MarkNoZeroNeed(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_HEAP_ALLOC *a2)
{
  VIDMM_RECYCLE_RANGE *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  v7 = 0;
  v6 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  v3 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  while ( 1 )
  {
    VIDMM_RECYCLE_RANGE::AccessZeroTransition(v3);
    if ( v3 == *((VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
    v4 = *((_QWORD *)v3 + 15);
    if ( v4 == *((_QWORD *)v3 + 9) + 72LL )
      v3 = 0LL;
    else
      v3 = (VIDMM_RECYCLE_RANGE *)(v4 - 120);
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v6);
}
