/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x140677D88
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x140677D24 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x14080067C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSignalNonPagedPoolWatchers(int a1)
{
  KIRQL v2; // di
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  LONG SignalState; // eax

  v2 = 17;
  if ( !a1 )
    v2 = ExAcquireSpinLockExclusive(dword_140E3CC80);
  if ( qword_140E38E50 )
  {
    v3 = *(_QWORD *)&MiState;
    v4 = qword_140E2CB88;
    SignalState = qword_140E38E50->Header.SignalState;
    if ( qword_140E2CB88 < (unsigned __int64)(*(_QWORD *)&MiState - 5120LL) )
    {
      if ( !SignalState )
        KeSetEvent(qword_140E38E50, 0, 0);
    }
    else if ( SignalState )
    {
      KeResetEvent(qword_140E38E50);
    }
    if ( v4 < v3 - 2048 )
    {
      if ( qword_140E38E48->Header.SignalState )
        KeResetEvent(qword_140E38E48);
    }
    else if ( !qword_140E38E48->Header.SignalState )
    {
      KeSetEvent(qword_140E38E48, 0, 0);
    }
  }
  if ( !a1 )
    MiReleaseSpinLockExclusive(dword_140E3CC80, v2);
}
