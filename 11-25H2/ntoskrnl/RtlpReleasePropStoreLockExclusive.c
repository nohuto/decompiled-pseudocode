/*
 * XREFs of RtlpReleasePropStoreLockExclusive @ 0x1405DE18C
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405DDA30 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405DDB80 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405DDF10 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405DDFF0 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
