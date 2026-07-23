/*
 * XREFs of MiUpdateCommitCounts @ 0x140427C9C
 * Callers:
 *     MiReplenishLocalCommit @ 0x140427BF0 (MiReplenishLocalCommit.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int64 __fastcall MiUpdateCommitCounts(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  bool v10; // cf
  signed __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  volatile LONG *v14; // rcx
  KIRQL v15; // si
  unsigned __int64 v16; // rdx
  struct _KEVENT *v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _KEVENT *v20; // rcx

  v4 = *(_QWORD *)(a1 + 16864);
  result = a2 + a3;
  v7 = *(_QWORD *)(a1 + 16856);
  if ( a2 + a3 > a2 )
  {
    if ( result >= v4 && a2 < v4 )
      goto LABEL_16;
    if ( a2 >= v7 )
      goto LABEL_6;
    v10 = result < v7;
  }
  else
  {
    if ( a2 >= v4 && result < v4 )
      goto LABEL_16;
    if ( result >= v7 )
      goto LABEL_6;
    v10 = a2 < v7;
  }
  if ( v10 )
    goto LABEL_6;
LABEL_16:
  v14 = (volatile LONG *)(a1 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v15 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v14);
  }
  else
  {
    v15 = ExAcquireSpinLockExclusive(v14);
  }
  v16 = *(_QWORD *)(a1 + 19264);
  if ( v16 < *(_QWORD *)(a1 + 16856) )
  {
    v19 = *(struct _KEVENT **)(a1 + 296);
    if ( !v19->Header.SignalState )
      KeSetEvent(v19, 0, 0);
    v20 = *(struct _KEVENT **)(a1 + 304);
    if ( v20->Header.SignalState != 1 )
      goto LABEL_24;
    KeResetEvent(v20);
    v18 = *(struct _KEVENT **)(a1 + 312);
  }
  else
  {
    v17 = *(struct _KEVENT **)(a1 + 304);
    if ( v16 >= *(_QWORD *)(a1 + 16864) )
    {
      if ( !v17->Header.SignalState )
        KeSetEvent(v17, 0, 0);
      if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
        KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
    }
    else if ( v17->Header.SignalState == 1 )
    {
      KeResetEvent(v17);
      KeResetEvent(*(PRKEVENT *)(a1 + 312));
    }
    v18 = *(struct _KEVENT **)(a1 + 296);
    if ( v18->Header.SignalState != 1 )
      goto LABEL_24;
  }
  KeResetEvent(v18);
LABEL_24:
  result = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v15);
LABEL_6:
  if ( (a4 & 0x10) == 0 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19328), a3);
    result = *(_QWORD *)(a1 + 16832);
    v12 = a3 + v11;
    do
    {
      if ( v12 <= result )
        break;
      v13 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16832), v12, result);
    }
    while ( v13 != result );
  }
  return result;
}
