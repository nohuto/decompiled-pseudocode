/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400B07E8
 * Callers:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1401157F0 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x140036BD8 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140092BE8 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140093488 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400AF2C0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400AF840 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400B0394 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  bool v8; // zf
  char v13; // r12
  struct VIDMM_GLOBAL_ALLOC *v14; // r8
  union _LARGE_INTEGER v15; // rbx
  SIZE_T v16; // rax
  int v17; // eax
  int v18; // edi
  struct _LIST_ENTRY v19; // [rsp+48h] [rbp-C0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v20; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v21; // [rsp+1C8h] [rbp+C0h] BYREF

  v8 = (*((_BYTE *)this + 40937) & 4) == 0;
  v19 = 0LL;
  if ( !v8 )
  {
    v19.Blink = &v19;
    v19.Flink = &v19;
    VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(this, &v19);
  }
  v13 = 0;
  memset(&v20, 0, sizeof(v20));
  VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, v14, &v20);
  v15 = a7;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, a2, a3, &v20);
    v20.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
      v16 = *(_QWORD *)(*((_QWORD *)a3 + 49) + 48LL);
    else
      v16 = 0LL;
    v20.UpdateContextAllocation.ContextAllocation = 0LL;
    v20.Fill.FillSize = v16;
    v20.MapApertureSegment.OffsetInPages = a6;
    v20.Transfer.Source.SegmentAddress.QuadPart = a5;
    v20.Fill.FillPattern = a4;
    v20.UnmapApertureSegment.DummyPage = v15;
    if ( a3 && *((_QWORD *)a3 + 6) && (**((_DWORD **)a3 + 49) & 0x10000000) == 0 && (*((_DWORD *)a3 + 8) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
      v20.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 32LL)
                                                                                        - 32LL)
                                                                            + 24LL)
                                                                + 616LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
    }
    v17 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v20);
    v21 = 0LL;
    v18 = v17;
    v13 |= VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, a2, a3, &v20, v17, a8, &v21, 0LL);
  }
  while ( v18 == -1071775743 );
  if ( v13 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
  if ( (*((_BYTE *)this + 40937) & 4) != 0 )
    VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(this, &v19);
}
