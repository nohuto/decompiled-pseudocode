/*
 * XREFs of CheckIfDmaInformationPresent @ 0x14009745C
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140110E70 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CheckIfDmaInformationPresent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int i; // r10d

  for ( i = *(_DWORD *)(a1 + 1436); i; --i )
  {
    if ( a4 == *(_QWORD *)(a2 + 8)
      && a5 == *(_DWORD *)(a2 + 48)
      && a6 == *(_DWORD *)(a2 + 52)
      && a7 == *(_DWORD *)(a2 + 56)
      && a8 == *(_DWORD *)(a2 + 60)
      && a9 == *(_DWORD *)(a2 + 64)
      && a10 == *(_DWORD *)(a2 + 68)
      && a11 == *(_DWORD *)(a2 + 44) )
    {
      return 1;
    }
    a2 += *(unsigned int *)(a2 + 52)
        + 24 * (*(unsigned int *)(a2 + 60) + 3LL + *(unsigned int *)(a2 + 68))
        + *(unsigned int *)(a2 + 44);
  }
  return 0;
}
