/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400BEF44
 * Callers:
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A4958 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0220 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14010E7A0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400BF0D8 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        unsigned __int16 a4,
        SIZE_T a5)
{
  UINT v6; // r13d
  __int64 v8; // r15
  __int64 v9; // rcx
  struct VIDMM_GLOBAL_ALLOC *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r14d
  SIZE_T v13; // r12
  __int64 v14; // rax
  int v15; // ebx
  VIDMM_GLOBAL *v16; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+1B0h] [rbp+B0h] BYREF

  v6 = a4;
  v8 = a3;
  if ( !*((_BYTE *)this + 40940) && (**((_DWORD **)a2 + 47) & 0x8000) != 0 )
  {
    memset(&v17, 0, sizeof(v17));
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = WdLogNewEntry5_WdTrace(v9);
      *(_QWORD *)(v11 + 24) = a2;
      *(_QWORD *)(v11 + 32) = v8;
      WdLogGlobalForLineNumber = 14774;
    }
    v12 = *((_DWORD *)a2 + 6) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v12, v10, &v17);
    v13 = a5;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v12, a2, &v17);
      v14 = *((_QWORD *)a2 + 47);
      v17.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      v17.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(v14 + 48);
      if ( (_BYTE)v8 )
      {
        v17.Transfer.Source.SegmentId |= 1u;
        v17.Transfer.TransferOffset = v6;
        v17.Transfer.TransferSize = v13;
      }
      else
      {
        v17.Transfer.Source.SegmentId &= ~1u;
        v17.Transfer.TransferOffset = 0;
        v17.Transfer.TransferSize = 0LL;
      }
      v15 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v17);
      v18 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v12, a2, &v17, v15, 0, &v18, 0LL);
    }
    while ( v15 < 0 );
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled((VIDMM_GLOBAL *)this) )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency(v16, &v17, a2);
  }
}
