/*
 * XREFs of MiSignalCommitSignals @ 0x14029EE00
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MiReplenishLocalCommit @ 0x140427BF0 (MiReplenishLocalCommit.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int64 __fastcall MiSignalCommitSignals(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  KIRQL v6; // si
  unsigned __int64 v7; // rdx
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx
  struct _KEVENT *v10; // rcx
  struct _KEVENT *v11; // rcx
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
        v6 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v12);
      }
      else
      {
        v6 = ExAcquireSpinLockExclusive(v12);
      }
      v7 = *(_QWORD *)(a1 + 19264);
      if ( v7 < *(_QWORD *)(a1 + 16856) )
      {
        v10 = *(struct _KEVENT **)(a1 + 296);
        if ( !v10->Header.SignalState )
          KeSetEvent(v10, 0, 0);
        v11 = *(struct _KEVENT **)(a1 + 304);
        if ( v11->Header.SignalState != 1 )
          return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v6);
        KeResetEvent(v11);
        v9 = *(struct _KEVENT **)(a1 + 312);
      }
      else
      {
        v8 = *(struct _KEVENT **)(a1 + 304);
        if ( v7 >= *(_QWORD *)(a1 + 16864) )
        {
          if ( !v8->Header.SignalState )
            KeSetEvent(v8, 0, 0);
          if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
            KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
          v9 = *(struct _KEVENT **)(a1 + 296);
          if ( v9->Header.SignalState != 1 )
            return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v6);
        }
        else
        {
          if ( v8->Header.SignalState == 1 )
          {
            KeResetEvent(v8);
            KeResetEvent(*(PRKEVENT *)(a1 + 312));
          }
          v9 = *(struct _KEVENT **)(a1 + 296);
          if ( v9->Header.SignalState != 1 )
            return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v6);
        }
      }
      KeResetEvent(v9);
      return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v6);
    }
  }
  else if ( a3 >= v4 && a2 < v4 || a3 >= result && a2 < result )
  {
    goto LABEL_26;
  }
  return result;
}
