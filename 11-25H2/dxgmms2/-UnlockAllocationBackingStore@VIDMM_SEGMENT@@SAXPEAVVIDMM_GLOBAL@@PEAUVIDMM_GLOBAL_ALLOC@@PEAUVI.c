/*
 * XREFs of ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714
 * Callers:
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A95B8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A99E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0220 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C1E30 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE230 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140040FC0 (McTemplateK0x_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14004DF68 (Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E568C (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FCD88 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( (unsigned int)Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline()
    || ((*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0 || (**((_DWORD **)a2 + 47) & 0x4000) != 0)
    && (*((_DWORD *)a2 + 7) & 0x4800) == 0 )
  {
    if ( *((_QWORD *)a2 + 7) )
      VidMmiReleaseSystemCommitMdl(a2);
    if ( !(unsigned int)Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledDeviceUsageNoInline()
      || ((*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0 || (**((_DWORD **)a2 + 47) & 0x4000) != 0)
      && (*((_DWORD *)a2 + 7) & 0x4800) == 0 )
    {
      VidMmiRemoveProbeAndLockReference(a2);
      if ( !*((_DWORD *)a2 + 47) )
      {
        if ( !a3 )
          a3 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *(_QWORD *)(*(_QWORD *)a2 + 16LL), 0, 1);
        if ( (byte_140081241 & 0x20) != 0 )
          McTemplateK0x_EtwWriteTransfer(v7, v6, v8, a2);
      }
    }
  }
}
