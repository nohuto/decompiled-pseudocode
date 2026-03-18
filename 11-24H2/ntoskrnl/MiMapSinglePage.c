/*
 * XREFs of MiMapSinglePage @ 0x140314164
 * Callers:
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140ABBCD8 (MiInitializeForkMaps.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  char v10; // cl
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rbx
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
  result = MiReservePtes((__int64)&qword_140E37568, 1u);
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
    v9 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
    v10 = v9 | 2;
    if ( (a3 & 0x40000000) != 0 )
      v10 = v9;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, 48 * a2 - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v8, a2, ProtectionPfnCompatible | 0xA0000000);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, ValidPte, 128);
    *v8 = v13;
    return v7;
  }
  return result;
}
