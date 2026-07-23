/*
 * XREFs of MiScrubPage @ 0x1403EBDB0
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiScrubNode @ 0x140A2DE94 (MiScrubNode.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     RtlScrubMemory @ 0x1403EBF40 (RtlScrubMemory.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // edi
  unsigned __int64 UltraMapping; // r14
  ULONG_PTR *v10; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v12; // rdx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // r12d

  v4 = -1;
  if ( a3 )
  {
    UltraMapping = a3;
    v10 = 0LL;
  }
  else
  {
    UltraMapping = MiGetUltraMapping(a1 + 144, 3uLL, 1LL, 2 * (a4 & 2u));
    v10 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a2);
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)v10,
                 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4),
                 ProtectionPfnCompatible | 0xA0000000);
    v14 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, ValidPte, 128LL);
    *v10 = v14;
    if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x40 )
      v4 = 1;
  }
  if ( (a4 & 1) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 176);
    KeCopyPage(v15, UltraMapping, v4);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v15 )
    KeCopyPage(UltraMapping, v15, v4);
  if ( !a3 )
    *v10 = CLFS_LSN_NULL_EXT;
  ++*(_QWORD *)(a1 + 184);
  return v16;
}
