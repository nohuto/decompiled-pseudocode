/*
 * XREFs of ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400966D0
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140111178 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400AF2C0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateContextAllocation(
        ADAPTER_RENDER **this,
        D3DGPU_VIRTUAL_ADDRESS a2,
        SIZE_T a3,
        SIZE_T a4,
        UINT a5)
{
  struct VIDMM_GLOBAL_ALLOC *v9; // r8
  unsigned int v10; // ebx
  int v11; // esi
  UINT v12; // r14d
  ADAPTER_RENDER *v13; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER v14; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(&v14, 0, sizeof(v14));
  v10 = 0;
  v11 = -1071775743;
  if ( *((_DWORD *)this + 1736) )
  {
    v12 = a5;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v9, &v14);
      while ( v11 == -1071775743 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v10, 0LL, &v14);
        v13 = this[2];
        v14.Operation = DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION;
        v14.UpdateContextAllocation.ContextAllocation = a2;
        v14.Fill.FillSize = a3;
        v14.Transfer.TransferSize = a4;
        v14.Transfer.Source.SegmentId = v12;
        v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v13, &v14);
        v15 = 0LL;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v10, 0LL, &v14, v11, 0, &v15, 0LL);
      }
      ++v10;
    }
    while ( v10 < *((_DWORD *)this + 1736) );
  }
}
