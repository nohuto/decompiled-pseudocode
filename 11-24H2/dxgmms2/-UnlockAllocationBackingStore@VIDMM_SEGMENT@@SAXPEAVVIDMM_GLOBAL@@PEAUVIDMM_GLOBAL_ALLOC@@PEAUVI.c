/*
 * XREFs of ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1DE0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0B80 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C2790 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F5630 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE1B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x14003F578 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D9770 (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FCAC8 (-VidMmiRemoveProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( *((_QWORD *)a2 + 7) )
    VidMmiReleaseSystemCommitMdl(a2);
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0 || (**((_DWORD **)a2 + 49) & 0x4000) != 0 )
  {
    v6 = *((_DWORD *)a2 + 7);
    if ( (v6 & 0x800) == 0 && (v6 & 0x4000) == 0 )
    {
      VidMmiRemoveProbeAndLockReference(a2);
      if ( !*((_DWORD *)a2 + 47) )
      {
        if ( !a3 )
          a3 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *(_QWORD *)(*(_QWORD *)a2 + 16LL), 0, 1);
        if ( (byte_140081241 & 0x20) != 0 )
          McTemplateK0x_EtwWriteTransfer(v8, v7, v9, a2);
      }
    }
  }
}
