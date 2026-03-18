/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1400C5218
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB6A8 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1400C4570 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C666C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7214 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        const struct VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // r8
  int v8; // ecx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  enum _LOCK_OPERATION v11; // r8d
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  char v14; // [rsp+40h] [rbp-10h]

  v4 = *((int *)this + 16);
  v8 = *((_DWORD *)this + 16) - 1;
  if ( v8 )
  {
    v9 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( !(_DWORD)v9 )
    {
      ++*((_DWORD *)this + 23);
      return 0LL;
    }
    if ( (_DWORD)v9 == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v9, this);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
      return 0LL;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 2LL, v4, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_18;
  }
  v12 = -1;
  v13 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 8000;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  LODWORD(a4) = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
                  (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
                  a2,
                  v11,
                  a4,
                  *((_BYTE **)this + 4),
                  *((_BYTE **)this + 5));
  if ( (int)a4 < 0 )
  {
LABEL_18:
    WdLogSingleEntry3(3LL, this, a2, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
    WdLogGlobalForLineNumber = 1406;
    goto LABEL_12;
  }
  ++*((_DWORD *)this + 23);
  VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  return (unsigned int)a4;
}
