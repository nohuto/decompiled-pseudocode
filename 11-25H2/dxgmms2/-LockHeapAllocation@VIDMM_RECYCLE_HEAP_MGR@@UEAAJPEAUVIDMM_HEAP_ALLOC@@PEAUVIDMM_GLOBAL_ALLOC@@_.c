/*
 * XREFs of ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB560
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140036D60 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400B4EC8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::LockHeapAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_HEAP_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        char a8)
{
  struct DXGFASTMUTEX *v8; // rdi
  int v12; // ebx
  __int64 v14; // rcx
  enum _LOCK_OPERATION v15; // [rsp+20h] [rbp-68h]
  enum _LOCK_OPERATION v16; // [rsp+20h] [rbp-68h]
  char *v17; // [rsp+50h] [rbp-38h] BYREF
  char v18; // [rsp+58h] [rbp-30h]
  _BYTE v19[16]; // [rsp+60h] [rbp-28h] BYREF

  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v18 = 0;
  v17 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    v15 = 638;
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
  v12 = VIDMM_RECYCLE_MULTIRANGE::Lock(a2, a3, a4, a5, v15, a7, a8);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v17);
  if ( v12 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v8, 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v12 = VIDMM_RECYCLE_MULTIRANGE::Lock(a2, a3, a4, a5, v16, a7, a8);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v19);
  }
  return (unsigned int)v12;
}
