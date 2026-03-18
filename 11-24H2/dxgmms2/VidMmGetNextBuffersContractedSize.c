/*
 * XREFs of VidMmGetNextBuffersContractedSize @ 0x140101E50
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097798 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     NeedToBeTrimmed @ 0x140101EC8 (NeedToBeTrimmed.c)
 */

__int64 __fastcall VidMmGetNextBuffersContractedSize(struct VIDMM_DMA_POOL *a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 28) & 1) == 0 && (unsigned __int8)NeedToBeTrimmed(a1) )
    VidMmTrimDmaPool(a1, 0);
  v8 = *((unsigned int *)a1 + 9);
  *((_DWORD *)a1 + 14) = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 17) = *((_DWORD *)a1 + 15);
  *((_DWORD *)a1 + 11) = v8;
  *a2 = v8;
  *a3 = *((_DWORD *)a1 + 12);
  result = *((unsigned int *)a1 + 15);
  *a4 = result;
  return result;
}
