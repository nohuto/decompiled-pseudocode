/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x140676B54
 * Callers:
 *     MiPerformMemoryChange @ 0x14066E094 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140676BB8 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 __fastcall MiInitializeNonPagedPoolThresholds(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8

  if ( a1 )
  {
    v1 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3CB40);
  }
  else
  {
    v1 = ExAcquireSpinLockExclusive(dword_140E3CB40);
  }
  v2 = qword_140E37558;
  if ( qword_140E37558 > qword_140E3D450 )
    v2 = qword_140E3D450;
  *(_QWORD *)&MiState = v2;
  MiSignalNonPagedPoolWatchers(1LL);
  return MiReleaseSpinLockExclusive(dword_140E3CB40, v1);
}
