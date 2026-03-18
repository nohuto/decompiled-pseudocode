/*
 * XREFs of ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x140036AF4
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     ?VidMmQueryHistoryBufferData@@YAXPEBUVIDMM_MULTI_ALLOC@@GPEAPEAXPEAI@Z @ 0x14009F94C (-VidMmQueryHistoryBufferData@@YAXPEBUVIDMM_MULTI_ALLOC@@GPEAPEAXPEAI@Z.c)
 */

void __fastcall _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 i; // rbx
  const struct VIDMM_MULTI_ALLOC *v3; // rcx
  __int64 v4; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 276); i = (unsigned int)(i + 1) )
  {
    v3 = *(const struct VIDMM_MULTI_ALLOC **)(*((_QWORD *)this + 137) + 8 * i);
    if ( v3 )
    {
      v4 = 16LL * (unsigned int)i + *((_QWORD *)this + 36);
      VidMmQueryHistoryBufferData(
        v3,
        *(_WORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 6LL),
        (void **)v4,
        (unsigned int *)(v4 + 8));
    }
  }
}
