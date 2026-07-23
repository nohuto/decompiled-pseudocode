/*
 * XREFs of MiInitializeNonPagedPoolThresholds @ 0x140677D24
 * Callers:
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140677D88 (MiSignalNonPagedPoolWatchers.c)
 */

__int64 __fastcall MiInitializeNonPagedPoolThresholds(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8

  if ( a1 )
  {
    v1 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3CC80);
  }
  else
  {
    v1 = ExAcquireSpinLockExclusive(dword_140E3CC80);
  }
  v2 = qword_140E37698;
  if ( qword_140E37698 > qword_140E3D590 )
    v2 = qword_140E3D590;
  *(_QWORD *)&MiState = v2;
  MiSignalNonPagedPoolWatchers(1LL);
  return MiReleaseSpinLockExclusive(dword_140E3CC80, v1);
}
