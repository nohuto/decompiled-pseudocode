/*
 * XREFs of ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400A4270 (-UnlockHeapAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D9770 (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100EC8 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 */

void __fastcall VidMmiUnlockAllocation(struct _MDL *P)
{
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]
  char v4; // [rsp+30h] [rbp-18h]

  v2 = -1;
  v3 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v4 = 1;
    v2 = 8001;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v4 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmUnlockPages(P);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v2);
  if ( v4 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  ExFreePoolWithTag(P, 0);
}
