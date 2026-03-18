/*
 * XREFs of MiWsSwapPageFileNumber @ 0x1403D8A28
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1403D896C (MiFindBestOutswapPagefile.c)
 *     MiContractWsSwapPageFileWorker @ 0x140679750 (MiContractWsSwapPageFileWorker.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWsSwapPageFileNumber(__int64 a1)
{
  __int64 i; // r8

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 18520); i = (unsigned int)(i + 1) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8 * i + 18528) + 172LL) & 0x10) != 0 )
      return (unsigned int)i;
  }
  return 16LL;
}
