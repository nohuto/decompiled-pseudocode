/*
 * XREFs of NvmeControllerDeleteAsyncEventContext @ 0x1400EC958
 * Callers:
 *     NvmeControllerCreateAsyncEventContext @ 0x1400EBF04 (NvmeControllerCreateAsyncEventContext.c)
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400F51D8 (NvmeControllerStop.c)
 * Callees:
 *     NvmeControllerDeleteAERExtendedCommandPool @ 0x1400EC8D0 (NvmeControllerDeleteAERExtendedCommandPool.c)
 */

void __fastcall NvmeControllerDeleteAsyncEventContext(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1416) )
  {
    NvmeControllerDeleteAERExtendedCommandPool(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1416), 0x53416152u);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
