/*
 * XREFs of MiPulseCommitSignal @ 0x1404CE238
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 */

__int64 __fastcall MiPulseCommitSignal(__int64 a1)
{
  _DWORD *v2; // rdi
  volatile LONG *v3; // rcx
  KIRQL v4; // si
  struct _KEVENT *v5; // rcx

  v2 = (_DWORD *)(a1 + 16888);
  v3 = (volatile LONG *)(a1 + 16888);
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive(v3);
  }
  v5 = *(struct _KEVENT **)(a1 + 304);
  if ( !v5->Header.SignalState )
    KePulseEvent(v5, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 312) + 4LL) && *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
    KePulseEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
  return MiReleaseSpinLockExclusive(v2, v4);
}
