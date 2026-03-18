/*
 * XREFs of MiQueueExtentPfnDeletion @ 0x1404CF468
 * Callers:
 *     MiClearFileOnlyPfn @ 0x1402246D8 (MiClearFileOnlyPfn.c)
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiWakeFileOnlyReaper @ 0x1404CF4E8 (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiQueueExtentPfnDeletion(_QWORD *a1)
{
  KIRQL v2; // bl

  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3A7A0);
    *a1 = qword_140E2D5A8;
    qword_140E2D5A8 = (__int64)a1;
    if ( !qword_140E2D5B0 )
      qword_140E2D5B0 = (__int64)a1;
    ++qword_140E2D5B8;
    MiWakeFileOnlyReaper();
    ExReleaseSpinLockExclusiveFromDpcLevel(dword_140E3A7A0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(dword_140E3A7A0);
    MiWakeFileOnlyReaper();
    MiReleaseSpinLockExclusive(dword_140E3A7A0, v2);
  }
}
