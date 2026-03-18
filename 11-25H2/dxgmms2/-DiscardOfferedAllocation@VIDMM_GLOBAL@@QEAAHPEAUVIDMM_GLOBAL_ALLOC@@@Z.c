/*
 * XREFs of ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A9504
 * Callers:
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093C84 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A99E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F1E14 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE230 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DiscardOfferedAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v2; // ebx

  if ( (*((_DWORD *)this + 1746) & 0x10) != 0
    || _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a2 + 47) + 8LL), 3, 2) != 2 )
  {
    return 0;
  }
  else
  {
    v2 = 1;
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  return v2;
}
