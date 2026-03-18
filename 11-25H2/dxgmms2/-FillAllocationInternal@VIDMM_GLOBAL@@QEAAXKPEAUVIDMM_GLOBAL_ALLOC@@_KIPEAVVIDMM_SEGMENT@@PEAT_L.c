/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD1DC
 * Callers:
 *     ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD198 (-FillAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400417A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400BBF84 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1400BD424 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct VIDMM_GLOBAL_ALLOC *v13; // r8
  union _LARGE_INTEGER *v14; // r12
  struct VIDMM_SEGMENT *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  D3DGPU_VIRTUAL_ADDRESS v20; // rax
  UINT v21; // ecx
  LARGE_INTEGER v22; // rax
  ADAPTER_RENDER *v23; // rcx
  ADAPTER_RENDER *v24; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+1D0h] [rbp+D0h] BYREF
  int v33; // [rsp+1D8h] [rbp+D8h]

  v8 = a2;
  v11 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)this[5029] + a2) + 476LL) & 0x20) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, v29, a6, a7);
  }
  else
  {
    memset(&v31, 0, sizeof(v31));
    v14 = a7;
    v15 = a6;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = a3;
      WdLogGlobalForLineNumber = 14674;
      v17 = WdLogNewEntry5_WdTrace(v16);
      *(_QWORD *)(v17 + 32) = 0LL;
      *(_QWORD *)(v17 + 24) = a4;
      WdLogGlobalForLineNumber = 14676;
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v18);
      v19[3] = v15;
      v19[4] = v14->HighPart;
      v19[5] = v14->LowPart;
      WdLogGlobalForLineNumber = 14678;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v13, &v31);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v31);
      v31.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
        v20 = *(_QWORD *)(*((_QWORD *)a3 + 47) + 48LL);
      else
        v20 = 0LL;
      v31.Fill.FillPattern = 0;
      v31.UpdateContextAllocation.ContextAllocation = v20;
      v31.Fill.FillSize = a4;
      v21 = VIDMM_SEGMENT::DriverId(v15);
      v22.QuadPart = v14->QuadPart + *((_QWORD *)v15 + 6);
      v31.Transfer.Source.SegmentId = v21;
      v23 = this[2];
      v31.Transfer.Source.SegmentAddress = v22;
      v33 = ADAPTER_RENDER::DdiBuildPagingBuffer(v23, &v31);
      if ( (byte_140081241 & 0x10) != 0 )
      {
        v24 = this[v11 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        LODWORD(v30) = 0;
        McTemplateK0pppxxq_EtwWriteTransfer(v27, v26, v28, CurrentProcessId, a3, v24, 0LL, a4, v30);
        v11 = v8;
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 889), a4, 0);
      v32 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, a3, &v31, v33, 0, &v32, 0LL);
    }
    while ( v33 < 0 );
  }
}
