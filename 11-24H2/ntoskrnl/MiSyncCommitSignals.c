/*
 * XREFs of MiSyncCommitSignals @ 0x14046B194
 * Callers:
 *     MiComputeCommitThresholds @ 0x14046B098 (MiComputeCommitThresholds.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

int __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  KIRQL v4; // di
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx
  struct _KEVENT *v10; // rcx
  volatile LONG *v11; // rcx

  if ( a2 )
  {
    v4 = 17;
  }
  else
  {
    v11 = (volatile LONG *)(a1 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v4 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    }
    else
    {
      v4 = ExAcquireSpinLockExclusive(v11);
    }
  }
  v5 = *(_QWORD *)(a1 + 19264);
  v6 = *(_QWORD *)(a1 + 16856);
  if ( v5 < v6 )
  {
    v9 = *(struct _KEVENT **)(a1 + 296);
    if ( !v9->Header.SignalState )
      LODWORD(v6) = KeSetEvent(v9, 0, 0);
    v10 = *(struct _KEVENT **)(a1 + 304);
    if ( v10->Header.SignalState == 1 )
    {
      KeResetEvent(v10);
      v8 = *(struct _KEVENT **)(a1 + 312);
LABEL_8:
      LODWORD(v6) = KeResetEvent(v8);
    }
  }
  else
  {
    v7 = *(struct _KEVENT **)(a1 + 304);
    if ( v5 >= *(_QWORD *)(a1 + 16864) )
    {
      if ( !v7->Header.SignalState )
        KeSetEvent(v7, 0, 0);
      v6 = *(_QWORD *)(a1 + 16840);
      if ( *(_QWORD *)(a1 + 19608) == v6 )
        LODWORD(v6) = KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
    }
    else if ( v7->Header.SignalState == 1 )
    {
      KeResetEvent(v7);
      LODWORD(v6) = KeResetEvent(*(PRKEVENT *)(a1 + 312));
    }
    v8 = *(struct _KEVENT **)(a1 + 296);
    if ( v8->Header.SignalState == 1 )
      goto LABEL_8;
  }
  if ( !a2 )
    LODWORD(v6) = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v4);
  return v6;
}
