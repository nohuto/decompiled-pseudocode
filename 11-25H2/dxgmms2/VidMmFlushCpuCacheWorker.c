/*
 * XREFs of VidMmFlushCpuCacheWorker @ 0x14009690C
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140093AEC (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x1400955CC (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_M.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(char *BaseAddress, unsigned __int64 Length)
{
  __int64 v4; // rcx
  ULONG v6; // ebx
  int v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-40h]
  char v9; // [rsp+60h] [rbp-38h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 8008;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  if ( BaseAddress )
  {
    if ( Length < 0x80000000 )
    {
      while ( Length )
      {
        v6 = -1;
        if ( Length < 0xFFFFFFFF )
          v6 = Length;
        KeInvalidateRangeAllCaches(BaseAddress, v6);
        Length -= v6;
        BaseAddress += v6;
      }
    }
    else
    {
      KeInvalidateAllCaches();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 && (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 17473;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
    if ( v9 )
    {
      if ( (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
    }
    return 3221225485LL;
  }
}
