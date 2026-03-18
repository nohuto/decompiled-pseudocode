/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x140037A68
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B1374 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z @ 0x1400B575C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1400F77E4 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 * Callees:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037A9C (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(VIDMM_MAPPED_VA_RANGE *P)
{
  VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
