/*
 * XREFs of ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097798
 * Callers:
 *     VidMmTrimDmaPoolToMinimum @ 0x140097DF0 (VidMmTrimDmaPoolToMinimum.c)
 *     VidMmGetNextBuffersContractedSize @ 0x140101E50 (VidMmGetNextBuffersContractedSize.c)
 * Callees:
 *     WaitDmaBufferNotBusy @ 0x1400B7760 (WaitDmaBufferNotBusy.c)
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 *     NeedToBeTrimmed @ 0x140101EC8 (NeedToBeTrimmed.c)
 */

void __fastcall VidMmTrimDmaPool(struct VIDMM_DMA_POOL *a1, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r8
  struct VIDMM_DMA_POOL *v6; // rsi
  struct VIDMM_DMA_POOL *v7; // rbx
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  WdLogSingleEntry1(4LL, *((_QWORD *)a1 + 1));
  WdLogGlobalForLineNumber = 2815;
  v6 = (struct VIDMM_DMA_POOL *)*((_QWORD *)a1 + 10);
  while ( (a2 || (unsigned __int8)NeedToBeTrimmed(a1)) && v6 != (struct VIDMM_DMA_POOL *)((char *)a1 + 80) )
  {
    v7 = v6;
    v6 = *(struct VIDMM_DMA_POOL **)v6;
    if ( v4 >= 2 || *((_BYTE *)v7 + 25) )
    {
      v8 = 0;
      LOBYTE(v5) = 1;
      WaitDmaBufferNotBusy(a1, v7, v5, &v8);
      if ( v8 )
      {
        WdLogSingleEntry2(4LL, v7, a1);
        WdLogGlobalForLineNumber = 2853;
        return;
      }
      RemoveDmaBufferFromPool(a1, v7);
    }
    else
    {
      ++v4;
    }
  }
}
