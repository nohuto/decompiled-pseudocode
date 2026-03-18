/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E2280
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009DBE4 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1400E2184 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140038280 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038E04 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1400417A8 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1400BBF84 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BC060 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(
        ADAPTER_RENDER **this,
        struct VIDMM_GLOBAL_ALLOC ***a2,
        char a3)
{
  struct VIDMM_GLOBAL_ALLOC *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rsi
  struct VIDMM_GLOBAL_ALLOC *v9; // r8
  __int64 AllocGpuVirtualAddress; // rax
  ADAPTER_RENDER *v11; // rcx
  int v12; // r12d
  ADAPTER_RENDER *v13; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+40h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+50h] [rbp-B0h] BYREF
  VIDMM_SEGMENT *v20; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v21; // [rsp+1D8h] [rbp+D8h] BYREF

  v6 = **a2;
  v7 = *(_QWORD *)v6;
  v8 = *((_DWORD *)v6 + 6) & 0x3F;
  memset(&v19, 0, sizeof(v19));
  if ( a3 )
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, v9, &v19);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, v6, &v19);
    v19.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*((_QWORD *)v6 + 47) + 48LL);
    if ( (*(_DWORD *)(v7 + 52) & 2) != 0 )
    {
      v20 = *(VIDMM_SEGMENT **)(v7 + 64);
      if ( v20 )
      {
        v19.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(v20);
        v19.Transfer.TransferSize = *(_QWORD *)(v7 + 72) + *((_QWORD *)v20 + 6);
      }
      else
      {
        v19.Transfer.TransferOffset = 0;
        v19.Transfer.TransferSize = 0LL;
      }
    }
    if ( (*((_DWORD *)v6 + 7) & 0x80u) != 0 )
    {
      if ( (**((_DWORD **)v6 + 47) & 8) != 0 )
        v19.MapApertureSegment.OffsetInPages = *((_QWORD *)v6 + 27);
      else
        v19.MapApertureSegment.OffsetInPages = *(_QWORD *)(*((_QWORD *)v6 + 6) + 16LL);
    }
    AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress((const struct VIDMM_ALLOC *)a2, v8);
    v11 = this[2];
    v19.Transfer.Source.SegmentAddress.QuadPart = AllocGpuVirtualAddress;
    v12 = ADAPTER_RENDER::DdiBuildPagingBuffer(v11, &v19);
    if ( (byte_140081241 & 0x10) != 0 )
    {
      v13 = this[v8 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      LODWORD(v18) = 8;
      McTemplateK0pppxxq_EtwWriteTransfer(v16, v15, v17, CurrentProcessId, v6, v13, 0LL, 0LL, v18);
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 889), 0LL, 8);
    v21 = 0LL;
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v8, v6, &v19, v12, 0, &v21, 0LL);
  }
  while ( v12 < 0 );
}
