/*
 * XREFs of RtlpReleasePropStoreLockShared @ 0x1405E7860
 * Callers:
 *     RtlQueryPointerMapping @ 0x1405E7450 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x1405E7510 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
