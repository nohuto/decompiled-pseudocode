/*
 * XREFs of MiProtectPageListLocks @ 0x140667950
 * Callers:
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MiProtectPageListLocks(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char result; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 19424));
  result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 3168));
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
  return result;
}
