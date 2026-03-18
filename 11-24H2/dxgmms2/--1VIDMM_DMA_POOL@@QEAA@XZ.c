/*
 * XREFs of ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1400B86C8
 * Callers:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x14001C0B0 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 *     UpdateFairResourceUsage @ 0x14010CB0C (UpdateFairResourceUsage.c)
 */

void __fastcall VIDMM_DMA_POOL::~VIDMM_DMA_POOL(VIDMM_DMA_POOL *this)
{
  VIDMM_DMA_POOL *v2; // rdi
  unsigned int *v3; // rdx
  VIDMM_DMA_POOL **v4; // rdx
  VIDMM_DMA_POOL **v5; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1933;
  }
  if ( (*((_DWORD *)this + 7) & 2) != 0 )
  {
    ExAcquireResourceExclusiveLite(Resource, 1u);
    v4 = (VIDMM_DMA_POOL **)*((_QWORD *)this + 12);
    if ( v4[1] != (VIDMM_DMA_POOL *)((char *)this + 96)
      || (v5 = (VIDMM_DMA_POOL **)*((_QWORD *)this + 13), *v5 != (VIDMM_DMA_POOL *)((char *)this + 96)) )
    {
      __fastfail(3u);
    }
    *v5 = (VIDMM_DMA_POOL *)v4;
    v4[1] = (VIDMM_DMA_POOL *)v5;
    _InterlockedDecrement(&dword_140081A08);
    UpdateFairResourceUsage();
    ExReleaseResourceLite(Resource);
  }
  v2 = (VIDMM_DMA_POOL *)*((_QWORD *)this + 10);
  while ( v2 != (VIDMM_DMA_POOL *)((char *)this + 80) )
  {
    v3 = (unsigned int *)v2;
    v2 = *(VIDMM_DMA_POOL **)v2;
    RemoveDmaBufferFromPool(this, v3);
  }
}
