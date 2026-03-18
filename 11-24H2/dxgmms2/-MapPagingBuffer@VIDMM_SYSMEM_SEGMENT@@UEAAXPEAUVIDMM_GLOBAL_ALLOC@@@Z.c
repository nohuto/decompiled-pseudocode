/*
 * XREFs of ?MapPagingBuffer@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140103C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::MapPagingBuffer(VIDMM_SYSMEM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  *((_DWORD *)a2 + 6) &= ~0x800000u;
}
