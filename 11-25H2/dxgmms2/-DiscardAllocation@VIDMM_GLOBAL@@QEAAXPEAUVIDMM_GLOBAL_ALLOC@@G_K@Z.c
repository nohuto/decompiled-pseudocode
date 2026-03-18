/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400BBD68
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1400366A0 (VidSchIsMonitoredFenceSignaled.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400417A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400BBF84 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEF80 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(
        ADAPTER_RENDER **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int16 a3,
        SIZE_T a4)
{
  UINT v4; // ebx
  __int64 v8; // rcx
  struct VIDMM_GLOBAL_ALLOC *v9; // r8
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  BOOL v16; // ecx
  UINT v17; // eax
  ADAPTER_RENDER *v18; // rcx
  int v19; // r15d
  ADAPTER_RENDER *v20; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ADAPTER_RENDER *v25; // rcx
  __int64 v26; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v28; // [rsp+68h] [rbp-A0h] BYREF
  UINT v29; // [rsp+1E0h] [rbp+D8h]

  v4 = a3;
  memset(&v28, 0, sizeof(v28));
  v10 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = a2;
    WdLogGlobalForLineNumber = 14891;
  }
  v11 = *((_DWORD *)a2 + 6) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 6) & 0x3F, v9, &v28);
  v28.Transfer.TransferOffset = 0;
  v29 = v4;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v11, a2, &v28);
    v12 = *((_QWORD *)a2 + 47);
    v13 = *((_QWORD *)a2 + 11);
    v28.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    v28.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v12 + 48);
    v14 = *((_DWORD *)a2 + 6) & 0x3F;
    v28.DiscardContent.SegmentId = v4;
    v28.Transfer.TransferSize = a4;
    v15 = (unsigned __int64)this[v14 + 676];
    v16 = v15 > v13 && v15 - v13 >= 0x7FFFFFFF || VidSchIsMonitoredFenceSignaled((__int64)this[v14 + 740], v13);
    v17 = v16 | v28.Transfer.TransferOffset & 0xFFFFFFFE;
    v18 = this[2];
    v28.Transfer.TransferOffset = v17;
    v19 = ADAPTER_RENDER::DdiBuildPagingBuffer(v18, &v28);
    if ( v19 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v25 = this[2];
      v28.Transfer.TransferOffset |= 1u;
      v19 = ADAPTER_RENDER::DdiBuildPagingBuffer(v25, &v28);
    }
    if ( (byte_140081241 & 0x10) != 0 )
    {
      v20 = this[v11 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v26) = 5;
      McTemplateK0pppxxq_EtwWriteTransfer(v23, v22, v24, CurrentProcessId, a2, v20, 0LL, 0LL, v26);
      v4 = v29;
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 889), *(_QWORD *)(v10 + 16), 5u);
    v27 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v11, a2, &v28, v19, 0, &v27, 0LL);
  }
  while ( v19 < 0 );
}
