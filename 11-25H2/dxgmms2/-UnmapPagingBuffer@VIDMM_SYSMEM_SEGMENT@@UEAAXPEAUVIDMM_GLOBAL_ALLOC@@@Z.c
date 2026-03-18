/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140106030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnmapPagingBuffer(VIDMM_SYSMEM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  *((_DWORD *)a2 + 6) |= 0x800000u;
}
