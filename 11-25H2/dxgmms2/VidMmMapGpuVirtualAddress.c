/*
 * XREFs of VidMmMapGpuVirtualAddress @ 0x14003C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x1400EF844 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 */

__int64 __fastcall VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        bool a5,
        unsigned int a6)
{
  return VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(a1, a2, a3, a4, a5, a6);
}
