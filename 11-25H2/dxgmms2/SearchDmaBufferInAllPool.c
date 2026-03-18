/*
 * XREFs of SearchDmaBufferInAllPool @ 0x1400973F4
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x1401120F8 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SearchDmaBufferInAllPool(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v4; // r9
  _QWORD **v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v2 = (__int64 *)qword_1400818B0;
  while ( v2 != &qword_1400818B0 )
  {
    v4 = v2 - 12;
    v2 = (__int64 *)*v2;
    if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(*v4 + 24) )
    {
      v5 = (_QWORD **)(v4 + 10);
      v6 = *v5;
      while ( v6 != v5 )
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
        if ( v7[19] == a2 )
          return v7;
      }
    }
  }
  return 0LL;
}
