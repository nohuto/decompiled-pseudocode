/*
 * XREFs of RtlpReleasePropStoreLockShared @ 0x1405EA310
 * Callers:
 *     RtlQueryPointerMapping @ 0x1405E9F00 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1405E9FC0 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlpReleasePropStoreLockShared(volatile LONG *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockSharedFromDpcLevel(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
