/*
 * XREFs of MiSignalCommitSignals @ 0x14028F200
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiReplenishLocalCommit @ 0x140434C90 (MiReplenishLocalCommit.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
