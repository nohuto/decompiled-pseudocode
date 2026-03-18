/*
 * XREFs of RtlpReleasePropStoreLockExclusive @ 0x1405EA2DC
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405E9B80 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E9CD0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405EA060 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405EA140 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
