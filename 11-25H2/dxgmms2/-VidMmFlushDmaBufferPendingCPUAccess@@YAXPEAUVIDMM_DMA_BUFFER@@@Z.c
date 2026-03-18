/*
 * XREFs of ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x1400FC3D4
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1400AEEB8 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmFlushDmaBufferPendingCPUAccess(struct VIDMM_DMA_BUFFER *a1)
{
  __int64 v1; // rcx

  if ( *(_DWORD *)(*((_QWORD *)a1 + 16) + 32LL) )
  {
    v1 = *(_QWORD *)(**((_QWORD **)a1 + 6) + 64LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  }
}
