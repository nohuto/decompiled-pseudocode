/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8
 * Callers:
 *     ?LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400A3430 (-LockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C0A1C (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2CB4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C3D24 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1401102AC (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1400C43B0 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAA_NPEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C5000 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAA_NPEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

struct _MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_LOCAL_ALLOC *v8; // rsi
  char v9; // r15
  char v10; // r14
  struct _MDL *Mdl; // rdi
  void *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v15; // rcx
  int v16; // eax
  void *v17[3]; // [rsp+58h] [rbp-50h] BYREF
  int v18; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp-30h]
  char v20; // [rsp+80h] [rbp-28h]

  v8 = a6;
  if ( !a6 )
    v8 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 6);
  v17[1] = v8;
  v9 = 0;
  v10 = 0;
  v17[0] = 0LL;
  Mdl = 0LL;
  v12 = VidMmMapViewOfAllocation(v8, a2, a3, v17, 0);
  if ( !v12 )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry0(6LL);
    v16 = 1233;
    goto LABEL_19;
  }
  v9 = 1;
  Mdl = VidMmiAllocateMdl(v12, a3);
  v17[2] = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry0(6LL);
    v16 = 1246;
LABEL_19:
    WdLogGlobalForLineNumber = v16;
    DxgkLogInternalTriageEvent(v15, 262145LL);
    goto LABEL_20;
  }
  v18 = -1;
  v19 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v20 = 1;
    v18 = 8000;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmProbeAndLockPages(Mdl, 0, a4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  v10 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, Mdl, v13, a1) )
  {
    VidMmUnmapViewOfAllocation(v8, v17[0]);
    return Mdl;
  }
LABEL_20:
  if ( v10 )
    MmUnlockPages(Mdl);
  if ( Mdl )
    ExFreePoolWithTag(Mdl, 0);
  if ( v9 )
    VidMmUnmapViewOfAllocation(v8, v17[0]);
  return 0LL;
}
