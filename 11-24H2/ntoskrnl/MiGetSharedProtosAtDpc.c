/*
 * XREFs of MiGetSharedProtosAtDpc @ 0x1404272D0
 * Callers:
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x140210CC0 (MiLocateSessionProtosInSubsection.c)
 */

__int64 *__fastcall MiGetSharedProtosAtDpc(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 *SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
