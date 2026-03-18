/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140676BB8
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x140676B54 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407FFF3C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSignalNonPagedPoolWatchers(int a1)
{
  KIRQL v2; // di
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  LONG SignalState; // eax

  v2 = 17;
  if ( !a1 )
    v2 = ExAcquireSpinLockExclusive(dword_140E3CB40);
  if ( qword_140E38D10 )
  {
    v3 = *(_QWORD *)&MiState;
    v4 = qword_140E2CA48;
    SignalState = qword_140E38D10->Header.SignalState;
    if ( qword_140E2CA48 < (unsigned __int64)(*(_QWORD *)&MiState - 5120LL) )
    {
      if ( !SignalState )
        KeSetEvent(qword_140E38D10, 0, 0);
    }
    else if ( SignalState )
    {
      KeResetEvent(qword_140E38D10);
    }
    if ( v4 < v3 - 2048 )
    {
      if ( qword_140E38D08->Header.SignalState )
        KeResetEvent(qword_140E38D08);
    }
    else if ( !qword_140E38D08->Header.SignalState )
    {
      KeSetEvent(qword_140E38D08, 0, 0);
    }
  }
  if ( !a1 )
    MiReleaseSpinLockExclusive(dword_140E3CB40, v2);
}
