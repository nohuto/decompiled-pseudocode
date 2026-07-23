/*
 * XREFs of MiAbortCombineScan @ 0x1403A9DB0
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx

  if ( dword_140E2FF44 )
  {
    v2 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FF40);
    v3 = (_QWORD *)(v2 + 16992);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = (_QWORD *)i[7];
        if ( (*v5 & 1) != 0 )
        {
          *v5 = CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry((__int64)((_QWORD)v5 << 25) >> 16, 1, 1);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FF40);
  }
}
