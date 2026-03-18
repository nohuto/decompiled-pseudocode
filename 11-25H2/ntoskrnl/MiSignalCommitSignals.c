/*
 * XREFs of MiSignalCommitSignals @ 0x140329790
 * Callers:
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiReplenishLocalCommit @ 0x140438C88 (MiReplenishLocalCommit.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

unsigned __int64 __fastcall MiSignalCommitSignals(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx
  struct _KEVENT *v10; // rcx
  KIRQL v11; // si
  volatile LONG *v12; // rcx

  v4 = *(_QWORD *)(a1 + 16864);
  result = *(_QWORD *)(a1 + 16856);
  if ( a2 > a3 )
  {
    if ( a2 >= v4 && a3 < v4 || a2 >= result && a3 < result )
    {
LABEL_26:
      v12 = (volatile LONG *)(a1 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v11 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v12);
      }
      else
      {
        v11 = ExAcquireSpinLockExclusive(v12);
      }
      v6 = *(_QWORD *)(a1 + 19264);
      if ( v6 < *(_QWORD *)(a1 + 16856) )
      {
        v9 = *(struct _KEVENT **)(a1 + 296);
        if ( !v9->Header.SignalState )
          KeSetEvent(v9, 0, 0);
        v10 = *(struct _KEVENT **)(a1 + 304);
        if ( v10->Header.SignalState != 1 )
          return MiReleaseSpinLockExclusive(a1 + 16888, v11);
        KeResetEvent(v10);
        v8 = *(struct _KEVENT **)(a1 + 312);
      }
      else
      {
        v7 = *(struct _KEVENT **)(a1 + 304);
        if ( v6 >= *(_QWORD *)(a1 + 16864) )
        {
          if ( !v7->Header.SignalState )
            KeSetEvent(v7, 0, 0);
          if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
            KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
          v8 = *(struct _KEVENT **)(a1 + 296);
          if ( v8->Header.SignalState != 1 )
            return MiReleaseSpinLockExclusive(a1 + 16888, v11);
        }
        else
        {
          if ( v7->Header.SignalState == 1 )
          {
            KeResetEvent(v7);
            KeResetEvent(*(PRKEVENT *)(a1 + 312));
          }
          v8 = *(struct _KEVENT **)(a1 + 296);
          if ( v8->Header.SignalState != 1 )
            return MiReleaseSpinLockExclusive(a1 + 16888, v11);
        }
      }
      KeResetEvent(v8);
      return MiReleaseSpinLockExclusive(a1 + 16888, v11);
    }
  }
  else if ( a3 >= v4 && a2 < v4 || a3 >= result && a2 < result )
  {
    goto LABEL_26;
  }
  return result;
}
