/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x140101800
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1400E50D4 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetMDLForRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rcx
  struct _MDL *MDLForRange; // rbx
  char *v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v11 = 0;
  v10 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  MDLForRange = VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(a2, a3, a4);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v10);
  return MDLForRange;
}
