/*
 * XREFs of RtlpReleasePropStoreLockExclusive @ 0x1405E782C
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405E70D0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7220 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405E75B0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405E7690 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlpReleasePropStoreLockExclusive(volatile LONG *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
