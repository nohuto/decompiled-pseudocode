/*
 * XREFs of MiTryLockLeafPage @ 0x14022A6FC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 */

__int64 __fastcall MiTryLockLeafPage(unsigned __int64 *a1, char a2, __int64 *a3)
{
  char v4; // r9
  unsigned __int64 *v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx

  v4 = a2;
  v5 = a1;
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  *a3 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      v8 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_8;
      if ( (*v5 & 0xC00) != 0x800 )
        return 3221226548LL;
      if ( (unsigned int)MiInvalidPteConforms(v7) )
      {
        v8 = v7;
        if ( qword_140E2D940 )
        {
          if ( (v7 & 0x10) != 0 )
            v8 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v8 = v7 & ~qword_140E2D940;
        }
LABEL_8:
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
        if ( v9 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          break;
      }
    }
    v10 = 48 * v9 - 0x220000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      return 3221225557LL;
    if ( *v5 == v7 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  }
  if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
  {
LABEL_13:
    *a3 = v10;
    return 0LL;
  }
  if ( (v4 & 2) != 0 )
  {
    MiLockSpecialPurposeMemoryCachedPage(v10, v4 & 1 | 2u);
    goto LABEL_13;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v6);
  return 3221225557LL;
}
