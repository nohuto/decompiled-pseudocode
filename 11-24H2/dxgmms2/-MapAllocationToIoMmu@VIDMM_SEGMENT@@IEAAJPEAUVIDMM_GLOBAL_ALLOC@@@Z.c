/*
 * XREFs of ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010D3AC
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0B80 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C2790 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14010D1E4 (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

int __fastcall VIDMM_SEGMENT::MapAllocationToIoMmu(VIDMM_PHYSICAL_ADAPTER **this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  int result; // eax
  struct _MDL *FullMDL; // rbp
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( (*((_DWORD *)a2 + 7) & 0x800) != 0 )
    return 0;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  if ( FullMDL )
  {
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline() )
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(this[4], *(struct VIDMM_PHYSICAL_ALLOC **)a2);
    v6 = **((_DWORD **)a2 + 49);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 46), 0LL);
    return SysMmMapIommuRange(
             *(struct SYSMM_ADAPTER **)(*((_QWORD *)this[3] + 3) + 224LL),
             LogicalAddress,
             FullMDL,
             (v6 & 0x10) != 0);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = -1073741801;
    WdLogGlobalForLineNumber = 7037;
  }
  return result;
}
