/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K@Z @ 0x140105380
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?MapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K@Z @ 0x1401038EC (-MapExternal@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  char *v8; // [rsp+50h] [rbp-18h] BYREF
  char v9; // [rsp+58h] [rbp-10h]

  v9 = 0;
  v8 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  v6 = VIDMM_RECYCLE_MULTIRANGE::MapExternal(a2, a3);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v8);
  return v6;
}
