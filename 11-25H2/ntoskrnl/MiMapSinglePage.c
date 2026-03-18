/*
 * XREFs of MiMapSinglePage @ 0x140225164
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140AB7B44 (MiInitializeForkMaps.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140C43014 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
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
  result = MiReservePtes(&qword_140E37328, 1LL);
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
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, ValidPte);
    *v8 = v13;
    return v7;
  }
  return result;
}
