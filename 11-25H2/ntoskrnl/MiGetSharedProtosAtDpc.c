/*
 * XREFs of MiGetSharedProtosAtDpc @ 0x1403E0B9C
 * Callers:
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x1403E0D5C (MiLocateSessionProtosInSubsection.c)
 */

__int64 __fastcall MiGetSharedProtosAtDpc(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
