/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140047D90
 * Callers:
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x14009FEF0 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400C4010 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ??1VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1400F8510 (--1VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 495;
    DxgkLogInternalTriageEvent(v2, 262146LL);
  }
  if ( *((_DWORD *)this + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 496;
    DxgkLogInternalTriageEvent(v3, 262146LL);
  }
}
