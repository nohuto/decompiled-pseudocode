/*
 * XREFs of MiUpdateImagePfnImportRelocations @ 0x1403FF808
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiDoesPageRequireImportLinkingFixups @ 0x1403FFA08 (MiDoesPageRequireImportLinkingFixups.c)
 *     MiUpdateRetpolineImportFixups @ 0x1403FFA54 (MiUpdateRetpolineImportFixups.c)
 *     MI_UNLOCK_RELOCATIONS_SHARED @ 0x1403FFB50 (MI_UNLOCK_RELOCATIONS_SHARED.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x1403FFBAC (MI_LOCK_RELOCATIONS_SHARED.c)
 */

__int64 __fastcall MiUpdateImagePfnImportRelocations(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx

  v5 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v8 = *(_QWORD *)(v5 + 32);
  if ( !(unsigned int)MiDoesPageRequireImportLinkingFixups(v5, a3) )
    return 1LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v10 = 0LL;
    v9 = 0LL;
  }
  else
  {
    v9 = a2;
    v10 = MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( !v10 )
    {
      if ( !a2 )
        return 3221225626LL;
      v10 = a2;
    }
    a2 = (__int64)(v10 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x220000000000LL);
    ValidPte = MiMakeValidPte(v10, a4, ProtectionPfnCompatible | 0xA0000000);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v10 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v10, ValidPte, 128);
    *(_QWORD *)v10 = v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
    CurrentThread = 0LL;
  else
    MI_LOCK_RELOCATIONS_SHARED(CurrentThread, v8);
  MiUpdateRetpolineImportFixups(a2, *(_QWORD *)(v8 + 88), a3);
  if ( CurrentThread )
    MI_UNLOCK_RELOCATIONS_SHARED(CurrentThread, v8);
  if ( v10 )
  {
    if ( v10 == v9 )
    {
      *(_QWORD *)v10 = CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(a2, 2, 1);
    }
    else
    {
      MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v10, 1u);
    }
  }
  return 0LL;
}
