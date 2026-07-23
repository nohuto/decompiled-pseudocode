/*
 * XREFs of MiZeroWithUltraSpace @ 0x140312E40
 * Callers:
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroChainWorker @ 0x140314138 (MiZeroChainWorker.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     AccelFillMemory @ 0x140402B5C (AccelFillMemory.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroWithUltraSpace(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int PfnPageSizeIndex; // ebx
  __int64 v9; // rbp
  __int64 UltraMapping; // rsi
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rbp

  PfnPageSizeIndex = 3;
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 )
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3);
  v9 = MiPageSizes[PfnPageSizeIndex];
  UltraMapping = MiGetUltraMapping(a1 + 32LL * PfnPageSizeIndex, PfnPageSizeIndex, v9, a4);
  v11 = 4;
  if ( BYTE2(*(_DWORD *)(a3 + 32)) < 0x40u )
  {
    v11 = 12;
  }
  else if ( (HIWORD(*(_DWORD *)(a3 + 32)) & 0xC0) == 0x80 )
  {
    v11 = 28;
  }
  v12 = -1543503872;
  if ( PfnPageSizeIndex > 1 )
    v12 = -1610612736;
  MiWriteLargePte(
    UltraMapping,
    0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4),
    PfnPageSizeIndex,
    v11 | (unsigned int)v12);
  v13 = v9 << 12;
  if ( a2 )
  {
    if ( (int)AccelFillMemory(a2, UltraMapping, v13, 0, 3LL) >= 0 )
      return MiWriteLargePte(
               UltraMapping,
               0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4),
               PfnPageSizeIndex,
               0LL);
    ++dword_140EF4ECC;
  }
  KeZeroPages(UltraMapping, v13);
  return MiWriteLargePte(UltraMapping, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4), PfnPageSizeIndex, 0LL);
}
