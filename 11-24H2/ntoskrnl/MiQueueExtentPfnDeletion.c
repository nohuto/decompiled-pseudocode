/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1404C8730
 * Callers:
 *     MiClearFileOnlyPfn @ 0x140251428 (MiClearFileOnlyPfn.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeFileOnlyReaper @ 0x1404C87B0 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  KIRQL v2; // bl

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A8E0);
    *a1 = qword_140E2D6E8;
    qword_140E2D6E8 = (__int64)a1;
    if ( !qword_140E2D6F0 )
      qword_140E2D6F0 = (__int64)a1;
    ++qword_140E2D6F8;
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A8E0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(dword_140E3A8E0);
    MiWakeFileOnlyReaper();
    MiReleaseSpinLockExclusive(dword_140E3A8E0, v2);
  }
}
