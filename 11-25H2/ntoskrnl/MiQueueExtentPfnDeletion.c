/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1404F35A4
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 *     MiClearFileOnlyPfn @ 0x14066EDA0 (MiClearFileOnlyPfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiWakeFileOnlyReaper @ 0x1404DAD18 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  KIRQL v2; // bl

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A560);
    *a1 = qword_140E2D368;
    qword_140E2D368 = (__int64)a1;
    if ( !qword_140E2D370 )
      qword_140E2D370 = (__int64)a1;
    ++qword_140E2D378;
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A560);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(dword_140E3A560);
    MiWakeFileOnlyReaper();
    MiReleaseSpinLockExclusive(dword_140E3A560, v2);
  }
}
