/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x14066B20C
 * Callers:
 *     MiPerformMemoryChange @ 0x140662554 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14066B270 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 __fastcall MiInitializeNonPagedPoolThresholds(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8

  if ( a1 )
  {
    v1 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3C900);
  }
  else
  {
    v1 = ExAcquireSpinLockExclusive(dword_140E3C900);
  }
  v2 = qword_140E37318;
  if ( qword_140E37318 > qword_140E3D210 )
    v2 = qword_140E3D210;
  *(_QWORD *)&MiState = v2;
  MiSignalNonPagedPoolWatchers(1LL);
  return MiReleaseSpinLockExclusive(dword_140E3C900, v1);
}
