/*
 * XREFs of MiMapSinglePage @ 0x1403F14B0
 * Callers:
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140AB6CF8 (MiInitializeForkMaps.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5641C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v12; // rbx
  __int64 result; // rax

  v7 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( *v8 )
    {
      *v8 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(a1, 2, 1);
    }
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&qword_140E376A8, 1u);
  v8 = (_QWORD *)result;
  if ( result )
  {
    v7 = result << 25 >> 16;
    if ( (a4 & 2) != 0 )
    {
      *(_QWORD *)result = CLFS_LSN_NULL_EXT;
      return v7;
    }
LABEL_4:
    v9 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
    if ( (a3 & 0x40000000) != 0 )
      v9 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, 48 * a2 - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v8, a2, ProtectionPfnCompatible | 0xA0000000);
    v12 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, ValidPte, 128LL);
    *v8 = v12;
    return v7;
  }
  return result;
}
