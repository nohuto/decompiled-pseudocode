/*
 * XREFs of MiZeroWithUltraSpace @ 0x140224410
 * Callers:
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroChainWorker @ 0x1402242C4 (MiZeroChainWorker.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     AccelFillMemory @ 0x140406838 (AccelFillMemory.c)
 *     KeZeroPages @ 0x1406A80C0 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroWithUltraSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int PfnPageSizeIndex; // ebx
  __int64 v9; // rbp
  __int64 UltraMapping; // rdi
  int ProtectionPfnCompatible; // eax
  int v12; // r9d
  __int64 v13; // rbp

  PfnPageSizeIndex = 3;
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 )
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3);
  v9 = MiPageSizes[PfnPageSizeIndex];
  UltraMapping = MiGetUltraMapping(a1 + 32LL * PfnPageSizeIndex, PfnPageSizeIndex, v9, a4);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a3);
  v12 = -1543503872;
  if ( PfnPageSizeIndex > 1 )
    v12 = -1610612736;
  MiWriteLargePte(
    UltraMapping,
    0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4),
    PfnPageSizeIndex,
    ProtectionPfnCompatible | (unsigned int)v12);
  v13 = v9 << 12;
  if ( a2 )
  {
    if ( (int)AccelFillMemory(a2, UltraMapping, v13, 0, 3LL) >= 0 )
      return MiWriteLargePte(
               UltraMapping,
               0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4),
               PfnPageSizeIndex,
               0LL);
    ++dword_140EF49CC;
  }
  KeZeroPages(UltraMapping, v13);
  return MiWriteLargePte(UltraMapping, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4), PfnPageSizeIndex, 0LL);
}
