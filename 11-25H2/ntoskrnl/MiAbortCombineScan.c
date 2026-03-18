/*
 * XREFs of MiAbortCombineScan @ 0x1403B7B64
 * Callers:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiInitializeMdlPfn @ 0x140416AE0 (MiInitializeMdlPfn.c)
 *     MiInitializeDynamicPfns @ 0x140661D7C (MiInitializeDynamicPfns.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx

  if ( dword_140E2FBC4 )
  {
    v2 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FBC0);
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FBC0);
  }
}
