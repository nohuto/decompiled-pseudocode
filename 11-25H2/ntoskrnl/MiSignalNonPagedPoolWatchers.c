/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x14066B270
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x14066B20C (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

void __fastcall MiSignalNonPagedPoolWatchers(int a1)
{
  KIRQL v2; // di
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  LONG SignalState; // eax

  v2 = 17;
  if ( !a1 )
    v2 = ExAcquireSpinLockExclusive(dword_140E3C900);
  if ( qword_140E38AD0 )
  {
    v3 = *(_QWORD *)&MiState;
    v4 = qword_140E2C808;
    SignalState = qword_140E38AD0->Header.SignalState;
    if ( qword_140E2C808 < (unsigned __int64)(*(_QWORD *)&MiState - 5120LL) )
    {
      if ( !SignalState )
        KeSetEvent(qword_140E38AD0, 0, 0);
    }
    else if ( SignalState )
    {
      KeResetEvent(qword_140E38AD0);
    }
    if ( v4 < v3 - 2048 )
    {
      if ( qword_140E38AC8->Header.SignalState )
        KeResetEvent(qword_140E38AC8);
    }
    else if ( !qword_140E38AC8->Header.SignalState )
    {
      KeSetEvent(qword_140E38AC8, 0, 0);
    }
  }
  if ( !a1 )
    MiReleaseSpinLockExclusive(dword_140E3C900, v2);
}
